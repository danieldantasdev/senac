import React from 'react';
import { TextInput, View, StyleSheet, Text } from 'react-native';
import { Button } from 'native-base';

type Props = {
  children?: string;
  colorScheme?: string;
  size?: string;
  key: any;
  onPress?(event: any): void;
};

export function ButtonNativeBase(props: Props): JSX.Element {
  return (
    <View>
      <Button
        colorScheme={props.colorScheme}
        size={props.size}
        key={props.key}
        variant={'subtle'}
        onPress={props.onPress}
      >
        {props.children}
      </Button>
    </View>
  );
}

const styles = StyleSheet.create({
  tag: {
    backgroundColor: 'white',
    color: 'black',
    marginVertical: 20,
    padding: 10,
    shadowColor: '#171717',
    elevation: 10,
  },
});
