--AECV CONTROLE DE ACESSO - PERMISSOES
--1) Conceder ao usu�rio �aluno1� acesso de leitura �s tabelas do esquema STESTE
GRANT SELECT ON SCHEMA::STESTE TO aluno1 
GO

--2) Com usu�rio �aluno1� dar um SELECT na tabela STESTE.XPTO e na VIEW STESTE.VTESTE
-- COMO ALUNO1
SELECT * FROM STESTE.xpto
SELECT * FROM STESTE.VTESTE
GO

--3) Com usu�rio �aluno1� executar o procedimento armazenado STESTE.SPTESTE
EXEC STESTE.SPTESTE
-- ERRO EM PERMISSAO
GO

--4) Dar permiss�o de leitura e execu��o no procedimento armazenado STESTE.SPTESTE 
-- a role RTESTE
 GRANT SELECT ON SCHEMA::STESTE TO RTESTE
 GRANT EXECUTE ON SCHEMA::STESTE TO RTESTE
GO

--5) Adicionar o usu�rio �aluno1� a role RTESTE
ALTER ROLE RTESTE ADD MEMBER aluno1
GO

--6) Testar com usu�rio �aluno1� o acesso ao procedimento armazenado STESTE.SPTESTE
EXEC STESTE.SPTESTE
GO

--7) Negar o acesso de Leitura a coluna X da tabela STESTE.XPTO � role RTESTE
DENY SELECT(x) ON STESTE.XPTO TO RTESTE
GO

--8) Fornecer permiss�o de inser��o das tabelas de STESTE � role RTESTE, e testar 
--com usu�rio aluno1
GRANT INSERT ON SCHEMA::STESTE TO RTESTE
GO

--9) Fornecer permiss�o de atualiza��o das tabelas de STESTE � role RTESTE, e testar com usu�rio aluno1
GRANT UPDATE ON SCHEMA::STESTE TO RTESTE
GO

--10) Remover usu�rio �aluno1� da role RTESTE
ALTER ROLE RTESTE DROP MEMBER aluno1
GO