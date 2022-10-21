DELIMITER $$
CREATE PROCEDURE especialidadeMedicos(IN especialidade VARCHAR(45))
BEGIN
    SELECT * FROM Medicos WHERE especialidade = especialidade;
END $$
DELIMITER ;

CALL especialidadeMedicos('ortopedista');