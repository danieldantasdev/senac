`Tarefa 5 - Medidas estatísticas e tratamento estatísticos de dados agrupados Em um estudo experimental, realizado em um laboratório de testes, para avaliar o tempo gasto em minutos para realizar a pintura de um componente, foram encontrados os seguintes dados:`

5 7 12 7 9 6 4 8 8 13
13 5 7 9 11 5 12 10 4 15
5 6 15 5 5 8 9 5 6 10
9 5 4 9 10 6 6 4 5 6
15 14 15 23 4 25 9 13 8 7
6 4 5 4 17 18 11 8 9 17

Pede-se:

a) Ordenar os dados;

4 4 4 4 4 4 4 5 5 5
5 5 5 5 5 5 5 6 6 6
6 6 6 6 7 7 7 7 8 8
8 8 8 9 9 9 9 9 9 9
10 10 10 11 11 12 12 13 13 13
14 15 15 15 15 17 17 18 23 25

b) Construir a distribuição de frequência demonstrando os passos necessários
e os cálculos. (Referência: aula 6).
i. Calcular ht `amplitude total dos dados`

```
(ht = Xmax - Xmin)

ht = 25 - 4

ht = 21

```

ii. Calcular k `número de classes - regra de strugs`

```
(k = 1 + 3,3 log n)

n = 60

k = 1 + 3,3 * 1.77815125038

k = 6.86789912627

k =~ 7 classes

```

iii. Calcular hc `amplitude de intervalo de classes`

```
(hc = ht / k)

hc = 21 / 7

hc = 3

```

iv. Verificar k.hc > ht

```
(k.hc > ht)

7*3 > 21

21 > 21

```

v. Definir limites de classe

vi. Calcular o ponto médio de cada classe (Xi)

```
(xi = (li + Li) / 2)

```

vii. Contar os elementos de cada classe e estabelecer a frequência
absoluta (fi)

viii. Calcular os tipos de frequência (%fr, fac, %frc, fad, %frd)

Colocar os valores na tabela padrão abaixo:

`Classe 1`

> i li Li Tempo(min)

4 --- 7

> Xi

5,5

> fi

24

> %fr

40

> fac

24

> %frc

40

> fad

60

> %frd

100

`Classe 2`

> i li Li Tempo(min)

7 --- 10

> Xi

8,5

> fi

16

> %fr

26,66 - 27

> fac

40

> %frc

66,66 - 67

> fad

36

> %frd

60

`Classe 3`

> i li Li Tempo(min)

10 --- 13

> Xi

11,5

> fi

7

> %fr

11,66 - 12

> fac

47

> %frc

78,33 - 78

> fad

20

> %frd

33,33- 34

`Classe 4`

> i li Li Tempo(min)

13 --- 16

> Xi

14,5

> fi

8

> %fr

13,33 - 13

> fac

55

> %frc

91,66 - 92

> fad

13

> %frd

21,66 - 22

`Classe 5`

> i li Li Tempo(min)

16 --- 19

> Xi

17,5

> fi

3

> %fr

5

> fac

58

> %frc

96,66 - 97

> fad

5

> %frd

8,33 - 9

`Classe 6`

> i li Li Tempo(min)

19 --- 22

> Xi

20,5

> fi

1

> %fr

1,66 - 2

> fac

59

> %frc

98,33 - 99

> fad

2

> %frd

3,33 - 4

`Classe 7`

> i li Li Tempo(min)

22 --- 25

> Xi

23,5

> fi

1

> %fr

1,66 - 2

> fac

60

> %frc

100

> fad

1

> %frd

1,66 - 2

`Total de Fi das classes`

> Fi

60

c) Após a análise dos resultados, calcular o percentual do tempo de pintura do
componente com duração inferior a 10 min;

-   Vimos que 40 dos componentes com duração inferior a 10 min
-   67% dos componentes tem duração inferior a 10 min
-   7 - 10 é o intervalo

d) Calcular o percentual do tempo de pintura do componente com duração
superior a 12 min;

```
10 12 13
34 x 22

13 - 10 / 13 - 12 = 22 - 34 / 22 - x

3 / 1 = -12 / 22 - %frd

frd = 26

```

e) Construir o histograma com os dados acima. (caso não possua excell ou não
tenha domínio, pode ser feito a mão livre com régua);

f) Construa a ogiva de Galton. (caso não possua excell ou não tenha domínio,
pode ser feito a mão livre com régua);

g) Considerando que a especificação de tempo de pintura do componente seja
menor ou igual a 10min, trace comentários e análises sobre o processo de
pintura apresentado.

-   Conclui-se que 24 dos 60 componentes têm tempo de pinturas inferiores a 7min, ou seja 14,4%.
-   Conclui-se pela linha fad1 que 24 de 60 componentes têm tempo de pinturas inferiores a 7min, ou seja, 85,6% dos componentes estariam reprovados.
