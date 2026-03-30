<<<<<<< HEAD
#include <stdio.h>


int main(){
	
	float horas, salario, hora, sal_bruto, imposto, sal_receber;
	
	printf("Digite o numero de horas trabalhadas: \n");
	scanf("%f", &horas);
	
	printf("Digite o valor do salario minimo: \n");
	scanf("%f", &salario);
	
	hora= salario / 2;
	sal_bruto= horas * hora;
	imposto= sal_bruto * 0.03;
	sal_receber= sal_bruto - imposto; 
	
	prinf("Salario a receber: \n%.2f", sal_receber);
	
	
	return 0; 

}
=======
#include <stdio.h>


int main(){
	
	float horas, salario, hora, sal_bruto, imposto, sal_receber;
	
	printf("Digite o numero de horas trabalhadas: \n");
	scanf("%f", &horas);
	
	printf("Digite o valor do salario minimo: \n");
	scanf("%f", &salario);
	
	hora= salario / 2;
	sal_bruto= horas * hora;
	imposto= sal_bruto * 0.03;
	sal_receber= sal_bruto - imposto; 
	
	prinf("Salario a receber: \n%.2f", sal_receber);
	
	
	return 0; 

}
>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
