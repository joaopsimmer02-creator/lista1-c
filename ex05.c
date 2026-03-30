<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, per_aumento, salario_novo, val_aumento;
	
	printf("Digite seu salario atual:\n ");
	scanf("%f", salario);
	
	printf("Digite o percentual de aumento que voce recebeu:\n");
	scanf("%f",&per_aumento);
	
	
	val_aumento = salario * per_aumento / 100;
	salario_novo= salario + val_aumento;
	
	printf("O valor do seu aumento e: %f\n", val_aumento);
	printf("O seu novo salario com o percentual de aumento que voce teve e: %.1f\n", salario_novo);
	
	return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, per_aumento, salario_novo, val_aumento;
	
	printf("Digite seu salario atual:\n ");
	scanf("%f", salario);
	
	printf("Digite o percentual de aumento que voce recebeu:\n");
	scanf("%f",&per_aumento);
	
	
	val_aumento = salario * per_aumento / 100;
	salario_novo= salario + val_aumento;
	
	printf("O valor do seu aumento e: %f\n", val_aumento);
	printf("O seu novo salario com o percentual de aumento que voce teve e: %.1f\n", salario_novo);
	
	return 0;
}
>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
