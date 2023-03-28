import { Input, Icon, Stack, Pressable, Center, NativeBaseProvider } from 'native-base';
import { MaterialIcons } from '@expo/vector-icons';
import { TextInput, StyleSheet, View } from 'react-native';
import React from 'react';

type Props = {
  style?: {};
};

export function InputNativeBase(props: Props): JSX.Element {
  const filterTemplate = (): JSX.Element => {
    return <Icon as={<MaterialIcons name='filter-alt' />} size={5} mr='2' color='muted.400' />;
  };

  const searchTemplate = (): JSX.Element => {
    return <Icon as={<MaterialIcons name='search' />} size={5} ml='2' color='muted.400' />;
  };
  return (
    <>
      {/* <TextInput
        style={{
          width: '80%',
          borderColor: 'gray',
          borderWidth: 1,
          paddingLeft: 20,
          paddingTop: 5,
          paddingBottom: 5,
          borderRadius: 25,
          backgroundColor: '#fff',
          shadowColor: '#171717',
          elevation: 10,
        }}
        placeholder='Pesquisar...'
      ></TextInput> */}

      <Input
        w={{
          base: '80%',
          md: '25%',
        }}
        inputMode='search'
        type='text'
        variant='rounded'
        style={props.style}
        placeholder='Procurar'
        InputRightElement={filterTemplate()}
        InputLeftElement={searchTemplate()}
      />
    </>
  );
}
