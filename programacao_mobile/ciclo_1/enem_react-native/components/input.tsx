import React from 'react';
import { Text, TextInput } from 'react-native-paper';
import { View } from 'react-native';
import { Student } from '../model/student';
import { Sisu } from '../model/sisu';
import { Fies } from '../model/fies';
import { Prouni } from '../model/prouni';

export default function Input(): JSX.Element {
  const [note, setNote] = React.useState<string>('');
  const [student, setStudent] = React.useState<Student>({ note: '' });
  const sisu: Sisu = new Sisu();
  const fies: Fies = new Fies();
  const prouni: Prouni = new Prouni();

  const verifyNoteSisu = (): JSX.Element => {
    if (parseInt(note) > 580 && parseInt(note) < 650) {
      sisu.category = 'Sisu';
      sisu.course.name = [
        'Pedagogia',
        '\n',
        'História',
        '\n',
        'Geografia',
        '\n',
        'Gestão de Recursos Humanos',
        '\n',
        'Sistemas de Informação',
        '\n',
        'Gestão Financeira',
        '\n',
        'Marketing',
        '\n',
        'Logística',
        '\n',
        'Química',
        '\n',
        'Física',
        '\n',
        'Análise e Desenvolvimento de Sistemas',
      ];

      return (
        <View style={{ gap: 20 }}>
          <Text>{`O programa é: ${sisu.category}`}</Text>
          <Text>{sisu.course.name}</Text>
        </View>
      );
    } else if (parseInt(note) >= 651 && parseInt(note) <= 750) {
      sisu.category = 'Sisu';
      sisu.course.name = [
        'Nutrição',
        '\n',
        'Psicologia',
        '\n',
        'Cinema',
        '\n',
        'Jornalismo',
        '\n',
        'Enfermagem',
        '\n',
        'Biomedicina',
        '\n',
        'Publicidade e Propaganda',
        '\n',
        'Administração',
        '\n',
        'Agronomia',
        '\n',
        'Gastronomia',
        '\n',
        'Ciências Contábeis',
        '\n',
        'Comércio Exterior',
        '\n',
        'Filosofia',
        '\n',
        'Relações Internacionais',
        '\n',
        'Fisioterapia',
        '\n',
        'Sistemas de Informação',
        '\n',
        'Medicina Veterinária',
      ];

      return (
        <View style={{ gap: 20 }}>
          <Text>{`O programa é: ${sisu.category}`}</Text>
          <Text>{sisu.course.name}</Text>
        </View>
      );
    } else if (parseInt(note) >= 751 && parseInt(note) <= 850) {
      sisu.category = 'Sisu';
      sisu.course.name = [
        'Medicina',
        '\n',
        'Odontologia',
        '\n',
        'Engenharia Civil',
        '\n',
        'Direito',
        '\n',
        'Arquitetura e Urbanismo',
        '\n',
        'Farmácia',
      ];

      return (
        <View style={{ gap: 20 }}>
          <Text>{`O programa é: ${sisu.category}`}</Text>
          <Text>{sisu.course.name}</Text>
        </View>
      );
    }
    return <></>;
  };

  const verifyNoteProuni = (): JSX.Element => {
    if (parseInt(note) > 450 && parseInt(note) < 600) {
      prouni.category = 'Prouni';
      prouni.course.name = [
        'Ciências Aeronáuticas',
        '\n',
        'Design de Interiores',
        '\n',
        'Pedagogia',
        '\n',
        'Dança',
        '\n',
        'Administração',
        '\n',
        'Ciências Contábeis',
        '\n',
        'Educação Física',
        '\n',
        'Gestão da Tecnologia da Informação',
        '\n',
        'Enfermagem',
        '\n',
        'Gestão Financeira',
        '\n',
        'Desenho Industrial',
      ];

      return (
        <View style={{ gap: 20 }}>
          <Text>{`O programa é: ${prouni.category}`}</Text>
          <Text>{prouni.course.name}</Text>
        </View>
      );
    } else if (parseInt(note) >= 550 && parseInt(note) <= 650) {
      prouni.category = 'Prouni';
      prouni.course.name = [
        'Nutrição',
        '\n',
        'Psicologia',
        '\n',
        'Cinema',
        '\n',
        'Jornalismo',
        '\n',
        'Enfermagem',
        '\n',
        'Biomedicina',
        '\n',
        'Publicidade e Propaganda',
        '\n',
        'Administração',
        '\n',
        'Agronomia',
        '\n',
        'Gastronomia',
        '\n',
        'Ciências Contábeis',
        '\n',
        'Comércio Exterior',
        '\n',
        'Filosofia',
        '\n',
        'Relações Internacionais',
        '\n',
        'Fisioterapia',
        '\n',
        'Sistemas de Informação',
        '\n',
        'Medicina Veterinária',
      ];

      return (
        <View style={{ gap: 20, marginTop: 10 }}>
          <Text>{`O programa é: ${prouni.category}`}</Text>
          <Text>{prouni.course.name}</Text>
        </View>
      );
    } else if (parseInt(note) >= 650 && parseInt(note) <= 770) {
      prouni.category = 'Prouni';
      prouni.course.name = ['Medicina', '\n', 'Engenharia Civil', '\n', 'Direito'];

      return (
        <View style={{ gap: 20, marginTop: 10 }}>
          <Text>{`O programa é: ${prouni.category}`}</Text>
          <Text>{prouni.course.name}</Text>
        </View>
      );
    }
    return <></>;
  };

  const verifyNoteFies = (): JSX.Element => {
    if (parseInt(note) > 450 && parseInt(note) < 600) {
      fies.category = 'Fies';
      fies.course.name = [
        'Jornalismo',
        '\n',
        'Administração',
        '\n',
        'Pedagogia',
        '\n',
        'Direito',
        '\n',
        'Economia',
        '\n',
        'Jornalismo',
        '\n',
        'Nutrição',
        '\n',
        'Rádio e TV',
        '\n',
        'Publicidade e Propaganda',
        '\n',
        'Design de Produto',
        '\n',
        'Cinema',
        '\n',
        'Estatística',
      ];

      return (
        <View style={{ gap: 20 }}>
          <Text>{`O programa é: ${fies.category}`}</Text>
          <Text>{fies.course.name}</Text>
        </View>
      );
    } else if (parseInt(note) >= 600 && parseInt(note) <= 700) {
      fies.category = 'Fies';
      fies.course.name = [
        'Engenharia Aeronáutica',
        '\n',
        'Engenharia Civil',
        '\n',
        'Medicina',
        '\n',
        'Odontologia',
        '\n',
        'Psicologia',
        '\n',
        'Enfermagem',
        '\n',
        'Engenharia de Produção',
      ];

      return (
        <View style={{ gap: 20, marginTop: 10 }}>
          <Text>{`O programa é: ${fies.category}`}</Text>
          <Text>{fies.course.name}</Text>
        </View>
      );
    }
    return <></>;
  };

  return (
    <View style={{ width: '100%', paddingHorizontal: 20 }}>
      <Text>Informe a nota do aluno</Text>
      <TextInput
        label='Nota'
        value={note}
        onChangeText={(note) => {
          setNote(note);
          setStudent({ note: note });
        }}
      />
      {verifyNoteSisu()}
      {verifyNoteProuni()}
      {verifyNoteFies()}
    </View>
  );
}
