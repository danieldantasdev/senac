/*
Em uma escola é necessário armazenar os dados de
diversos alunos. Suponha uma turma com 20 alunos e
que os dados de cadastro desejados são: nome,
matrícula, quatro notas e a média final. Faça um
programa para armazenar esses dados e imprimir a
média de cada aluno.

*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
# define max 20

//typedef struct {
//	char nome [50];
//	int matricula;
//	float nota [4];
//	float media;
//	float peso;
//	float altura;
//	 float IMC;
//	
//}aluno;

 struct Aluno{
    char nome[20];
    char email[20];
    char grau[20];
    float peso;
	float altura;
	float IMC;
};

struct Aluno cad_aluno[20];

float calculaimc(float p, float a){
    float resultado = p / (a*a);
    return resultado;
}


int main(){
//	aluno alun[max];
//Aluno cad_aluno[20];

	int i = 0, j = 0,l=0;
	
	int opcao;
	setlocale(LC_ALL, "Portuguese");

        for (i = 1; i <=20;){
            printf("\n\nCadastro dos Alunos: \n");
            printf("Digite o numero de uma das opções: \n");
            printf("1- Cadastrar aluno \n");
            printf("2- Listar alunos \n");
            printf("3- Apagar alunos \n");
            printf("4- Listar IMC de alunos \n");
            printf("5- Buscar alunos \n");
            printf("0- Sair \n");
            scanf("%d", &opcao);

            switch(opcao) {

            case 1:

                    fflush(stdin);
                    printf ("\n Nome do aluno:");
                    scanf ("%s", &cad_aluno[i].nome);
                    fflush(stdin);
                    printf ("\n Email do aluno:");
                    scanf ("%s", &cad_aluno[i].email);
                    fflush(stdin);
                    printf ("\n Peso do aluno: ");
                    scanf ("%f", &cad_aluno[i].peso);
                    fflush(stdin);
                    printf ("\n Altura do aluno: ");
                    scanf ("%f", &cad_aluno[i].altura);
                    fflush(stdin);
                    cad_aluno[i].IMC = calculaimc(cad_aluno[i].peso, cad_aluno[i].altura);
                    fflush(stdin);
                    i++;
                break;
            case 2:
                for (l = 1; l <=20; l++) {
                    if(l < i){
                        printf("\n\nNome: %s", cad_aluno[l].nome);
                        printf("\nEmail: %s", cad_aluno[l].email);
                        printf("\nPeso: %1.2f", cad_aluno[l].peso);
                        printf("\nAltura: %1.2f", cad_aluno[l].altura);
                        printf("\nIMC: %1.2f", cad_aluno[l].IMC);
                    }
                    else{
                        l = 20;
                    }
                }
                break;
            case 3 :
                break;
            case 4 :
                for (l = 0; l <20; l++) {
                    if(l < i){
                        printf("IMC do aluno %d: %1.2f", &l, &cad_aluno[l].IMC);
                    }
                    else{
                        l = 20;
                    }
                }
                break;
                 case 5 :
                for (l = 0; l <20; l++) {
                    if(l < i){
                        printf("O aluno escolhido foi %s: %s", &cad_aluno[l].nome, &cad_aluno[l].email);
                    }
                    else{
                        l = 20;
                    }
                }
                break;
            case 0 : exit(0);
            default:
                printf ("Opção invalida\n");
                break;
        }
	}
	return 0;
	
	
//	for (i = 0; i < max; i++){
//		
//	
//	fflush(stdin);
//	printf("\n\nInforme o nome do aluno: ");
//	fgets(alun[i].nome,50,stdin);
//	
//	printf("\nInforme a matricula do aluno: ");
//	scanf("%d", &alun[i].matricula);
//	
//	for (j=0;j<4;j++){
//		printf("Informe a nota do aluno: ");
//		scanf("%f", &alun[i].nota[j]);
//		alun[i].media = alun[i].nota[j] + alun[i].media;
//	}
//	
//	printf("\n%s",alun[i].nome);
//	printf("\n Notas: \n 1 - %.2f \n 2 - %.2f \n \n 3 - %.2f \n 4 - %.2f",alun[i].nota[j]);
//	printf("\nMédia: %.2f",alun[i].media/4);
//	}
}