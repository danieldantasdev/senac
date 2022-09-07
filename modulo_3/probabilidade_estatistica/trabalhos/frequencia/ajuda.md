# Fórmulas

`ht - amplitude total dos dados`

```
(ht = Xmax - Xmin)

ht = 25 - 4

ht = 21

```

`k - número de classes - regra de strugs`

```
(k = 1 + 3,3 log n)

n = 60

k = 1 + 3,3 * 1.77815125038

k = 6.86789912627

k =~ 7 classes

```

`hc - amplitude de intervalo de classes`

```
(hc = ht / k)

hc = 21 / 7

hc = 3

```

`Verificar k.hc > ht`

```
(k.hc > ht)

7*3 > 21

21 > 21

```

`xi - ponto médio de cada classe`

```
(xi = (li + Li) / 2)

```

`%fr - frequência`

```
%fr = (fi / soma fi) * 100

```

`fac - frequência acumulada absoluta crescente`

```
fac = soma fi (i = 1, 2, 3 ... k)

```

`%frc - representa a porcentagem acumulada absoluta crescente dos elementos de cada classe`

```
%frc = (fac / soma fi) * 100

```

`fad - frequência acumulada absoluta decrescente`

```
fad = soma fi (i = k, ... , 3 , 2, 1)

```

`%frd - representa a porcentagem acumulada absoluta decrescente dos elementos de cada classe`

```
%frd = (fad / soma fi) * 100

```