#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 1253>nul");
	int num, a, digits=0;
	
	printf("Δώσε ακέραιο αριθμό ");
	scanf("%d",&num);
	a = num>0 ? num : -num;
	while (a > 0)
	{
		if (a % 10 == 2)
		digits++;
		a /= 10;
	}
	printf("Το πλήθος των εμφανίσεων του ψηφίου <<2>> είναι %d", digits);
	return 0;
}
