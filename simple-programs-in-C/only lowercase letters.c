#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 1253>nul");
	int i;
	char text[26];
	
	printf("Δώσε συμβολοσειρά:\n");
	scanf("%25s",text);
	printf("Η συμβολοσειρά διατηρώντας μόνο τους αγγλικούς πεζούς χαρακτήρες: ");
	for (i=0; text[i]!='\0'; i++)
		if (text[i]>='a' && text[i]<='z')
			printf("%c",text[i]);
	return 0;
}
