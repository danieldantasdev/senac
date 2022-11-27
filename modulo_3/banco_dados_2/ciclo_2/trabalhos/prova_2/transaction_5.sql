CREATE PROCEDURE T5 (@codm INT)
AS

BEGIN

 BEGIN TRY
  IF EXISTS (SELECT a.*, m.especialidade FROM (SELECT nroa, andar FROM Ambulatorio) AS a 
            JOIN
            (SELECT nroa, especialidade FROM Medicos m) AS m ON a.nroa = m.nroa)
   
  BEGIN TRANSACTION
    INSERT INTO Consultas(codm) VALUES (@codm)
    PRINT('INSERIDO COM SUCESSO')
  COMMIT TRANSACTION

 END TRY

 BEGIN CATCH

  PRINT('NÃO FOI POSSÍVEL REALIZAR A TRANSAÇÃO')
  -- ROLLBACK TRANSACTION
 END CATCH

END

EXECUTE T5 30
EXECUTE T5 89
EXECUTE T5 90

SELECT * FROM Consultas;
SELECT * FROM Ambulatorio;  
SELECT * FROM Horario;
SELECT * FROM Medicos;

DROP PROCEDURE T5
-- Select p.nome From Pacientes p Where exists
-- (Select *
-- From Medicos m
-- Where exists
-- (Select *
-- From Consultas c
-- Where c.codm = m.codm
-- and c.codp = p.codp))