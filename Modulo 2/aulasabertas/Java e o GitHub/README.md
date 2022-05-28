# Programação I

-   Com Reinaldo Freitas

## Desenvolvimento em equipe com Java e o GitHub

-   Muito importante em trabalhar com equipe
-   Uma boa IDE que aumente a produtividade
-   Um repositório de código que permita a colaboração em equipe
-   A IDE deve se conectar com o repositório de código
-   Ter uma ferramenta colaborativa de gestão ágil de projetos

## IDE (Integrated Development Environment)

-   Software que permite a desenvolvedores criarem programas usando uma plataforma integrada que facilita a codificação, aumentando assim a sua produtividade.

### O que a IDE tem?

-   Preenchimento automático de código
-   Correção automática de código
-   Depuração de código
-   Possibilidade de trabalhar com várias linguagens de programação através de plugins
-   Integração com outras ferramentas

#### Seguem algumas IDEs

-   Eclipse
-   Netbeans
-   intelliJ

## Repositório de código

-   São plataformas de armazenamento de código fonte que permitem a desenvolvedores colaborarem e fazerem mudanças em projetos compartilhados. Dentre os vários recursos podemos destacar:

1. Versionamento de código
2. Integração com repositórios locais
3. Criação de ramificações do código fonte (branches)
4. Merge entre ramificações
5. Tratamento de conflitos

### Seguem alguns repositórios

-   GitHub
-   GitLab
-   BitBucket

## Ferramentas colaborativas de gestão de projetos

-   São ferramentas que suportam a gestão de projetos de forma colaborativas entre equipes

1. Criação de listas de tarefas baseadas no quadro de Kanban
2. Criação de tarefas em formato de cartões visuais
3. Compartilhamento do painel de tarefas com outro membro da equipe
4. Designação de responsáveis pelas tarefas
5. Notificações com base na data da entrega

### Seguem alguns frameworks de Scrum

-   Trello
-   Jira
-   Asana

## Fluxo básico do GIT

Workspace (`Git add/mv/rm`) --> Staging (`Git commit`) -> Repository Local (`Git push`) -> Repository Remote

<------------------- (`Git clone` / `pull`) ------------------------

### Workspace

-   Local onde estão os programas em alguma linguagem

### Staging

-   Área temporária utilizada para atualizar o repositório local

### Repositório local

-   Repositório local é onde o Git utiliza para fazer o versionamento de código fonte localmente

### Repositório remoto

-   Repositório do GitHub onde é feito versionamento de código fonte remotamente

## Git clone

-   Faz a cópia do repositório remoto para o repositório local

## Git add/mv/re

-   Atualiza a área de Staging

## Git commit

-   Atualiza o repositório local com base na Workspace

## Git push

-   Atualiza o repositório remoto com base no repositório local

## Git pull

-   Atualiza o repositório local com base no repositório remoto

**Apache é um servidor HTTP**
**Backlog é a história geralmente**

## Eclipse chave SSH

Definir uma chave SSH no Eclipse. Seguem os passos:

1. Clique em windows -> preferences
2. Abra a opção General -> Network Connection e clique em SSH2
3. Clique em Key Management
4. Clique em Generate RSA Key
5. Copie chave SSH apresentada
6. Define uma passphrase
7. Confirme a passphrase
8. Clique em Save Private Key para salvar a chave pública do projeto
9. Clique em Apply and Close

## Integrando o Eclipse com GitHub

Configure a chave SSH no GitHub, seguem os passos:

1. Clique no avatar
2. Clique em Settings
3. Clique em SSH and GPG Keys
4. Clique em New SSH Key
5. Defina um título e copie a chave SSH que foi gerada no Eclipse
6. Clique em Add SSH Key
