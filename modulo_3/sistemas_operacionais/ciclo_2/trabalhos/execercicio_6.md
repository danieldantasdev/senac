> 1 - Comparando-se os diferentes modelos de virtualização, a principal dificuldade na adoção da paravirtualização é a necessidade de:

- [x] adaptação do sistema operacional convidado.

> 2 - Com a virtualização, é possível criar servidores isolados no mesmo equipamento, o que permite aumentar a eficiência energética, sem prejudicar as aplicações e sem haver risco de eventuais conflitos causados por uma consolidação

- [x] certo

> 3 - O Virtual Machine Monitor é um componente de software que:

I. hospeda as máquinas virtuais.

II. é responsável pela virtualização e controle dos recursos compartilhados pelas
máquinas virtuais, tais como, processadores e dispositivos de entrada exceto os de
saída, memória e armazenagem.

III. tem por função escalonar qual máquina virtual vai executar a cada momento,
semelhante ao escalonador de processos do Sistema Operacional.

IV. também é conhecido por Hypervisor.

Assinale as afirmações corretas:

- [x] I, III e IV.

> 4 - O software que emula servidores virtuais, permitindo a criação de vários servidores virtuais em um servidor físico é:

- [x] VmWare

> 5 - Com a criação de uma infraestrutura virtual, é possível colocar N servidores virtuais em um mesmo servidor físico, aumentando a eficiência desses equipamentos e diminuíndo a complexidade do ambiente. Entre as potenciais características da virtualização, estão a redução do espaço físico, do consumo de energia dos equipamentos, da dissipação de calor, das conexões de cabos de rede, tomadas e cabos de energia, entre outras.

- [x] Certo

> 6 - No contexto de virtualização, um hipervisor (hypervisor) tipo-1 (nativo ou bare metal) é caracterizado por

- [x] executar diretamente sobre o hardware da máquina para gerenciar as máquinas virtuais e seus sistemas operacionais convidados (guests).

> 7 - Uma tecnologia fundamental ao conceito de nuvem é a virtualização, que é basicamente o uso de software para simular hardware. É vista como uma camada abstrata entre o hardware e o software que protege o acesso direto aos recursos do hardware. Essa camada é conhecida como hypervisor. Nesse contexto, analise as afirmativas abaixo, associadas à virtualização

I. Múltiplos servidores virtuais podem ser construídos em uma única máquina
física.

II. O servidor físico virtualizado é obrigado a executar um só servidor virtual
chamado Virtual Machine - VM.

III. Cada VM utiliza um sistema operacional e suas respectivas aplicações.
Está correto apenas o que se afirma na(s) opção(ões)

- [x] I e III

> 8 - O consumo compartilhado de cinco aplicações em um servidor físico que utiliza controles de um servidor de aplicações para manter a disponibilidade de cada aplicação com configurações distintas caracteriza o uso de virtualização.

- [x] Errado

> 9 - O tipo de virtualização em que é necessário se ter acesso ao código fonte dosistema operacional para substituir a execução de instruções privilegiadas para chamadas ao monitor de máquina virtual (hypervisor) é denominado:

- [x] Errado

> 10 - O hypervisor XEN é capaz de simular dispositivos físicos reais e expor aos domínios hóspedes providos por ele.

- [x] Certo

> 11 - Uma paravirtualização ocorre quando o servidor virtual simula todo o conjunto do hardware necessário para sua execução.

- [x] Errado

> 12 - O processo de virtualização é possibilitado por um hypervisor, que é um software instalado em cima de um servidor físico e que, a partir dele, é possível a criação de máquinas virtuais que podem, cada uma, conter sistemas operacionais diferentes. Analise as seguintes afirmativas sobre o uso de Máquinas Virtuais e Docker.

I A virtualização permite o isolamento total do ambiente da sua aplicação, pois
ela não emula a máquina virtual por completo.

II O Docker permite “empacotar” uma aplicação ou sistema dentro de um
container, sendo que este container pode posteriormente ser executado em
qualquer máquina que tenha o Docker instalado.

III Vários containers podem ser executados na mesma máquina e compartilhar
o kernel do SO com outros containers, cada um executando como processos
isolados no espaço do usuário.

IV Em um sistema de virtualização tradicional, o sistema operacional é isolado
dos demais instalados dentro da máquina host.

- [x] II, III e IV.

> 13 - O conceito de máquina virtual pode ser entendido como a separação de umcomputador isolado (CPU, memória, unidades de disco etc.) em vários ambientesde execução diferentes, permitindo, dessa forma, que o usuário tenha uma ilusão de que cada ambiente está executando seu próprio computador particular.

- [x] errado

> 14 - O VMware é um sistema de virtualização de servidores muito popular, e permite que sejam executadas diversas máquinas virtuais em uma mesma máquina física. Em um servidor com sistema operacional hospedeiro Linux, utilizando VMware para execução de quatro máquinas virtuais, duas Linux e duas Windows, qual é o resultado da falha de uma das máquinas virtuais Linux?

- [x] Apenas a máquina virtual Linux defeituosa para de funcionar

> 15 - No uso dos microcomputadores, um recurso possibilita rodar vários sistemas operacionais na mesma máquina, fato possível com o emprego de programas específicos, que geram máquinas virtuais, que emulam os componentes físicos de um PC, possibilitando que um S. O. diferente seja instalado em cada uma delas, como no caso do Windows e do Linux. Esse conceito é conhecido por:

- [x] virtualização

> 16 - A virtualização pode oferecer benefícios em diferentes aspectos, tanto no ambiente desktop quanto no ambiente servidor. Sobre virtualização, assinale a alternativa correta.

- [x] A virtualização é obtida inserindo uma camada intermediária entre o sistema rodando dentro da máquina virtual e o hardware da máquina, simulando um computador completo. O software de virtualização fica, então, responsável por gerenciar todos os recursos do hardware, de forma que os sistemas dentro das máquinas virtuais possam trabalhar como se cada um tivesse uma máquina inteira reservada para si.

> 17 - Atualmente, várias empresas têm utilizado a containerização de aplicações. Dentro dessa plataforma, como pode ser definido o termo container?

- [x] É uma forma de virtualização a nível de sistema operacional, que proporciona a capacidade de executar múltiplas aplicações (sistemas) isoladas em um único sistema operacional real.

> 18 - Em virtualização, utilizam-se termos derivados dos conceitos de convidado e anfitrião. Com isso, o sistema operacional em execução em uma máquina virtual (VM) pode ser chamado de convidado, hóspede ou guest, enquanto que o sistema instalado sobre o hardware e real é chamado de anfitrião, hospedeiro ou host. Sobre virtualização, é correto afirmar que

- [x] uma das vantagens que podemos ter em um sistema virtualizado é a possibilidade de utilizar programas desenvolvidos para outro sistema operacional, sem a necessidade de reiniciar o sistema ou recorrer a uma outra máquina, sendo que uma única máquina pode executar várias funções em diferentes sistemas operacionais.

> 19 - Analise as afirmativas a seguir sobre os mecanismos de virtualização.

I. Um hipervisor tipo 1, como o Linux KVM ou VMWare ESX, tem desempenho
superior a hipervisor tipo 2.

II. Um hipervisor tipo 2, como o Oracle VirtualBox ou VMWare Workstation, tem
desempenho inferior ao de paravirtualização.

III. Paravirtualização necessita de modificação do sistema operacional convidado.
Estão corretas as afirmativas:

- [x] I, II e III.
