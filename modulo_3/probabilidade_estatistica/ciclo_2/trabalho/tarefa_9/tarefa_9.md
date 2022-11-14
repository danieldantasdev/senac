> 1 - Imagine que tivéssemos uma amostra de tamanho tão grande que tendesse ao infinito. O que ocorreria? O erro seria próximo de zero ou desconsiderável e a média da amostra seria igual a média da população, sem a necessidade de estimar um intervalo.

Determine o valor crítico Z/æ /² que corresponde ao
grau de confiança indicado:
a) 99%
b) 94%
c) 92%
d) 90%

| Grau de confiança | alfa | Valor crítico(Z a/2) |
| ----------------- | ---- | -------------------- |
| 99%               | 0,01 | 2,58                 |
| 94%               | 0,06 | 1,88                 |
| 92%               | 0,08 | 1,75                 |
| 90%               | 0,10 | 1,65                 |

> 2 - Uma das linhas de produção de uma siderúrgica fabrica folhas de flandres. Havia uma preocupação com a possibilidade de haver uma quantidade fora da faixa de especificação de dureza (LIE = 58,0 HR e LSE = 64,0 HR). A área de qualidade da empresa decidiu estimar a dureza média das folhas de flandres () coletando uma amostra aleatória de 49 folhas. Para um grau de confiança de 95%, determine a margem de erro (E) e o intervalode confiança para média populacional ().

**Margem de erro**

```
E = Z æ /2 S / raiz de n
```

```
X = 60,21
s = 0,61
n = 49
```

**Grau de 95% implica em: 1 - æ = 95%, logo æ/2 = 0,025%**

```
Z æ/2 = Z 0.025 = 1,96
```

**Intervalo de confiança**

```
X - E < µ < X + E
```

60,21 - 0,17 < µ < 60,21 + 0,17
60,04 < µ < 60,38

> 3 - Uma máquina automática de suco industrial é regulada de modo que a quantidade suprida de cada vez, tenha distribuição aproximadamente normal com desvio-padrão de 35ml. Determine um intervalo de 96% de confiança para a quantidade média de toda produção, sabendo que uma amostra de 30 embalagens teve um conteúdo médio de 290 ml.

**Dados:**

```
X = 290 ml
s = 35 ml
n = 30
```

```
Z æ/2 = Z 0,02 = 2,05
```

**Margem de erro**

```
E = Z æ /2 * s / raiz de n
E = 2,05 * 35 / raiz de 30
E = 13,10
```

**Grau de 96% implica em: 1 - æ = 96%, æ = 0,04% 0u 4%, logo æ/2 = 2%**

```
Z æ/2 = Z 0,02 = 2,05
```

**Intervalo de confiança**

```
X - E < µ < X + E
290 - 13,10 < µ < 290 + 13,10
276,90 < µ < 303,10
[276,90 ; 303,10] ml
```

> 4 - Uma amostra aleatória de 40 contas não-comerciais na filial de um banco acusou saldo médio de R$140,00 com desvio-padrão de R$30,00.

a) Construa um intervalo de 95% confiança para a verdadeira média.
b) Construa um intervalo de 99% confiança para a verdadeira média.
c) A que conclusão podemos chegar com os resultados das letras anteriores?

**Grau de 95% implica em: 1 - æ = 95%, logo æ/2 = 0,025%**

```
Z æ/2 = Z 0.025 = 1,96
```

**Margem de erro**

```
E = Z æ /2 * s / raiz de n
E = 1,96 * 30 / raiz de 40
E = 9,30
```

**Intervalo de confiança**

```
X - E < µ < X + E
140 - 9,30 < µ < 140 + 9,30
130,70 < µ < 149,30
[130,70 ; 149,30] R$
140 +- 9,30
```

---

**Grau de 99% implica em: 1 - æ = 99%, logo æ/2 = 0,005%**

```
Z æ/2 = Z 0,005 = 2,58
```

**Margem de erro**

```
E = Z æ /2 * s / raiz de n
E = 2,58 * 30 / raiz de 40
E = 12,24
```

**Intervalo de confiança**

```
X - E < µ < X + E
140 - 12,24 < µ < 140 + 12,24
127,76 < µ < 152,24
[127,76 ; 152,24] R$
140 +- 12,24
```
