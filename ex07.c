<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario_base, salario_grat, salario_receber;
	
	printf("Digite o seu salario base:\n");
	scanf("%f", &salario_base);
	
	salario_grat= (salario_base+ 50);
	salario_receber= salario_grat - (salario_base * 0.1); 
	
	printf("O seu salario com gratificacao e desconto de imposto sera: %.2f", salario_receber);
	
	return 0;
	
		

}
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario_base, salario_grat, salario_receber;
	
	printf("Digite o seu salario base:\n");
	scanf("%f", &salario_base);
	
	salario_grat= (salario_base+ 50);
	salario_receber= salario_grat - (salario_base * 0.1); 
	
	printf("O seu salario com gratificacao e desconto de imposto sera: %.2f", salario_receber);
	
	return 0;
	
		

}
>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
