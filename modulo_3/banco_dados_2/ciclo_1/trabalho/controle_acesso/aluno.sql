GO

USE AUTO;

SELECT * FROM AUTOMOVEIS WHERE Fabricante='Chevrolet';

GO

GO

INSERT AUTOMOVEIS (Codigo, Fabricante, Modelo, Ano, Pais, Preco_tabela) VALUES ('99','Chevrolet','Zafira','2018','Brasil',80000);
UPDATE AUTOMOVEIS SET Preco_tabela = 90000 WHERE Codigo='99';
DELETE FROM AUTOMOVEIS WHERE Codigo='99';

GO

CREATE DATABASE AUTONOVO;
USE AUTONOVO;

GO

GO

CREATE TABLE FABRICA
(
  Codigo int not null,
  Fabricante  char(30)  not null,
  Nome char(20)  not Null,
  Estado char(2) not null,
  constraint PK_Fabricante primary key (Fabricante)
  );
GO
  