//estrutura de repetição, usando o loop ou laço de repetição;
//tipos de estruturas: for, while, do...while;
//vamos usar a estrutura for nesse exemplo;
//for (exp_inicial; expr_boleana; incremento){comandos}
/*float n1, n2, media;
		printf("Informe a primeira nota:");
			scanf("%f", &n1);
		printf("Informe a segunda nota:");
			scanf("%f", &n2);
		media=(n1+n2)/2;
		printf("Média: %.1f", media);*/
//so tem o return, por causa do main

//cont = cont + 1; //cont++
//cont = cont - 1; //cont--
//cont = cont + 2; //cont+=2
//cont = cont -2;  //cont-=2

/*system("pause");
system("cls");*/

//nesse programa, só é armazenada o último dado inserido, do último aluno
//vai sobrescrevendo encima do outro

#include<stdio.h>
#include<stdlib.h>

int main (){
	int cont;
	for(cont = 0; cont <= 10; cont++){
printf("Cont = %d\n", cont);
	}
	return 0;
}

