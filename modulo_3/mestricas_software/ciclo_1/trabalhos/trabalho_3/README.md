# Alunos

@Daniel Dantas
@Felipe Varella
@Diogo Di Blasi
@Gabriel Santos

1.  Qual o perfil da empresa estudada? Se não houve uma empresa estudada, qual foi a base do estudo?

A empresa estudada é uma desenvolvedora de software corporativo, fundada há mais de
quinze anos, de porte médio, com faturamento anual estimado em torno de R$ 30 milhões e cerca
de 300 funcionários. Possui uma área específica de pesquisa para o desenvolvimento de técnicas e
de ferramentas de análise e programação, porém ainda não utiliza nenhuma métrica para as
estimativas dos tempos de desenvolvimento. `Esta empresa está iniciando a conversão dos seus sistemas para o ambiente Web utilizando uma metodologia de desenvolvimento para sistemas Web baseada no processo unificado de desenvolvimento e ainda não adotou nenhuma métrica para gerenciamento dos seus projetos.`

2.  Que tipo de métrica foi avaliada e por quê?

A métrica `PCU` foi escolhida pois permite fazer estimativas no início do projeto com base nos modelos de casos de uso construídos. Esta escolha deu-se devido as suas características intrínsecas serem as mais adequadas na estimativa dos tempos dos projetos orientados a objetos e com foco no ambiente WEB e por ser passível de medição na empresa de software estudada

3.  Qual foi a metodologia (etapas) utilizada no artigo?

Foram analisados os diagramas de casos do `Sistema de cálculo de Folha de Pagamento` (Projeto 1), `Sistema Contábil` (Projeto 2) e o `Sistema de Cartão-Ponto` (Projeto 3).

Em cada projeto foram realizadas as fases de `concepção`, nesta fase somente foram elaborados os diagramas de nível 0 de apenas 1 módulo em cada projeto e a `primeira iteração da fase de elaboração`, em que ocorreu a elaboração de alguns casos de uso considerados relevantes pelos analistas de cada projeto.

Foi observado que, o `índice do fator de complexidade ambiental` obteve o mesmo valor para os 3 projetos pois os analistas possuíam o mesmo grau de experiência em UML, mesma familiaridade com processo unificado de desenvolvimento, mesma experiência em orientação a objetos, mesmo grau de
motivação e mesmo conhecimento do ambiente de desenvolvimento, pois todos receberam um
treinamento padronizado antes do início dos projetos.

Os `requisitos` foram considerados estáveis pois trata-se da conversão de 3 sistemas já existentes em ambiente cliente/servidor para o ambiente Web.

Foi decidido realizar uma nova estimativa nos três projetos utilizando os casos de uso da fase
de elaboração por estar mais completa, desta vez ajustando-se os pesos dos casos de uso para
`simples = 5`, `médio = 10`, `complexo = 25` e modificar a quantidade de horas/homem para uma média
de 10 horas/homem.

4.  Quais foram os desafios ou dificuldades encontradas?

Neste estudo houve dificuldade em `identificar na coleta de dados` os diagramas produzidos na
fase de concepção. É necessário que empresa possua um registro dos diagramas produzidos ao
final de cada fase ou mesmo a cada iteração dependendo dos objetivos que espera alcançar.
Sugere-se que seja incluída uma atividade na metodologia de desenvolvimento da empresa de
software para que o analista identifique e anote em cada diagrama de caso de uso a sua
complexidade. O mesmo para os atores envolvidos no sistema. Não foi possível a continuidade do levantamento de dados porque os projetos foram interrompidos, sendo sua continuidade prevista após esta pesquisa.

5.  Quais foram as conclusões obtidas?

A métrica PCU, assim como outros tipos de métricas, abordam as estimativas teóricas de
tempo, e tem a finalidade de direcionar, viabilizar e ajudar controlar as fases do desenvolvimento
de software.Com esta informação o desenvolvedor poderá requerer mais recursos bem como dimensionar o valor pecuniário de seu trabalho além de estimar com mais precisão o tempo necessário para o desenvolvimento de suas tarefas. Para o empresário, este terá uma base de informações imprescindível para estimar seus custos e apreçar seus produtos, bem como estabelecer cronogramas com promessas de entrega de produtos em prazos possíveis de serem alcançados.

O sucesso de um `programa de métricas` depende de uma série de fatores que variam desde a conscientização dos profissionais envolvidos até a existência de recursos técnicos e humanos necessários para a manutenção e monitoramento do programa. Um programa de medição traz benefícios para o programador a medida em que possibilita dimensionar melhor a carga de trabalho de forma a garantir a qualidade.

Em `projetos orientados a objetos - POO` para que a estimativa de tamanho seja realizada com maior
precisão desde o início do projeto pode-se utilizar as métricas Análises de Pontos de Função e
Análise de Casos de Uso de forma combinada no momento em que elas são melhores aplicadas no
processo de desenvolvimento
