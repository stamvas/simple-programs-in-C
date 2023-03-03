#include <stdio.h>
#include <stdlib.h>

#define megethos 15

int main()
{
	system("chcp 1253>nul");
	int i, j, found, temp, ar[megethos];
	
	printf("Δώσε τα στοιχεία του πίνακα: \n");
	for (i=0; i<megethos; i++)
	{
		do
		{
		printf("Δώσε %do στοιχείο: ", i+1);
		scanf("%d", &ar[i]);
		found = 0;
		for (j=0; j<i; j++)
			if (ar[j] == ar[i])
			{
				printf("Ο αριθμός %d υπάρχει ήδη.\n", ar[i]);
				found = 1;
				break;
			}
		}
		while (found==1);
	}

	printf("\n");
	printf("Ο πίνακας σε φθίνουσα διάταξη είναι: \n");
	for (i=1; i<megethos; i++)
	{
		for (j=megethos-1; j>=1; j--)
		{
			if (ar[j-1]<ar[j])
			{
				temp=ar[j-1];
				ar[j-1]=ar[j];
				ar[j]=temp;
			}
		}
	}
	printf("[");
	for (i=0; i<megethos; i++)
	{
		printf(" %d ", ar[i]);
	}
	
	printf("]\n");
	return 0;
}
