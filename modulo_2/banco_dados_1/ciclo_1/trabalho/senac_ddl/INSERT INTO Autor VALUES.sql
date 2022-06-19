INSERT INTO Autor VALUES
(1, 'Roberto', '12345678912', 'Rua A num 1','1988-09-18', 'Brasileira'),
(2, 'Simone', '12345678922', 'Rua B num 1', '1976-08-08', 'Brasileira'),
(3, 'Fernando', '12345678944', 'Rua C num 1', '1996-07-13', 'Brasileira'),
(4, 'Felipe', '12345678955', 'Rua D num 1', '1988-02-28', 'Brasileira'),
(5, 'Fabio','12345678966', 'Rua E num 1', '1988-08-03', 'Brasileira'),
(6, 'Fernanda', '12345678977', 'Rua E num 1', '1988-03-08', 'Brasileira'),
(7, 'Julio', '12345678988', 'Rua E num 1', '1988-03-08', 'Brasileira'),
(8, 'Dario', '12345678999', 'Rua E num 1', '1988-03-08', 'Brasileira');


INSERT INTO Livro VALUES
(12, 'Sistemas de Banco de Dados', '99.00', '1988-03-08', 'Informatica', 003),
(22, 'Rede de Computadores', '199.00', '1988-03-08', 'Informatica', 003),
(33, 'Corpo Humano', '89.00', '1988-03-08', 'Medicina', 004),
(44, 'Leis da Física', '95.00', '1988-03-08', 'Ciencia', 002),
(55, 'Física Quantica', '95.00', '1988-03-08', 'Ciencia', 004),
(66, 'O Coração', '289.00', '1988-03-08', 'Medicina', 004);

INSERT INTO Autor_livro VALUES
(1, 12),
(1, 22),
(2, 33),
(3, 44),
(4, 55),
(5, 66),
(6, 44),
(7, 55),
(8, 66);

UPDATE Livro SET PRECO = preco * 1.1 WHERE Codigo = 66;



