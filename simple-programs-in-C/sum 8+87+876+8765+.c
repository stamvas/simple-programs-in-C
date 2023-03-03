#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 1253>nul");
	int i;
	long int term=8,sum=0;
	
	for (i=8;i>0;i--)
	{
		sum=sum+term;
		term=(term*10)+i-1;
	}
	
	printf("Το αποτέλεσμα 8+87+876+8765+...+87654321 είναι: %ld",sum);
	return 0;
}
