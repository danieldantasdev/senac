CREATE DATABASE IF NOT EXISTS `dbsenac`;
USE `dbsenac`;

CREATE TABLE aluno (
  id_aluno INT NOT NULL AUTO_INCREMENT,
  nome VARCHAR(100) NOT NULL,
  email VARCHAR(100) NOT NULL,
  senha VARCHAR(100) NOT NULL,
  PRIMARY KEY (id_aluno)
);

CREATE TABLE curso (
  id_curso INT NOT NULL AUTO_INCREMENT,
  nome VARCHAR(100) NOT NULL,
  PRIMARY KEY (id_curso)
);

CREATE TABLE matricula (
  id_matricula INT NOT NULL AUTO_INCREMENT,
  id_aluno INT NOT NULL,
  id_curso INT NOT NULL,
  PRIMARY KEY (id_matricula),
  FOREIGN KEY (id_aluno) REFERENCES aluno(id_aluno),
  FOREIGN KEY (id_curso) REFERENCES curso(id_curso)
);

INSERT INTO aluno (nome, email, senha) VALUES ('Daniel', 'daniel@gmail.com', 'mhgjahsgsa');
INSERT INTO aluno (nome, email, senha) VALUES ('João', 'joao@gmail.com', 'mhgssdsdsgfsfcdfshja');

INSERT INTO curso (nome) VALUES ('Banco de Dados I');
INSERT INTO curso (nome) VALUES ('Banco de Dados II');

INSERT INTO matricula (id_aluno, id_curso) VALUES (1, 1);
INSERT INTO matricula (id_aluno, id_curso) VALUES (1, 2);


SELECT m.id_matricula, a.nome, c.nome FROM matricula m, aluno a, curso c WHERE m.id_aluno = a.id_aluno AND m.id_curso = c.id_curso;

SELECT matricula, nome, curso FROM matricula, aluno, curso WHERE matricula.id_aluno = aluno.id_aluno AND matricula.id_curso = curso.id_curso;

SELECT matricula,nome,curso FROM matricula,aluno,curso WHERE matricula_id BETWEEN 1 AND 2 AND aluno_id BETWEEN 1 AND 2 AND curso_id BETWEEN 1 AND 2;

SELECT nome FROM aluno WHERE nome LIKE '%Da%';

SELECT COUNT (id_matricula) FROM matricula;
SELECT SUM (id_matricula) FROM matricula;
SELECT AVG (id_matricula) FROM matricula;

SELECT id_matricula COUNT FROM matricula;
SELECT id_matricula SUM FROM matricula;
SELECT id_matricula AVG FROM matricula;
SELECT id_matricula MAX FROM matricula;

-- DROP DATABASE IF EXISTS `dbsenac`;

-- mysqldump -u root -p dbsenac > dbsenac.sql

-- mysql -u root -p
-- mysql -h localhost -u root -p

-- mysql -h 170.81.168.10 -u ads -p
-- mysql -h 170.81.168.10 -u eng2 -p