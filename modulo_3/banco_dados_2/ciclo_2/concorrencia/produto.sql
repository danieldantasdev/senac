CREATE DATABASE PRODUTO;
USE PRODUTO;

CREATE TABLE CLIENTES
(
	CodCli int PRIMARY KEY,   
	nome varchar(40) Not Null
);

CREATE TABLE PEDIDO
(
	CodPed int PRIMARY KEY,  
	CodCli int CONSTRAINT fk_codcli FOREIGN KEY references CLIENTES(CodCli), 
	produto varchar(40) Not Null, 
	quantidade int Not Null, 
	valor int CHECK (valor>0)
);

BEGIN TRY

BEGIN TRANSACTION T1
INSERT INTO CLIENTES (CodCli, nome) VALUES (1,'roberto');
INSERT INTO PEDIDO (CodPed, CodCli, produto, quantidade, valor) VALUES (1, 1, 'celular', 1, 2000);
INSERT INTO PEDIDO (CodPed, CodCli, produto, quantidade, valor) VALUES (2, 1, 'cabo', 10, 100);
INSERT INTO PEDIDO (CodPed, CodCli, produto, quantidade, valor) VALUES (3, 1, 'ssd', 1, 300);
PRINT 'Transação efetivada'
COMMIT TRANSACTION T1

END TRY

BEGIN CATCH

ROLLBACK TRANSACTION
PRINT 'Transação Desfeita'

END CATCH

--INNER JOIN
SELECT * FROM CLIENTES p INNER JOIN PEDIDO c ON p.CodCli = c.CodCli;

BEGIN TRY
DECLARE @qtd INTEGER  
SET @qtd = 5

IF @qtd > ( SELECT quantidade FROM PEDIDO p WHERE @qtd = quantidade )
PRINT 'MUITOS ITENS'
ELSE
SELECT quantidade FROM PEDIDO WHERE quantidade > 5;
PRINT 'POUCOS ITENS'

END TRY

BEGIN CATCH

PRINT 'POUCOS ITENS'

END CATCH