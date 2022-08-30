-- Crie um proceudre armazenado que escreva a frase “SENAC RIO”
DELIMITER $$
CREATE PROCEDURE hello_world (name)
BEGIN
    SELECT name FROM world WHERE name = 'hello_world'
END $$
DELIMITER ;

CALL hello_world( 'hello_world');

--Crie um procedimento armazenado que liste os pacientes com sarampo
DELIMITER $$
CREATE PROCEDURE listaPacientesSarampo(IN doenca VARCHAR(45))
BEGIN
    SELECT * FROM Pacientes WHERE doenca = doenca;
END $$
DELIMITER ;

CALL listaPacientesSarampo('Sarampo');

-- Crie um procedimento armazenado que selecione e liste os pacientes com determinada doença (passada como parâmetro)
DELIMITER $$
CREATE PROCEDURE listaPacientesSarampo(IN doencaProcedure VARCHAR(45))
BEGIN
    SELECT * FROM Pacientes WHERE doenca = doencaProcedure;
END $$
DELIMITER ;

CALL listaPacientesSarampo('sarampo');

-- Listar nome e dados de consultas de determinado paciente (parâmetro = codp)
DELIMITER $$
CREATE PROCEDURE listaPacientesDados(IN codigo_paciente_procedure INT)
BEGIN
    SELECT * FROM Pacientes WHERE codigo_paciente = codigo_paciente_procedure;
END $$
DELIMITER ;

CALL listaPacientesDados(1001);

--Crie uma função que calcule o cubo de um numero X
DELIMITER $$ 
CREATE FUNCTION pow(x FLOAT, y FLOAT) RETURNS FLOAT
BEGIN
RETURN x ** y;
END $$
DELIMITER ;

SELECT pow(2, 3);

-- Crie uma função que calcule a raiz de uma equação do primeiro grau do tipo Ax+B=0, dados os coeficientes A e B (dica x=-B/A)

--Crie uma função chamada ConsultasApos que retorne as consultas com data posterior a um parâmetro passado (teste com ‘01/10/2020’)

--Criar uma trigger que se cadastrar um novo paciente verifique se o mesmo é do grupo de risco (‘Diabetes’, ‘Hipertensão’, Zica’) e caso seja, o registre na tabela GrpRisco (dica: utilize a função do SQL GETDATE() para obter a data/hora do registro para o campo ‘data’)