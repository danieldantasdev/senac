CREATE DATABASE dbtestejdbc;

USE dbtestejdbc;

CREATE TABLE conta(
    agencia INT PRIMARY KEY,
    numero INT,
    titular VARCHAR(50),
    saldo FLOAT
);