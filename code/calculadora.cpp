#include <stdio.h>
#include <stdlib.h>

int main () {
	//variáveis
	float sal,porcentagem,salAumento;	
	
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
	
	system("pause");
	return 0;
}