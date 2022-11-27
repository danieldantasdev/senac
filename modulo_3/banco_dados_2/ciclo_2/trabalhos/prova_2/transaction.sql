Create Procedure T1 (@codm int, @codp int, @data VARCHAR(50), @hora time)
As
Begin
 Begin Try
  Begin Transaction
    INSERT INTO Consultas(codm, codp, data, hora) VALUES (@codm, @codp, @data, @hora)
  COMMIT Transaction
 End Try
 Begin Catch
    PRINT('NÃO FOI POSSÍCEL REALIZAR A TRANSAÇÃO')
  ROLLBACK Transaction
 End Catch
end

EXECUTE T1 51, 1011, "2016-10-09", "21:40:00";

SELECT * FROM Consultas;

DROP PROCEDURE T1