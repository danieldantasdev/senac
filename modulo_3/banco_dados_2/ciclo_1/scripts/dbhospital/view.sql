CREATE VIEW medico_ortopedista AS SELECT * FROM Medicos WHERE especialidade = 'ortopedista';

/* crie a view EspecialistaRj com médicos somente com atributos codigo_medico, nome, especialidade que moram no Rio de Janeiro */
CREATE VIEW EspecialistaRj AS SELECT codigo_medico, nome, especialidade FROM Medicos WHERE especialidade = 'Ortopedia' AND cidade = 'Rio de Janeiro';

/* Crie uma view chamada GrupodeRisco da tabela de Pacientes, com campo nome, doença, cidade que tem doença Pneumonia, Hipertensão ou Gripe */
CREATE VIEW GrupodeRisco AS SELECT nome, doenca, cidade FROM Pacientes WHERE doenca = 'Pneumonia' OR doenca = 'Hipertensão' OR doenca = 'Gripe';

/* Crie uma view chamada CapacidadesMedicas com campos especialidade e quantidade */
CREATE VIEW CapacidadesMedicas AS SELECT especialidade, COUNT(*) FROM Medicos GROUP BY especialidade;

/* Crie uma view chamada ConsultasDez20 com nome do medico, nome do paciente, data e hora das consultas do mês de dezembro de 2020 */
CREATE VIEW ConsultasDez20 AS SELECT m.nome AS Medicos, p.nome AS Pacientes, c.data_atendimento AS Consultas, c.hora FROM Medicos m, Pacientes p, Consultas c WHERE m.codigo_medico = c.codigo_medico AND p.codigo_paciente = c.codigo_paciente AND c.data_atendimento LIKE '2020-12%';


/* Crie uma view chamada consultasRiscoDez20 com a quantidade de consultas para cada doença do grupo de risco Pneumonia, Hipertensão ou Gripe em 2020 */
CREATE VIEW consultasRiscoDez20 AS SELECT p.doenca, COUNT(*) FROM Pacientes p INNER JOIN Consultas c ON p.codigo_paciente = c.codigo_paciente WHERE p.doenca = 'Pneumonia' OR p.doenca = 'Hipertensão' OR p.doenca = 'Gripe' AND c.data_atendimento LIKE '2020-%' GROUP BY p.doenca;