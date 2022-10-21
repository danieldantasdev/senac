CREATE DATABASE carrodb;

USE carrodb;

CREATE TABLE AUTOMOVEIS (
    Codigo INT PRIMARY KEY AUTO_INCREMENT,
    fabricante VARCHAR(20),
    modelo VARCHAR(20),
    ano VARCHAR(20),
    pais VARCHAR(20),
    preco_tabela VARCHAR(20)
);

INSERT INTO AUTOMOVEIS (fabricante, modelo, ano, pais, preco_tabela) VALUES ("GOL", "GOL", "2022", "Argentina", "12000000");

CREATE TABLE REVENDEDORA (
    Cnpj VARCHAR(18) PRIMARY KEY,
    nome VARCHAR(20),
    cidade VARCHAR(20),
    estado VARCHAR(20)
);

INSERT INTO REVENDEDORA (Cnpj, nome, cidade, estado) VALUES ("0297610291", "Daniel", "Duque de caxias", "RJ");

CREATE TABLE CONSUMIDORES (
    Cpf VARCHAR(18) PRIMARY KEY,
    nome VARCHAR(20),
    cidade VARCHAR(20),
    estado VARCHAR(20)
);

INSERT INTO CONSUMIDORES (Cpf, nome, cidade, estado) VALUES ("0297610291", "Daniel", "Duque de caxias", "RJ");

CREATE TABLE GARAGENS (
    codigo_garagens INT,
    CONSTRAINT fk_codigo FOREIGN KEY (codigo_garagens) REFERENCES AUTOMOVEIS(Codigo),
    cnpj_garagens VARCHAR(20),
    CONSTRAINT fk_cnpj FOREIGN KEY (cnpj_garagens) REFERENCES REVENDEDORA(Cnpj),
    quantidade VARCHAR(20)
);

INSERT INTO GARAGENS (codigo_garagens, cnpj_garagens, quantidade) VALUES (1, "0297610291", "12");


CREATE TABLE NEGOCIOS (
    codigo_garagens INT,
    CONSTRAINT fk_codigo_garagens FOREIGN KEY (codigo_garagens) REFERENCES AUTOMOVEIS(Codigo),
    cnpj_garagens VARCHAR(20),
    CONSTRAINT fk_cnpj_garagens FOREIGN KEY (cnpj_garagens) REFERENCES REVENDEDORA(Cnpj),
    cpf_garagens VARCHAR(20),
    CONSTRAINT fk_cpf_garagens FOREIGN KEY (Cpf_garagens) REFERENCES CONSUMIDORES(Cpf),
    data_compra DATETIME,
    preco VARCHAR(20)
);

INSERT INTO NEGOCIOS (codigo_garagens, cnpj_garagens, cpf_garagens, data_compra, preco) VALUES (1, "0297610291", "0297610291", "2022/09/07", "20000");

--Criar uma visão chamada AUTOMOVEIS_FIAT apresentando modelo, ano e preco_tabela de automóveis do fabricante FIAT

CREATE VIEW AUTOMOVEIS_FIAT AS SELECT modelo, ano, preco_tabela FROM AUTOMOVEIS WHERE fabricante = "FIAT";

--Criar uma visão chamada ESTOQUE_REV apresentando o nome da revendedora, código e quantidade de veículos de cada modelo (código) disponíveis para a venda em suas garagens 

CREATE VIEW ESTOQUE_REV AS SELECT r.nome, g.codigo_garagens, g.quantidade FROM REVENDEDORA r INNER JOIN GARAGENS g ON g.cnpj_garagens=r.Cnpj;

--Crie um procedimento armazenado chamado CARROS18 que liste o fabricante e modelo dos carros de 2018

DELIMITER $$
CREATE PROCEDURE CARROS18()
BEGIN
    SELECT fabricante, modelo FROM AUTOMOVEIS WHERE ano > "2018";
END $$
DELIMITER ;

CALL CARROS18();  

--Crie um procedimento armazenado chamado NUMAUTO que recebendo um CNPJ como parâmetro forneça o número de automóveis na garagem daquela REVENDEDORA (CNPJ)

DELIMITER $$
CREATE PROCEDURE NUMAUTO(IN cnpj_procedure VARCHAR(20))
BEGIN
    SELECT quantidade FROM GARAGENS WHERE cnpj_procedure = cnpj_garagens;
END $$
DELIMITER ;

CALL NUMAUTO("0297610291");

--Crie uma função escalar armazenada chamada LUCRO que calcule o lucro na venda de um carro a partir de 2 parâmetros (Preco de Venda e Preco de tabela), segundo a fórmula: LUCRO= “Preco de venda” - “Preco de tabela” 

DELIMITER $$ 
CREATE FUNCTION LUCRO(preco VARCHAR(20), preco_tabela VARCHAR(20)) RETURNS VARCHAR
DETERMINISTIC
BEGIN
SELECT a.preco_tabela, n.preco FROM AUTOMOVEIS a INNER JOIN NEGOCIOS n ON a.Codigo = n.codigo_garagens;
AND
RETURN (preco_tabela - preco);
END $$
DELIMITER ;

SELECT LUCRO("200000", "200");


--Crie uma trigger que para cada venda realizada por uma revendedora, decremente a quantidade do veículo na respectiva garagem

DELIMITER $$ 
CREATE OR REPLACE FUNCTION decrementa_quantidade_veiculos() RETURNS TRIGGER AS $$
BEGIN
    UPDATE GARAGENS SET quantidade = quantidade - 1 WHERE cnpj_garagens = new.veiculo.cnpj_garagens;
    RETURN NULL;
END $$
DELIMITER ;

CREATE TRIGGER decr_quantidade_veiculos AFTER
INSERT ON GARAGENS
FOR EACH ROW EXECUTE PROCEDURE decrementa_quantidade_veiculos();

--Criar o login “DB2Lg” (senha 67890) apontando para a base de dados AUTO, desprezando a política de senhas

CREATE LOGIN "DB2Lg" WITH PASSWORD = "67890" CHECK_POLICY=OFF DEFAULT_DATABASE=AUTO;

--Criar um usuário “DB2User” na base AUTO, associando o mesmo ao login criado “DB2Lg”

CREATE USER "DB2User" FOR LOGIN "DB2Lg";

--Permitir que o usuário DB2User possa criar objetos no database AUTO
CREATE SCHEMA AUTO AUTHORIZATION DB2User;
GRANT INSERT ON AUTO TO DB2User;

--tabela base

CREATE TABLE PRODUTO (
    id_produto INT AUTO_INCREMENT,
    item VARCHAR(20) NOT NULL,
    cor VARCHAR(20) NOT NULL,
    preco INT NOT NULL,
    imposto INT NOT NULL,
);

Item        Cor                 Preço       Imposto   
Lapis       Vermelho, Azul      R$ 2,00     R$ 0,20 
Escala      Vermelho, Amarelo   R$ 2,00     R$ 0,20 
Caneta      Vermelho, Azul      R$ 2,00     R$ 0,20 
Mochila     Azul, Preto         R$ 150,00   R$ 7,80 

--tabela tratada 1FN
id_produto    Item        Cor              Preço       Imposto   
1             Lapis       Vermelho         R$ 2,00     R$ 0,20 
2             Escala      Vermelho         R$ 2,00     R$ 0,20 
3             Caneta      Vermelho         R$ 2,00     R$ 0,20 
4             Mochila     Azul             R$ 150,00   R$ 7,80 

- Alguns produtos possuem mais de uma cor, e essa informação foi armazenada em uma única coluna da tabela, de acordo com a 1FN, cada coluna não pode ser multivalorado...

--2FN

PRODUTO

id_produto    Item        Cor              id_preco_imposto      
1             Lapis       Vermelho         1            
2             Escala      Vermelho         2          
3             Caneta      Vermelho         3          
4             Mochila     Azul             4           

IMPOSTO_PRECO

id_imposto    id_produto    valor_imposto    valor_preco      
1              1            R$ 0,20          R$ 2,00  
2              2            R$ 0,20          R$ 2,00
3              3            R$ 0,20          R$ 2,00
4              4            R$ 0,80          R$ 2000,00


--3FN

PRODUTO

id_produto    id_item       id_preco_imposto   cor   
1             1               1                Vermelho
2             2               2                Vermelho
3             3               3                Vermelho
4             4               4                Azul

IMPOSTO

id_imposto    id_produto    valor_imposto    valor_preco  
1              1            R$ 0,20          R$ 2,00  
2              2            R$ 0,20          R$ 2,00
3              3            R$ 0,20          R$ 2,00
4              4            R$ 0,80          R$ 2000,00

ITEM
id_item        id_produto   id_imposto       
1              1            1                
2              2            2                
3              3            3                
4              4            4                