import { Input, Icon, Stack, Pressable, Center, NativeBaseProvider } from 'native-base';
import { MaterialIcons } from '@expo/vector-icons';
import { TextInput, StyleSheet, View, InputModeOptions } from 'react-native';
import React from 'react';
import { ResponsiveValue } from 'native-base/lib/typescript/components/types';

type Props = {
  value?: string;
  style?: {};
  fontSize?: string;
  inputMode?: InputModeOptions | undefined;
  variant?: ResponsiveValue<'outline' | 'underlined' | 'rounded' | 'filled' | 'unstyled' | (string & {})>;
  type?: 'text' | 'password' | undefined;
  onChange?(event: any): void;
};

export function InputNativeBase(props: Props): JSX.Element {
  const filterTemplate = (): JSX.Element => {
    return <Icon as={<MaterialIcons name='filter-alt' />} size={6} mr='2' color='muted.400' />;
  };

  const searchTemplate = (): JSX.Element => {
    return <Icon as={<MaterialIcons name='search' />} size={6} ml='2' color='muted.400' />;
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
        fontSize={props.fontSize}
        inputMode={props.inputMode}
        type={props.type}
        variant={props.variant}
        style={props.style}
        placeholder='Procurar'
        value={props.value}
        InputRightElement={filterTemplate()}
        InputLeftElement={searchTemplate()}
        onChangeText={props.onChange}
      />
    </>
  );
}
