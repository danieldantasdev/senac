import { StyleSheet } from 'react-native';

import EditScreenInfo from '../../components/EditScreenInfo';
import { View } from '../../components/Themed';
import { getAllBadges } from '../../services/badge/badge';

export default function DetailBadgeScreen() {
  const { badges, setBadges, search, setSearch, filteredData, setFilteredData, masterData, setMasterData } =
    getAllBadges();

  return (
    <View style={styles.container}>
      {/* <Text style={styles.title}>{guildSelected.descricao}</Text> */}
      {/* {badges.map((value) => {
        return <Text>{value.status}</Text>;
      })} */}
      <View style={styles.separator} lightColor='#eee' darkColor='rgba(255,255,255,0.1)' />
      <EditScreenInfo path='app/(tabs)/two.tsx' />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  title: {
    fontSize: 20,
    fontWeight: 'bold',
  },
  separator: {
    marginVertical: 30,
    height: 1,
    width: '80%',
  },
});
