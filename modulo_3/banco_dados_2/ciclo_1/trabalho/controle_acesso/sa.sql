GRANT SELECT ON automoveis TO daniel;
GRANT INSERT ON automoveis TO daniel;
GRANT UPDATE ON automoveis TO daniel;
GRANT DELETE ON automoveis TO daniel;

GO

REVOKE SELECT ON automoveis TO daniel;
REVOKE INSERT ON automoveis TO daniel;
REVOKE UPDATE ON automoveis TO daniel;
REVOKE DELETE ON automoveis TO daniel;

GO

GRANT CREATE TABLE TO daniel;
GRANT CREATE ROLE TO daniel;

GRANT CREATE ANY DATABASE TO aluno;
GRANT CREATE TABLE TO daniel;

GRANT SELECT ON SCHEMA::db_accessadmin TO daniel;

SELECT * FROM AUTOMOVEIS WHERE Fabricante='Chevrolet';
