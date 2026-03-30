<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float salario, c1, c2, saldoatual;
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	printf("Digite o valor do primeiro cheque:\n");
	scanf("%f", &c1);
	
	printf("Digite o valor do segundo cheque:\n");
	scanf("%f", &c2);
	
	saldoatual 	= salario - (c1 * 0.0038) + (c2 * 0.0038);
	
	printf("O seu saldo atual e de:%.2f", saldoatual);
	
	return 0;
}

=======
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float salario, c1, c2, saldoatual;
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	printf("Digite o valor do primeiro cheque:\n");
	scanf("%f", &c1);
	
	printf("Digite o valor do segundo cheque:\n");
	scanf("%f", &c2);
	
	saldoatual 	= salario - (c1 * 0.0038) + (c2 * 0.0038);
	
	printf("O seu saldo atual e de:%.2f", saldoatual);
	
	return 0;
}

>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
