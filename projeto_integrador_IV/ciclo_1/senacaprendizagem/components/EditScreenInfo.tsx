import React from 'react';
import { StyleSheet } from 'react-native';

import Colors from '../constants/Colors';
import { ExternalLink } from './ExternalLink';
import { MonoText } from './StyledText';
import { Text, View } from './Themed';

type Props = {
  path?: string;
  view?: JSX.Element;
};

export default function EditScreenInfo(props: Props) {
  return (
    <View>
      <View style={styles.getStartedContainer}></View>
      <View>{props.view}</View>

      <View style={styles.helpContainer}>
        <ExternalLink
          style={styles.helpLink}
          href='https://docs.expo.io/get-started/create-a-new-app/#opening-the-app-on-your-phonetablet'
        >
          <Text style={styles.helpLinkText} lightColor={Colors.light.tint}>
            Tap here if your app doesn't automatically update after making changes
          </Text>
        </ExternalLink>
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  getStartedContainer: {
    alignItems: 'center',
    marginHorizontal: 50,
  },
  homeScreenFilename: {
    marginVertical: 7,
  },
  codeHighlightContainer: {
    borderRadius: 3,
    paddingHorizontal: 4,
  },
  getStartedText: {
    fontSize: 17,
    lineHeight: 24,
    textAlign: 'center',
  },
  helpContainer: {
    marginTop: 15,
    marginHorizontal: 20,
    alignItems: 'center',
  },
  helpLink: {
    paddingVertical: 15,
  },
  helpLinkText: {
    textAlign: 'center',
  },
});
