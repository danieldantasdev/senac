import { NativeBaseProvider } from 'native-base';
import { ScrollView, StyleSheet } from 'react-native';
import { Card } from 'react-native-paper';

import EditScreenInfo from '../../components/EditScreenInfo';
import { ButtonNativeBase } from '../../components/nativeBase/button';
import { InputNativeBase } from '../../components/nativeBase/input';
import { Text, View } from '../../components/Themed';
import { getAllBadges } from '../../services/badge/badge';

export default function TabOneScreen() {
  const { badges, setBadges, search, setSearch, filteredData, setFilteredData, masterData, setMasterData } =
    getAllBadges();

  const styles = StyleSheet.create({
    container: {
      alignItems: 'center',
      flexDirection: 'column',
    },
    flex: {
      flexDirection: 'row',
      marginVertical: 25,
      marginHorizontal: 30,
      gap: 10,
    },
    cardList: {
      justifyContent: 'center',
      flexDirection: 'row',
      flexWrap: 'wrap',
      gap: 20,
      marginBottom: 50,
    },
    card: {
      alignItems: 'center',
      justifyContent: 'center',
      width: 130,
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
                <View key={badge.id}>
                  <ButtonNativeBase
                    borderRadius={'2xl'}
                    _android={{
                      bg: 'contrastThreshold',
                      _text: {
                        color: 'coolGray.800',
                        fontWeight: 'medium',
                      },
                    }}
                    _pressed={{
                      bg: 'coolGray.300',
                      _text: {
                        color: 'warmGray.100',
                      },
                    }}
                    onPress={(e) => alert(badge.descricao)}
                  >
                    <Card style={styles.card} elevation={5} mode={'elevated'}>
                      <Card.Cover style={styles.image} source={{ uri: `data:image/png;base64,${badge.imagem}` }} />
                      <Card.Content>
                        <Text>{badge.descricao}</Text>
                      </Card.Content>
                    </Card>
                  </ButtonNativeBase>
                </View>
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
          fontSize='16'
          inputMode='search'
          variant='rounded'
          type='text'
          onChange={(e) => {
            searchFilter(e);
          }}
        ></InputNativeBase>

        <ScrollView horizontal={true} showsHorizontalScrollIndicator={false} pagingEnabled={true}>
          <View style={styles.flex}>
            <ButtonNativeBase
              size='sm'
              borderRadius={'2xl'}
              _android={{
                bg: 'amber.100',
                _text: {
                  color: 'coolGray.800',
                  fontWeight: 'medium',
                },
              }}
              _pressed={{
                bg: 'amber.400',
                _text: {
                  color: 'warmGray.100',
                },
              }}
            >
              Todas
            </ButtonNativeBase>
            {masterData.map((badge) => {
              return (
                <View key={badge.id}>
                  <ButtonNativeBase
                    size='sm'
                    borderRadius={'2xl'}
                    _android={{
                      bg: 'blue.100',
                      _text: {
                        color: 'coolGray.800',
                        fontWeight: 'medium',
                      },
                    }}
                    _pressed={{
                      bg: 'blue.400',
                      _text: {
                        color: 'warmGray.100',
                      },
                    }}
                    onPress={(e) => {
                      alert(badge.descricao);
                    }}
                  >
                    {badge.descricao}
                  </ButtonNativeBase>
                </View>
              );
            })}
          </View>
        </ScrollView>
      </View>
      <EditScreenInfo view={viewTemplate()} />
    </NativeBaseProvider>
  );
}
