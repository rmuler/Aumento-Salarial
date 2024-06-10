#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	//variáveis
	float sal,porcentagem,salAumento;	
	char opcao[30] = "SIM";

	//laço de rep
	while(strcmp(opcao, "SIM") == 0) {
	
		//entrada de dados
		printf("Informe o salario do funcionario:\n");
		scanf("%f",&sal);
		printf("Informe o percentual de aumento desse funcionario:\n");
		scanf("%f",&porcentagem);
		//atribuição
		salAumento = (sal * (porcentagem / 100) ) + sal; 
		
		//saída de dados
		printf("----------------------------\n");
		printf("Salario reajustado: %.1f\n",salAumento);
	
	//verificando o desejo do usuário
	printf("Deseja continuar? Escreva em maiusculo\n");
	scanf("%s",&opcao);

	//limpar console
	system("cls");
	}

	system("pause");
	return 0;
}