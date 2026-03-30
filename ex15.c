<<<<<<< HEAD
#include <stdio.h>

int main(){
	
	float fabrica, 	per_lucro, per_impostos, lucro, imposto, final; 
	
	printf("Digite o valor de fabrica do veiculo: \n");
	scanf("%f", &fabrica);
	
	printf("Digite o o percentual de lucro do distribuidor: \n");
	scanf("%f", &per_lucro);
	
	printf("Digite o percentual de impostos: \n");
	scanf("%f", &per_impostos);
	
	
	lucro = fabrica * (per_lucro / 100);
	printf("\nO valor correspondente ao lucro do distribuidor e:\n %.2f", lucro);
	
	imposto = fabrica * (per_impostos / 100);
	printf("\nValor correspondente aos impostos:\n %.2f", imposto);
	
	final = fabrica + imposto + lucro;
	printf("\nValor final do veiculo: \n%.3f", final);
	
	return 0;
	
}
=======
#include <stdio.h>

int main(){
	
	float fabrica, 	per_lucro, per_impostos, lucro, imposto, final; 
	
	printf("Digite o valor de fabrica do veiculo: \n");
	scanf("%f", &fabrica);
	
	printf("Digite o o percentual de lucro do distribuidor: \n");
	scanf("%f", &per_lucro);
	
	printf("Digite o percentual de impostos: \n");
	scanf("%f", &per_impostos);
	
	
	lucro = fabrica * (per_lucro / 100);
	printf("\nO valor correspondente ao lucro do distribuidor e:\n %.2f", lucro);
	
	imposto = fabrica * (per_impostos / 100);
	printf("\nValor correspondente aos impostos:\n %.2f", imposto);
	
	final = fabrica + imposto + lucro;
	printf("\nValor final do veiculo: \n%.3f", final);
	
	return 0;
	
}
>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
