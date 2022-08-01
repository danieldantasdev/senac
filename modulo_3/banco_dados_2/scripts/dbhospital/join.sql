SELECT m.nome AS Medicos , p.nome AS Pacientes, c.data_atendimento AS Consultas FROM Medicos m INNER JOIN Consultas c ON c.codigo_medico = m.codigo_medico INNER JOIN Pacientes p ON p.codigo_paciente = c.codigo_paciente;

SELECT * FROM Medicos LIKE '%Danie%';
