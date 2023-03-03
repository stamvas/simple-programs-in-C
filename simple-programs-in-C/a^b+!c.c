#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 1253>nul");
	int a,b,c;
	
	do
	{
		printf("Δώσε τιμή για το A (0 ή 1): ");
		scanf("%d",&a);
	} while ((a!=0) && (a!=1));
	
	do
	{
		printf("Δώσε τιμή για το B (0 ή 1): ");
		scanf("%d",&b);
	} while ((b!=0) && (b!=1));
	
	do
	{
		printf("Δώσε τιμή για το C (0 ή 1): ");
		scanf("%d",&c);
	} while ((c!=0) && (c!=1));
	
		printf("Η έξοδος είναι: %d",(a^b&&(!c)));
	return 0;
}
