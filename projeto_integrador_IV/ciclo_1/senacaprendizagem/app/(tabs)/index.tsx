import { NativeBaseProvider } from 'native-base';
import { useState } from 'react';
import { ScrollView, StyleSheet, SafeAreaView } from 'react-native';
import { Card } from 'react-native-paper';

import EditScreenInfo from '../../components/EditScreenInfo';
import { ButtonNativeBase } from '../../components/nativeBase/button';
import { InputNativeBase } from '../../components/nativeBase/input';
import { TagNativeBase } from '../../components/nativeBase/tag';
import { Text, View } from '../../components/Themed';
import { getAllBadges } from '../../services/badge/badge';

export default function TabOneScreen() {
  const badgesList = getAllBadges();

  const styles = StyleSheet.create({
    container: {
      alignItems: 'center',
      flexDirection: 'column',
    },
    flex: {
      flexDirection: 'row',
      marginVertical: 20,
      gap: 10,
    },
    cardList: {
      justifyContent: 'center',
      flexDirection: 'row',
      flexWrap: 'wrap',
      gap: 30,
      marginBottom: 200,
    },
    card: {
      alignItems: 'center',
      justifyContent: 'center',
      width: 100,
      height: 'auto',
      backgroundColor: '#ffffff',
    },
    image: {
      width: 100,
      height: 100,
      padding: 15,
      backgroundColor: '#ffffff',
    },
  });

  const viewTemplate = (): JSX.Element => {
    return (
      <ScrollView>
        <View style={styles.cardList}>
          {badgesList.map((badge) => {
            return (
              <Card style={styles.card} elevation={5} mode={'elevated'}>
                <Card.Cover style={styles.image} source={{ uri: `data:image/png;base64,${badge.imagem}` }} />
                <Card.Content>
                  <Text>{badge.descricao}</Text>
                </Card.Content>
              </Card>
            );
          })}
        </View>
      </ScrollView>
    );
  };

  return (
    <NativeBaseProvider>
      <View style={styles.container}>
        <InputNativeBase></InputNativeBase>

        <ScrollView horizontal={true} showsHorizontalScrollIndicator={false} pagingEnabled={true}>
          <View style={styles.flex}>
            <ButtonNativeBase colorScheme='primary' size='sm' key={2}>
              Todas
            </ButtonNativeBase>
            {badgesList.map((badge) => {
              // alert(badge.imagem);
              return (
                <ButtonNativeBase
                  key={badge.id}
                  colorScheme='secondary'
                  size='sm'
                  onPress={(e) => {
                    alert(badge.descricao);
                  }}
                >
                  {badge.descricao}
                </ButtonNativeBase>
              );
            })}
          </View>
        </ScrollView>
      </View>
      <EditScreenInfo view={viewTemplate()} />
    </NativeBaseProvider>
  );
}
