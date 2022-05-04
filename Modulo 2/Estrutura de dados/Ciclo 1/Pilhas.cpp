int main(){
	
	int pilha[max];// tamanho da pilha
	int topo = -1; //pilha vazia
	int opcao;
	int valor;
	
// 	empilhar(&topo,pilha,5);
// // 	mostra_topo(topo,pilha);
// 	empilhar(&topo,pilha,4);
// // 	mostra_topo(topo,pilha);
// 	empilhar(&topo,pilha,1);
// 	mostra_topo(topo,pilha);
	
// 	desempilhar(&topo,pilha);
// 	mostra_topo(topo,pilha);
	
	
	do
    {
        printf("\nMENU\n");
        printf("1 - Mostrar topo\n");
        printf("2 - Empilhar\n");
        printf("3 - Desempilhar\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            mostra_topo(topo,pilha);
            break;
        case 2:
            printf("\nDigite o valor a ser inserido: ");
            scanf("%d", &valor);
            empilhar(&topo,pilha,valor);
            break;
        case 3:
            printf("\nDigite o valor a ser removido: ");
            scanf("%d", &valor);
            desempilhar(&topo,pilha);
            break;
        case 0:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
        }
    } while (opcao != 3);
    return 0;
}