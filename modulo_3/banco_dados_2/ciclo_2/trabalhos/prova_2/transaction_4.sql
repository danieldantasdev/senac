CREATE PROCEDURE T4 (@codm int, @codp int, @data VARCHAR(50), @hora time)
AS

BEGIN

 BEGIN TRY
  IF EXISTS (SELECT * FROM Consultas c 
            INNER JOIN Horario h ON c.codm = h.codm 
            WHERE (c.codm <> @codm OR c.codp <> @codp) AND c.hora <> @hora
            AND h.DiaSemana = SUBSTRING(c.[data],1,2)
            )
            
  BEGIN TRANSACTION
    INSERT INTO Consultas(codm, codp, data, hora) VALUES (@codm, @codp, @data, @hora)
    PRINT('INSERIDO COM SUCESSO')
  COMMIT TRANSACTION

 END TRY

 BEGIN CATCH

  PRINT('NÃO FOI POSSÍVEL REALIZAR A TRANSAÇÃO')
  -- ROLLBACK TRANSACTION
 END CATCH

END

EXECUTE T4 91, 1030, "2022/08/01", "09:00"
EXECUTE T4 91, 1040, "2022/08/02", "09:30"
EXECUTE T4 90, 1050, "2022/08/01", "10:30"
EXECUTE T4 90, 1060, "2022/08/01", "11:00"
EXECUTE T4 91, 1070, "2022/08/03", "11:30"
EXECUTE T4 91, 1080, "2022/08/04", "11:30"

SELECT * FROM Consultas;
SELECT * FROM Ambulatorio;  
SELECT * FROM Horario;
SELECT * FROM Medicos;

DROP PROCEDURE T4