/*Calcular a media de notas de um aluno so, 
mais para frente iremos aprender de varios alunos*/

/*Quero saber se o aluno esta aprovado e reprovado, estabelecendo uma condição*/

/*if é uma estrutura, não comando;*/
/*comando é quando termina com ;*/

#include <stdio.h>
int main() {
	
	float nota1, nota2, media;
	
	printf("Informe a primeira nota:");
	scanf("%f",&nota1);
	
	printf("Informe a segunda nota:");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	printf("A media do aluno foi: %.1f",media);
	
	/*printf("Aprovado %f", media); fiz errado*/
	
	if(media >= 7) { 
		printf("\nAprovado\n"); 
	}
	
	/* não é obrigatóro usar as chaves, porem é usual para delimitar 
	o inicio e fim da estrutura*/
	/* é necessário usar as chaves quando temos mais de um comando*/
	
	if(media < 7) { 
		printf("\nReprovado\n"); 
	}
		
	else{
		printf("\nReprovado\n");
	}
	
	/*else esta associado a um unico if; posso ter ifs dentro do else;*/
	/*else nao testa condição, é utilizado para ultimo caso,
	se não aconteceu, pode fazer isso daqui*/
	
	/*poderia usar tanto o else como o if para o reprovado*/
}