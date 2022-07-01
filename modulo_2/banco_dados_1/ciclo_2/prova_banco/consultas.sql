-- Listar consumidores cadastrados (todos os campos)
SELECT * FROM CONSUMIDORES;

--Listar fabricantes de automóveis e seus respectivos países 
SELECT FABRICANTE, PAIS FROM AUTOMOVEIS;

--Quais são os carros (Fabricante, modelo, Ano) que custam mais do que R$ 50.000
SELECT FABRICANTE, MODELO, ANO, Preco_tabela FROM AUTOMOVEIS WHERE Preco_tabela > 50000 ORDER BY Preco_tabela ASC;

--Listar a quantidade de diferentes automóveis existentes (dica: use a tabela AUTOMOVEIS)
SELECT COUNT(DISTINCT MODELO) FROM AUTOMOVEIS;

--Qual é o valor (preço de tabela) de automóvel mais barato a venda? 
SELECT MIN(Preco_tabela) FROM AUTOMOVEIS;

--Qual o modelo de automóvel mais barato a venda? (dica: consulta aninhadas)
SELECT MODELO FROM AUTOMOVEIS WHERE Preco_tabela = (SELECT MIN(Preco_tabela) FROM AUTOMOVEIS);

--Listar fabricante e o valor de automóvel mais barato a venda de cada fabricante. (dica: agrupar por fabricantes) 
SELECT FABRICANTE, MIN(Preco_tabela) FROM AUTOMOVEIS GROUP BY FABRICANTE;

--Apresentar a quantidade de automóveis na garagem de cada Revendedora (CNPJ) (dica: na tabela GARAGEM listar quantidade agrupada por CNPJ)
SELECT CNPJ, COUNT(*) FROM GARAGENS GROUP BY CNPJ;

--Apresentar a quantidade de Negócios realizados, e o total de dinheiro movimentado nas vendas
SELECT COUNT(*), SUM(Preco) FROM NEGOCIOS;

--Apresentar a quantidade de Negócios por CNPJ, listando o CNPJ da revendedora e o e o total de vendas por CNPJ
SELECT CNPJ, COUNT(*), SUM(Preco) FROM NEGOCIOS GROUP BY CNPJ;

--Apresentar a quantidade de Negócios por CNPJ, listando o CNPJ da revendedora, e o total de vendas por CNPJ, considerando apenas vendas superiores a 3 unidades 
SELECT CNPJ, COUNT(*), SUM(Preco) FROM NEGOCIOS WHERE Qtd_unidades > 3 GROUP BY CNPJ;
SELECT CNPJ, COUNT(*), SUM(Preco) FROM NEGOCIOS WHERE Preco > 3000 GROUP BY CNPJ;

--Listar os consumidores e seus negócios realizados, apresentando nome do consumidor, CPF, CODIGO do veículo adquirido e preço pago

  --Sem INER JOIN
SELECT c.NOME, c.CPF, n.Codigo, n.Preco FROM CONSUMIDORES c, NEGOCIOS n WHERE c.CPF = n.CPF;

  --Com INER JOIN
SELECT c.NOME, c.CPF, n.Codigo, n.Preco FROM CONSUMIDORES c INNER JOIN NEGOCIOS n ON c.CPF = n.CPF;

--Listar os consumidores e seus negócios realizados, apresentando nome do consumidor, CPF, fabricante e modelo do veículo adquirido e preço pago

  --Sem INER JOIN
SELECT c.NOME, c.CPF, n.Codigo, a.Fabricante, a.Modelo, n.Preco FROM CONSUMIDORES c, NEGOCIOS n, AUTOMOVEIS a WHERE c.CPF = n.CPF AND n.Codigo = a.Codigo;

  --Com INER JOIN
SELECT c.NOME, c.CPF, n.Codigo, a.Fabricante, a.Modelo, n.Preco FROM CONSUMIDORES c INNER JOIN NEGOCIOS n ON c.CPF = n.CPF INNER JOIN AUTOMOVEIS a ON n.Codigo = a.Codigo;

--Listar os TODOS os consumidores (incluindo aqueles que não fizeram negócios)  e os negócios realizados, apresentando nome do consumidor, CPF, CODIGO do veículo adquirido e preço pago
  
    --Com LEFT JOIN 
SELECT c.NOME, c.CPF, n.Codigo, a.Fabricante, a.Modelo, n.Preco FROM CONSUMIDORES c LEFT JOIN NEGOCIOS n ON c.CPF = n.CPF LEFT JOIN AUTOMOVEIS a ON n.Codigo = a.Codigo;

    --Com INER JOIN
SELECT c.NOME, c.CPF, n.Codigo, a.Fabricante, a.Modelo, n.Preco FROM CONSUMIDORES c INNER JOIN NEGOCIOS n ON c.CPF = n.CPF INNER JOIN AUTOMOVEIS a ON n.Codigo = a.Codigo;  