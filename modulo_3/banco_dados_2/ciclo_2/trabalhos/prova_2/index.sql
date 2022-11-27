-- CREATE CLUSTERED INDEX IDX_Id ON Medicos (codm);
CREATE NONCLUSTERED INDEX IDX_Nome ON Medicos (codm)
CREATE NONCLUSTERED INDEX IDX_Idade ON Medicos (idade)
DROP INDEX IDX_Idade ON Medicos
SELECT * FROM Medicos

SELECT nome, especialidade FROM Medicos Where idade > 40