import { useState } from 'react';
import { Image, ScrollView, StyleSheet, Touchable } from 'react-native';
import { Avatar, Button, Card } from 'react-native-paper';

import EditScreenInfo from '../../components/EditScreenInfo';
import { Text, View } from '../../components/Themed';

export default function TabOneScreen() {
  return (
    // <View style={styles.container}>
    <EditScreenInfo view={viewTemplate()} />
    // </View>
  );
}

const badgesList: {}[] = [
  { id: 1, image: 'https://picsum.photos/700', title: 'badge 1' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
  { id: 2, image: 'https://picsum.photos/700', title: 'badge 2' },
];

const viewTemplate = (): JSX.Element => {
  return (
    <ScrollView style={styles.l_scrollview}>
      <View style={styles.cardList}>
        {badgesList.map((badge) => {
          return (
            <Card style={styles.card} elevation={5} mode={'elevated'}>
              <Card.Cover style={styles.image} source={{ uri: badge.image }} />
              <Card.Content>
                <Text>{badge.title}</Text>
              </Card.Content>
            </Card>
          );
        })}
      </View>
    </ScrollView>
  );
};

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
  cardList: {
    display: 'flex',
    justifyContent: 'center',
    flexDirection: 'row',
    gap: 30,
    flexWrap: 'wrap',
  },
  card: {
    display: 'flex',
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
  l_scrollview: {
    paddingTop: 80,
  },
});
