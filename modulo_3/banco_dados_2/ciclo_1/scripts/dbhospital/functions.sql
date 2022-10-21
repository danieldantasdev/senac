DELIMITER $$ 
CREATE FUNCTION pow(x FLOAT, y FLOAT) RETURNS FLOAT
BEGIN
RETURN x ** y;
END $$
DELIMITER ;

SELECT pow(2, 3);

DELIMITER $$ 
CREATE FUNCTION media(x FLOAT, y FLOAT) RETURNS FLOAT
DETERMINISTIC
BEGIN
RETURN (x + y) / 2;
END $$
DELIMITER ;

SELECT media(2, 3);

DELIMITER $$
CREATE FUNCTION dtsMinutes(dts DATETIME) RETURNS INT
DETERMINISTIC
BEGIN
RETURN DATE_PART('minute', dts);
END $$
DELIMITER ;

SELECT dtsMinutes('2020-01-01 00:00:00');

-- Crie uma procedure que escreva "bem vindo ao hospital"
DELIMITER $$
CREATE PROCEDURE escrevaBemVindo()
BEGIN
SELECT 'bem vindo ao hospital';
END $$
DELIMITER ;

-- Execute a procedure criada
CALL escrevaBemVindo();

-- Crie uma procedure que liste os médicos que moram no RJ
DELIMITER $$
CREATE PROCEDURE listaMedicosRJ()
BEGIN
SELECT * FROM Medicos WHERE cidade = 'Rio de Janeiro';
END $$
DELIMITER ;


-- Execute a procedure criada
CALL listaMedicosRJ();  

-- Crie uma procedure que dado o CPF, liste a sinformações do paciente
DELIMITER $$
CREATE PROCEDURE listaPaciente(IN cpf2 VARCHAR(45))
BEGIN
SELECT * FROM Pacientes WHERE cpf = cpf2;
END $$
DELIMITER ;

-- Execute a procedure criada
CALL listaPaciente('123.456.789-10');

-- Crie uma procedure que dado uma idade, liste o nome e a especilidade do médico

DELIMITER $$
CREATE PROCEDURE listaMedicoIdade(IN idade2 INT)
BEGIN
SELECT * FROM Medicos WHERE idade = idade2;
END $$
DELIMITER ;

-- Execute a procedure criada
CALL listaMedicoIdade(3);

--Crie uma procedure que dado o código do médico, liste o andar e o número do ambulatório
DELIMITER $$
CREATE PROCEDURE listaAmbulatorio(IN codigo2 INT)
BEGIN
SELECT * FROM Ambulatorio WHERE codigo_ambulatorio = codigo2;
END $$
DELIMITER ;

-- Execute a procedure criada
CALL listaAmbulatorio(201);

-- Crie uma procedure que calcula a média de cinco números
DELIMITER $$
CREATE PROCEDURE media5(IN num1 FLOAT, IN num2 FLOAT, IN num3 FLOAT, IN num4 FLOAT, IN num5 FLOAT)
BEGIN
SELECT (num1 + num2 + num3 + num4 + num5) / 5;
END $$
DELIMITER ;

-- Execute a procedure criada
CALL media5(1, 2, 3, 4, 5);

-- Crie uma procedure que retorne as duas raízes de uma equação do segundo grau, dado os coeficeintes A, B e C da equação (3, -7, 4), (9, -12, 4), (5, 3, 5)
DELIMITER $$
CREATE PROCEDURE raizes(IN a FLOAT, IN b FLOAT, IN c FLOAT)
BEGIN
SELECT a, b, c;
SELECT (b * b) - (4 * a * c);
SELECT (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
SELECT (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
END $$
DELIMITER ;

-- Execute a procedure criada
CALL raizes(3, -7, 4);
CALL raizes(9, -12, 4);
CALL raizes(5, 3, 5);