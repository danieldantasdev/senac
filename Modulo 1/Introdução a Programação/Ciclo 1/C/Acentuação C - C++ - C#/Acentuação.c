#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	unsigned int CPAGE_UTF8 = 65001;
	unsigned int CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	printf("Olá, aqui é um exemplo de acentuação");
	
	system("pause");
	return 0;
}