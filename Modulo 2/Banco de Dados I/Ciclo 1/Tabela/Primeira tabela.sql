USE [MeuPrimeiroBanco]
GO

/****** Object:  Table [dbo].[Pessoa]    Script Date: 07/04/2022 19:46:44 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[Pessoa](
	[CPF] [varchar](11) NOT NULL,
	[nome] [varchar](80) NOT NULL,
	[sobrenome] [varchar](80) NOT NULL,
	[telefone] [varchar](80) NOT NULL,
	[uf] [varchar](80) NOT NULL,
	[endereço] [varchar](80) NOT NULL,
 CONSTRAINT [pk_pessoa] PRIMARY KEY CLUSTERED 
(
	[CPF] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO

