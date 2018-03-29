#include<stdio.h>
#define max 3

int main()
{
	int matriz[max][max] = {{ 0, 2, 1}, { 3, 5, 6}, { 8, 9, 6}}, lin, col, aux;
	
	/*for(lin=0; lin < max; lin++)
		for(col=0; col < max; col++)
		{
			printf("Digite um numero: ");
			scanf("%d", &matriz[lin][col]);
		}
	*/	
		printf("\n A nova matriz e: \n\n");

	for(lin=0; lin < max; lin++)
	{
		for(col=0; col < max; col++)
		{
			if(col == 1)
				printf("| %d |", 2 * matriz[lin][col]);
			else
				printf(" %d ", 2 * matriz[lin][col]);
		}
		if(lin != 2)
			printf("\n---------------\n");
	}
	printf("\n"); 
	
	lin = max-1;
	for(col=0; col < max; col++)
	{
		printf(" %d", matriz[lin][col]);
		lin--;
	}
	printf("\n"); 
	
	/*for(lin=0; lin < max; lin++)
		for(col=0; col < max; col++)
		{
			printf("Digite um numero: ");
			scanf("%d", &matriz[lin][col]);
			matriz[lin][col] *= 2;
		}
		
		printf("\n A nova matriz e: \n\n");

	for(lin=0; lin < max; lin++)
	{
		for(col=0; col < max; col++)
		{
			printf(" %d", matriz[lin][col]);
		}
		printf("\n");
	} */
	
	return 0;
}
