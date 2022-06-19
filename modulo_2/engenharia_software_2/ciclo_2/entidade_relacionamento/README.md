`Setor`

**Um dentista só pode trabalhar em um setor**

-   id_setor (int PK auto-increment)
-   nome_setor (string)
-   numero_setor (int)
-   data_gereciamento_setor (date)
-   id_dentista (int FK dentista)

`Dentista`

**Uma dentista só pode ter uma assistente**

-   id_dentista (int PK auto-increment)
-   nome_dentista (string)
-   telefone_residencial_dentista (string)
-   telefone_celular_dentista (string)
-   endereco_cidade_dentista (string)
-   endereco_bairro_dentista (string)
-   endereco_rua_dentista (string)
-   endereco_numero_dentista (int)
-   endereco_cep_dentista (string)
-   sexo_dentista (enum)
-   data_nascimento_dentista (date)
-   salario_dentista (float)
-   cro_dentista (string)
-   especialidade_dentista (string)
-   horas_trabalhadas_dentista (int)
-   rg_dentista (string)
-   cpf_dentista (string)
-   id_setor (int FK setor)

`Assistente`

**Um assistente só trabalha para um dentista**

-   id_assistente (int PK auto-increment)
-   nome_assistente (string)
-   telefone_residencial_assistente (string)
-   telefone_celular_assistente (string)
-   endereco_cidade_assistente (string)
-   endereco_bairro_assistente (string)
-   endereco_rua_assistente (string)
-   endereco_numero_assistente (int)
-   endereco_cep_assistente (string)
-   sexo_assistente (enum)
-   data_nascimento_assistente (date)
-   salario_assistente (float)
-   horas_trabalhadas_assistente (int)
-   rg_assistente (string)
-   cpf_assistente (string)
-   id_dentista (int FK dentista)

`Paciente`

-   id_paciente (int PK auto-increment)
-   nome_paciente (string)
-   telefone_residencial_paciente (string)
-   telefone_celular_paciente (string)
-   endereco_cidade_paciente (string)
-   endereco_bairro_paciente (string)
-   endereco_rua_paciente (string)
-   endereco_numero_paciente (int)
-   endereco_cep_paciente (string)
-   sexo_paciente (enum)
-   data_nascimento_paciente (date)
-   rg_paciente (string)
-   cpf_paciente (string)
-   historico_consulta_paciente (string)
-   id_dentista (int FK dentista)
-   id_atendimento (int FK atendimento)

`Atendimento`

-   id_atendimento (int PK auto-increment)
-   data_atendimento (date)
-   hora_atendimento (time)
-   id_dentista (int FK dentista)
-   id_setor (int FK setor)

`Pagamento`

-   id_pagamento (int PK auto-increment)
-   data_pagamento (date)
-   valor_pagamento (float)
-   forma_pagamento (enum)

`Dependentes`

-   id_dependente
-   nome_dependente
-   telefone_celular_dependente
-   telefone_residencial_dependente
-   telefone_comercial_dependente
-   endereco_cidade_dependente
-   endereco_bairro_dependente
-   endereco_rua_dependente
-   endereco_numero_dependente
-   endereco_cep_dependente
-   sexo_dependente
-   data_nascimento_dependente
-   grau_parentesco_dependente
-   id_dentista

