<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1, p1, n2, p2, n3, p3, mediap;
	printf("Digite sua primeira nota e seu respectivo peso: \n");
	scanf("%f %f", &n1, &p1);
	printf("Digite sua segunda nota e seu respectivo peso: \n");
	scanf("%f %f", &n2, &p2);
	printf("Digite sua terceira nota e seu respectivo peso: \n");
	scanf("%f %f", &n3, &p3);
	
	mediap = n1*p1 + n2*p2 + n3*p3 / p1+p2+p3;
	printf("A media ponderada e: %.2f", mediap);
	
	return 0;	 		
	
	

}
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1, p1, n2, p2, n3, p3, mediap;
	printf("Digite sua primeira nota e seu respectivo peso: \n");
	scanf("%f %f", &n1, &p1);
	printf("Digite sua segunda nota e seu respectivo peso: \n");
	scanf("%f %f", &n2, &p2);
	printf("Digite sua terceira nota e seu respectivo peso: \n");
	scanf("%f %f", &n3, &p3);
	
	mediap = n1*p1 + n2*p2 + n3*p3 / p1+p2+p3;
	printf("A media ponderada e: %.2f", mediap);
	
	return 0;	 		
	
	

}
>>>>>>> 8ffd8fae0f8ed6f56ad9f9ce88656e7d4783b1e1
