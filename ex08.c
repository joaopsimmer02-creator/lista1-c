<<<<<<< HEAD
	#include <stdio.h>
	#include <stdlib.h>
	
	int main()
	{
		float val_dep, val_tj, val_rend, val_total;
		
		printf("Digite o valor do seu deposito:\n");
		scanf("%f", &val_dep);
		
		printf("Digite o valor da taxa de juros:\n");
		scanf("%f", &val_tj);
		
		val_rend= val_dep * val_tj;
		printf("O valor do seu rendimento sera:%.2f\n", val_rend);
		
		val_total= val_dep + val_rend; 
		printf("O valor total apos o rendimento sera de: %.2f\n", val_total);
		
		return 0;
	}
=======
	#include <stdio.h>
	#include <stdlib.h>
	
	int main()
	{
		float val_dep, val_tj, val_rend, val_total;
		
		printf("Digite o valor do seu deposito:\n");
		scanf("%f", &val_dep);
		
		printf("Digite o valor da taxa de juros:\n");
		scanf("%f", &val_tj);
		
		val_rend= val_dep * val_tj;
		printf("O valor do seu rendimento sera:%.2f\n", val_rend);
		
		val_total= val_dep + val_rend; 
		printf("O valor total apos o rendimento sera de: %.2f\n", val_total);
		
		return 0;
	}
>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
