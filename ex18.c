<<<<<<< HEAD
#include <stdio.h>

int main(){
	
	float peso, racao, resto;
	
	printf("Digite o peso do saco de racao:\n");
	scanf("%f", &peso);
	
	printf("Digite a quantidade de racao fornecida para os gatos:\n");
	scanf("%f", &racao);
	
	resto = peso - (racao  * 2 / 1000) * 5;
	
	printf("Quanto sobrara de racao no saco apos 5 dias: \n%.3f", resto);
	
	return 0;
	
	
}
=======
#include <stdio.h>

int main(){
	
	float peso, racao, resto;
	
	printf("Digite o peso do saco de racao:\n");
	scanf("%f", &peso);
	
	printf("Digite a quantidade de racao fornecida para os gatos:\n");
	scanf("%f", &racao);
	
	resto = peso - (racao  * 2 / 1000) * 5;
	
	printf("Quanto sobrara de racao no saco apos 5 dias: \n%.3f", resto);
	
	return 0;
	
	
}
>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
