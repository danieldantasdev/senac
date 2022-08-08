# Relembrando as consultas de SQL - 01/08/22

`View`s são como `SELECT`s, mas são apenas leitura.

CREATE VIEW `view_nome` AS SELECT \* FROM `tabela_nome`;

DROP VIEW `view_nome`;

# Stored Procedures - 08/08/22

-   Comandos SQL para criar e remover Stored Procedures armazenados no servidor

CREATE PROCEDURE `procedure_nome` (IN `parametro_nome` VARCHAR(255)) AS SELECT \* FROM `tabela_nome`;

`Com Criptografia`

CREATE PROCEDURE `procedure_nome` (IN `parametro_nome` VARCHAR(255)) AS SELECT \* FROM `tabela_nome` WITH ENCRYPTION;

DROP PROCEDURE `procedure_nome`;

EXEC `procedure_nome` (\`parametro_nome\`);

EXEC sp_help \`procedure_nome\`;
