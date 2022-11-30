> 1. A qualidade dos carros pintados em uma montadora foi avaliada em termos de resistência ao arranhão e adequação das camadas de tinta. Os resultados obtidos estão representados na tabela abaixo:

Se um carro for selecionado ao acaso desse lote de 1000, qual a probabilidade de:

`P (A | B) = P (A intercessão B) / P (B) dado P (B) > 0`

> a) Ter resistência ao arranhão alta e ser aprovada na avaliação da adequação?

`resistência alta`

P (R) = 700 / 1000
P (R) = 7/10

`aprovado`

P (A) = 800 / 1000
P (A) = 8/10

P (R && A) = 15 / 10

> b) Ter resistência ao arranhão alta ou ser aprovada na avaliação da adequação?

P (R || A) = P (R) + P (A) - P (R || A)
P (R || A) = 7/10 + 8/10 - 15 / 10
P (R || A) = 2/3

> c) Ser aprovada na avaliação da adequação, dado que tem alta resistência ao arranhão?

P (R / A) = P (R interseção A) / P (A)
P (R / A) = 15 / 10 / 7 / 10
P (R / A) = 2.14

> d) Ter alta resistência ao arranhão, dado que foi reprovada na avaliação da adequação?

P (R / A) = P (R interseção A) / P (A)
P (R / A) = 15 / 10 / 8 / 10
P (R / A) = 1,875

> 2. A área comercial de uma empresa recebe pedidos de três representantes classificados como A, B e C. Os dados históricos indicam que os pedidos se encontram distribuídos da seguinte forma: 150 do representante A, 250 do B e 300 do C. Quando o representante não efetua o pedido da forma correta, o sistema apresentará erro.Considere que ocorreram os seguintes pedidos inadequados (com erros): 48 do representante A, 29 do B e 34 do C. Escolhe-se ao acaso um pedido da população de 700 pedidos enviados pelos representantes. Qual a probabilidade de se tratar de um pedido do representante A ou de se ter um pedido com erro?

> 3. Os dados históricos da área comercial registram que o percentual dos pedidos dos representantes que apresentam erros são 7,3% do representante A, 3,8% do B e 4,6% do C. Da população de 700 processamentos:

> a) Qual a probabilidade do processamento apresentar erro? (desenhar o espaço amostral e suas partições)

> b) Qual a probabilidade de que o processamento tenha sido pedido pelo representante C, sabendo-se que apresentou erro. (Usar regra de Bayes)

> 4. Uma fundição de lâminas de alumínio para fabricação de aviões é frequentemente solicitada por seus clientes a produzir estas lâminas, com dureza na faixa de 170 HB a 210 HB. (HB é a unidade de medida da dureza do material). Os testes realizados em corpos de prova apresentam uma média de 184 HB e um desvio padrão de 9.

> a) Calcule a probabilidade de a dureza ser menor do que 170 HB.

P (D > 140) = 170 - 184 / 9
P (D > 140) = 1,5

> b) Um determinado cliente aceita um risco de 2% das lâminas terem valor de dureza menor que 160 HB. Assim, calcule a probabilidade do valor ser menor que 160 e dê seu parecer se este cliente compraria deste fornecedor, nas condições mencionadas.

dureza menor que 160
2% de 160
3.2

P (D > 160) = 160

> 5. Um fabricante de rolamentos possui dados históricos sobre a temperatura de aquecimento de seus rolamentos. Sabe-se que a temperatura média de aquecimento de 77 rolamentos, que foram testados no laboratório de controle, é de 54,30 °C e que a amostragem da população segue uma distribuição normal e tem desvio padrão populacional de 1,34 °C.

> a) construa o intervalo de confiança para a estimação da temperatura média da população considerando um nível de confiança de 95%.

**Grau de 95% implica em: 1 - æ = 95%, logo æ/2 = 0,025%**

```
Z æ/2 = Z 0.025 = 1,96
```

**Margem de erro**

```
E = Z æ /2 * s / raiz de n
E = 1,96 * 1,34 / raiz de 77
E = 0.299
```

**Intervalo de confiança**

```
X - E < µ < X + E
54.30 - 0.299 < µ < 54.30 + 0.299
54,001 < µ < 54,599
[54,599 ; 54,599]
```

> b) qual a probabilidade de a verdadeira média exceder a 54 80 °C?

P = 54.80 / 77
P = 0,71

> 6. Comente o que sabe sobre a relação Margem de erro x tamanho de amostras.
