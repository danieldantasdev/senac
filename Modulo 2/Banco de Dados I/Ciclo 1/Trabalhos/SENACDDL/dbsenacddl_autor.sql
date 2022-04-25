CREATE DATABASE  IF NOT EXISTS `dbsenacddl` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `dbsenacddl`;
-- MySQL dump 10.13  Distrib 8.0.28, for Win64 (x86_64)
--
-- Host: localhost    Database: dbsenacddl
-- ------------------------------------------------------
-- Server version	8.0.28

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `autor`
--

DROP TABLE IF EXISTS `autor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `autor` (
  `matricula` int NOT NULL,
  `nome` varchar(80) NOT NULL,
  `CPF` varchar(11) NOT NULL,
  `endereco` varchar(80) NOT NULL,
  `nascimento` date NOT NULL,
  `nacionalidade` varchar(30) NOT NULL,
  PRIMARY KEY (`matricula`),
  UNIQUE KEY `matricula` (`matricula`),
  UNIQUE KEY `CPF` (`CPF`),
  CONSTRAINT `autor_chk_1` CHECK ((`matricula` < 100)),
  CONSTRAINT `autor_chk_2` CHECK ((`matricula` < 1000)),
  CONSTRAINT `autor_chk_3` CHECK ((`matricula` < 1000)),
  CONSTRAINT `autor_chk_4` CHECK ((`matricula` < 1000)),
  CONSTRAINT `autor_chk_5` CHECK ((`matricula` < 1000)),
  CONSTRAINT `autor_chk_6` CHECK ((`matricula` < 1000)),
  CONSTRAINT `autor_chk_7` CHECK ((`matricula` < 1000))
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `autor`
--

LOCK TABLES `autor` WRITE;
/*!40000 ALTER TABLE `autor` DISABLE KEYS */;
INSERT INTO `autor` VALUES (1,'Roberto','12345678912','Rua A num 1','1988-09-18','Brasileira'),(2,'Simone','12345678922','Rua B num 1','1976-08-08','Brasileira'),(3,'Fernando','12345678944','Rua C num 1','1996-07-13','Brasileira'),(4,'Felipe','12345678955','Rua D num 1','1988-02-28','Brasileira'),(5,'Fabio','12345678966','Rua E num 1','1988-08-03','Brasileira'),(6,'Fernanda','12345678977','Rua E num 1','1988-03-08','Brasileira'),(7,'Julio','12345678988','Rua E num 1','1988-03-08','Brasileira'),(8,'Dario','12345678999','Rua E num 1','1988-03-08','Brasileira');
/*!40000 ALTER TABLE `autor` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-04-25  4:12:20
