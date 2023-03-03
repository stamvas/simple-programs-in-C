#include<stdio.h>
#include<stdlib.h>


struct time 
{
	int hour;
	int minutes;
	int seconds;
};
struct time timeUpdate (struct time now);

int main()
{
	system("chcp 1253>nul");
	struct time currentTime, previousTime;
	printf("Δώσε ώρα : ");
	do
	{
		scanf("%d", &currentTime.hour);
		if (currentTime.hour < 0 || currentTime.hour > 11)
			printf("Λάθος τίμη ώρας. Δώσε ξανά ώρα: ");
	}
	while (currentTime.hour < 0 || currentTime.hour > 11);
	printf("Δώσε λεπτά: ");
	do
	{
		scanf("%d", &currentTime.minutes);
		if (currentTime.minutes < 0 || currentTime.minutes > 59)
			printf("Λάθος τιμή λεπτών. Δώσε ξανά λεπτά: ");
	}
	while (currentTime.minutes < 0 || currentTime.minutes > 59);
	printf("Δώσε δευτερόλεπτα: ");
	do
	{
		scanf("%d", &currentTime.seconds);
		if (currentTime.seconds < 0 || currentTime.seconds > 59)
			printf("Λάθος τιμή δευτερολέπτων. Δώσε ξανά δευτερόλεπτα: ");
	}
	while (currentTime.seconds < 0 || currentTime.seconds > 59);
	printf("Η ώρα είναι %d:%d:%d\n", currentTime.hour, currentTime.minutes,
		currentTime.seconds);
	previousTime = timeUpdate (currentTime);
	printf ("Η ώρα 59 δευτερόλεπτα πριν ήταν %d:%d:%d\n", previousTime.hour,
		previousTime.minutes, previousTime.seconds );
	
}
struct time timeUpdate(struct time now)
{
	
	now.seconds = -59 + 60 + now.seconds ;
		
		if (now.seconds <= 60) 
		{ 
			now.seconds = now.seconds ;
			now.minutes--;
			if (now.minutes == 60)
			{ 
					now.minutes >=  0;
					now.hour--;
				if (now.hour == 11) 
					now.hour = 0;
			}
		}
	return now;
}

