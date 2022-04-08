
/**
 * @file av001.c
 * @author DANIEL DANTAS E DANIEL BASTOS
 * @brief
 * @version 0.1
 * @date 2022-04-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define max 50
// SISTEMA DE CADASTRAMENTO E EXIBIÇÃO DE VETERINARIO

typedef struct animal
{
    int cpf_tutor[11];
    char nome_tutor[max];
    char tipo_animal[max];
    char nome_animal[max];
    int data_animal;

} animal;

/*
menu(){
    int op;
        printf("Informe a Opção desejada: \n");
        printf("1- Cadastramento de animal\n");
        printf("2- Sair\n");
        printf("R:\n");
        scanf("%d",&op);
}
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // NOME DO PROGAMA
    printf("\t\t-----SISTEMA DE CADASTRAMENTO E EXIBIÇÃO DE PETS-----\t\t");
    animal Animal[max];
    int i, loop = 1, op, term, cont;

    while (loop == 1)
    {
        printf("\nInforme a Opção desejada: \n");
        printf("1 - Cadastramento de animal\n");
        printf("2 - Listar todos os animais cadastrados\n");
        printf("3 - Sair\n");
        printf("R:\n");
        scanf("%d", &op);
        system("cls");

        switch (op)
        {
        case 1: // CADASTRAMENTO ANIMAL
            for (i = 0; i < max; i++)
            {
                system("cls");
                printf("Informe o Cpf do TUTOR: ");
                fflush(stdin);
                scanf("%d", &Animal[i].cpf_tutor);

                printf("Informe o nome do TUTOR: ");
                fflush(stdin);
                fgets(Animal[i].nome_tutor, max, stdin);

                printf("Informe o nome do ANIMAL: ");
                fflush(stdin);
                fgets(Animal[i].nome_animal, max, stdin);

                printf("Informe o tipo do ANIMAL: ");
                fflush(stdin);
                fgets(Animal[i].tipo_animal, max, stdin);

                printf("Informe a data de nascimento do ANIMAL: \n");
                fflush(stdin);
                scanf("%d", &Animal[i].data_animal);

                printf("Deseja Cadastrar mais animais ?? 1-sim ou 2-não");
                scanf("%d", &term);

                i++;
                if (term == 2)
                {
                    i = max;
                }
            }

            break;
        case 2: // LISTAR TODOS ANIMAIS DISPONIVEIS
            for (i = 0; i <= cont; i++)
            {
                system("cls");
                printf("Nome do tutor: %s \n", Animal[i].nome_tutor);
                printf("Cpf do tutor : %d\n", Animal[i].cpf_tutor);
                printf("Tipo do ANIMAL: %s\n", Animal[i].tipo_animal);
                printf("Nome do ANIMAL: %s\n", Animal[i].nome_animal);
                printf("Data de Nascimento do ANIMAL: %d\n", Animal[i].data_animal);
            }

            break;

        case 3: // SAIR
            loop = 0;
            break;

        default: // ERRO
            printf("--------FAVOR INFORME NUMEROS DE 1 A 3------");
            break;
        }
    }
}