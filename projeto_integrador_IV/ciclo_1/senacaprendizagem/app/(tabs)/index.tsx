import { Link } from 'expo-router';
import { NativeBaseProvider } from 'native-base';
import { useEffect, useState } from 'react';
import { ScrollView, StyleSheet, SafeAreaView } from 'react-native';
import { Card } from 'react-native-paper';

import EditScreenInfo from '../../components/EditScreenInfo';
import { ButtonNativeBase } from '../../components/nativeBase/button';
import { InputNativeBase } from '../../components/nativeBase/input';
import { Text, View } from '../../components/Themed';
import { Badge } from '../../model/badge';
import { getAllBadges } from '../../services/badge/badge';
import { api } from '../../services/http/http';

export default function TabOneScreen() {
  // const badgesList = getAllBadges();
  const [badges, setBadges] = useState<Badge[]>([]);
  const [search, setSearch] = useState('');
  const [filteredData, setFilteredData] = useState<Badge[]>([]);
  const [masterData, setMasterData] = useState<Badge[]>([]);

  useEffect(() => {
    api.get<Badge[]>('/Badge').then((response) => {
      setBadges(response.data);
      setMasterData(response.data);
    });
  }, []);


  const styles = StyleSheet.create({
    container: {
      alignItems: 'center',
      flexDirection: 'column',
    },
    flex: {
      flexDirection: 'row',
      marginVertical: 25,
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
      width: 150,
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

  const searchFilter = (text: string) => {
    if (text) {
      const newData = masterData.filter(function (item) {
        if (item.descricao) {
          const itemData = item.descricao.toUpperCase();
          const textData = text.toUpperCase();
          return itemData.indexOf(textData) > -1;
        }
      });
      setFilteredData(newData);
    } else {
      setFilteredData(masterData);
    }
    setSearch(text);
  };

  const viewTemplate = (): JSX.Element => {
    return (
      <ScrollView>
        <View style={styles.cardList}>
          {filteredData.map((badge) => {
            if (filteredData !== null) {
              return (
                <>
                <ButtonNativeBase colorScheme='gray' key={badge.id} onPress={e=>alert(badge.descricao)}>
                <Card style={styles.card} elevation={5} mode={'elevated'}>
                  <Card.Cover style={styles.image} source={{ uri: `data:image/png;base64,${badge.imagem}` }} />
                  <Card.Content>
                    <Text>{badge.descricao}</Text>
                  </Card.Content>
                </Card>
                </ButtonNativeBase>
                </>
              );
            }
          })}
        </View>
      </ScrollView>
    );
  };

  return (
    <NativeBaseProvider>
      <View style={styles.container}>
        <InputNativeBase
          value={search}
          onChange={(e) => {
            searchFilter(e);
          }}
        ></InputNativeBase>

        <ScrollView horizontal={true} showsHorizontalScrollIndicator={false} pagingEnabled={true}>
          <View style={styles.flex}>
            <ButtonNativeBase colorScheme='primary' size='sm' key={2}>
              Todas
            </ButtonNativeBase>
            {masterData.map((badge) => {
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