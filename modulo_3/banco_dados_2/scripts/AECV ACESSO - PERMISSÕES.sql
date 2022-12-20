--AECV CONTROLE DE ACESSO - PERMISSOES
--1) Conceder ao usuário “aluno1” acesso de leitura às tabelas do esquema STESTE
GRANT SELECT ON SCHEMA::STESTE TO aluno1 
GO

--2) Com usuário “aluno1” dar um SELECT na tabela STESTE.XPTO e na VIEW STESTE.VTESTE
-- COMO ALUNO1
SELECT * FROM STESTE.xpto
SELECT * FROM STESTE.VTESTE
GO

--3) Com usuário “aluno1” executar o procedimento armazenado STESTE.SPTESTE
EXEC STESTE.SPTESTE
-- ERRO EM PERMISSAO
GO

--4) Dar permissão de leitura e execução no procedimento armazenado STESTE.SPTESTE 
-- a role RTESTE
 GRANT SELECT ON SCHEMA::STESTE TO RTESTE
 GRANT EXECUTE ON SCHEMA::STESTE TO RTESTE
GO

--5) Adicionar o usuário “aluno1” a role RTESTE
ALTER ROLE RTESTE ADD MEMBER aluno1
GO

--6) Testar com usuário “aluno1” o acesso ao procedimento armazenado STESTE.SPTESTE
EXEC STESTE.SPTESTE
GO

--7) Negar o acesso de Leitura a coluna X da tabela STESTE.XPTO à role RTESTE
DENY SELECT(x) ON STESTE.XPTO TO RTESTE
GO

--8) Fornecer permissão de inserção das tabelas de STESTE à role RTESTE, e testar 
--com usuário aluno1
GRANT INSERT ON SCHEMA::STESTE TO RTESTE
GO

--9) Fornecer permissão de atualização das tabelas de STESTE à role RTESTE, e testar com usuário aluno1
GRANT UPDATE ON SCHEMA::STESTE TO RTESTE
GO

--10) Remover usuário “aluno1” da role RTESTE
ALTER ROLE RTESTE DROP MEMBER aluno1
GO