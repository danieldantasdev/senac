-- AUTOMOVEIS (Codigo, Fabricante, modelo, ano, pais, preco_tabela)
-- REVENDEDORA (CNPJ, Nome, Proprietário, Cidade, Estado)
-- CONSUMIDORES (CPF, Nome, Sobrenome, Cidade, Estado)
-- GARAGENS (CNPJ, Código, quantidade)
-- NEGOCIOS (CNPJ, CPF, Codigo, DataC, preco)

-- Na tabela AUTOMOVEIS cada automóvel é identificado por um código nacional com o nome do fabricante e modelo do carro. Os preços de tabela são determinados também pelo ano do carro. Apenas revendedoras autorizadas cadastradas na relação REVENDEDORAS podem vender os carros no mercado. Estas podem estar em diversos estados e cidades. E seu CNPJ as identifica unicamente. Os consumidores têm identidade única, especificada por seu CPF, além do Nome e sobrenome.
-- Cada negócio efetuado é registrado na tabela NEGOCIOS, com detalhamento da data e preço pago, além da identidade do comprador (ou consumidor), identificação da revenda (CNPJ), e do veículo (código e ano). Supõe-se que um consumidor não compra um automóvel de características idênticas na mesma revendedora. Em datas diferentes. Já a relação GARAGENS determina quais automóveis as revendedoras têm intenção de negociar, e qual o seu potencial de vendas (ou quantidade disponível daquele tipo) e podem ser negociados.

-- Criar as seguintes visões: 

-- 1) Carros_Novos (Código, Fabricante, Modelo, Ano, País, Preço_tabela), com os automóveis de origem argentina fabricados no ano de 2020 

CREATE VIEW Carros_Novos AS SELECT * FROM AUTOMOVEIS WHERE Fabricante = 'Argentina' AND ano = 2020;

-- 2) Auto_ok (Código, Fabricante, Modelo, Ano, País, Preço_tabela), com os carros fabricados em 2016 não podendo ter preço de tabela menor do que R$45.000,00). 

CREATE VIEW Auto_ok AS SELECT * FROM AUTOMOVEIS WHERE ano = 2016 AND Preco_tabela > 45;

-- 3) Consumidores_Cariocas (Nome, CPF) com os consumidores que moram na cidade do rio de Janeiro

CREATE VIEW Consumidores_Cariocas AS SELECT * FROM CONSUMIDORES WHERE cidade = 'Rio de Janeiro';

-- 4) Neg_ok (Comprador, Revenda, Código, Ano, Data, Preço), registrando negócios com Lucro superior a 10% (dica: use como critério preco venda > preco de tabela * 1.1)

CREATE VIEW Neg_ok AS SELECT c.Nome, n.ano, n.dataC, n.preco FROM CONSUMIDORES c INNER JOIN NEGOCIOS n ON c.CPF = n.CPF WHERE n.preco > 0.1 AND n.preco < 1.1;

-- 5) Fabricantes_Estoque (Fabricante, quantidade), contendo fabricante e a quantidade total de automóveis fornecidos por ele nas garagens das revendedoras  (dica: usar Group by na view)

CREATE VIEW Fabricantes_Estoque AS SELECT a.Fabricante, g.quantidade FROM AUTOMOVEIS INNER JOIN GARAGENS ON a.codigo = g.codigo ;