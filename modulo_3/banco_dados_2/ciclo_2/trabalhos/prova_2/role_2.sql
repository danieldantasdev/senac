CREATE ROLE R_ADM AUTHORIZATION rachel

GRANT SELECT ON Consultas TO rachel;
GRANT INSERT ON Consultas TO rachel;
GRANT UPDATE ON Consultas TO rachel;
GRANT DELETE ON Consultas TO rachel;

EXEC sp_addrolemember 'R_MEDICOS', 'rachel'  
GRANT SELECT ON DATABASE::DBMEDICOS TO R_MEDICOS;  
