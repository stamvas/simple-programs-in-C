#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <math.h>

#define MAX_CITIES 15
#define MAX_ITERATIONS 3
#define GROUP_NUMBER 2
 
struct city
{
       char city_name[20];
       float lat;
       float lon;
       int cluster_member;
        
}city_array[MAX_CITIES];  

struct point
{
	float x;
	float y;
};

struct group
{
	int ID;
	struct point center;
	int members;
} group_array[2];
 
void city_init()
{
	strncpy(city_array[0].city_name, "Αθήνα", 20);city_array[0].lat=37.98;city_array[0].lon=23.73;
	strncpy(city_array[1].city_name, "Λισαβόνα", 20);city_array[1].lat=38.74;city_array[1].lon=-9.14;
	strncpy(city_array[2].city_name, "Τορόντο", 20);city_array[2].lat=43.65;city_array[2].lon=-79.38;
	strncpy(city_array[3].city_name, "Μαδρίτη", 20);city_array[3].lat=40.42;city_array[3].lon=-3.70;
	strncpy(city_array[4].city_name, "Λονδίνο", 20);city_array[4].lat=51.51;city_array[4].lon=-0.12;
	strncpy(city_array[5].city_name, "Άμστερνταμ", 20);city_array[5].lat=52.37;city_array[5].lon=4.90;
	strncpy(city_array[6].city_name, "Όσλο", 20);city_array[6].lat=59.91;city_array[6].lon=10.76;
	strncpy(city_array[7].city_name, "Λεωκωσία", 20);city_array[7].lat=35.19;city_array[7].lon=33.38;
	strncpy(city_array[8].city_name, "Ρώμη", 20);city_array[8].lat=41.91;city_array[8].lon=12.51;
	strncpy(city_array[9].city_name, "Νάπολη", 20);city_array[9].lat=40.85;city_array[9].lon=14.31;
	strncpy(city_array[10].city_name, "Μόσχα", 20);city_array[10].lat=55.75;city_array[10].lon=37.62;
	strncpy(city_array[11].city_name, "Βοστόνη", 20);city_array[11].lat=42.36;city_array[11].lon=-71.06;
	strncpy(city_array[12].city_name, "Νέα Υόρκη", 20);city_array[12].lat=40.73;city_array[12].lon=-73.94;
	strncpy(city_array[13].city_name, "Σικάγο", 20);city_array[13].lat=41.88;city_array[13].lon=-87.62;
	strncpy(city_array[14].city_name, "Μπουένος Άιρες", 20);city_array[14].lat=-34.60;city_array[14].lon=-58.38;
	}
 
void print_city();
/*Εκτυπώνει για κάθε πόλη το όνομα, το γεωγραφικό πλάτος και το γεωγραφικό μήκος*/

void group_init();
/*Αρχικοποιεί τα κέντρα κάθε ομάδας*/

void group_assign_members();
/*Υπολογίζει σε ποια ομάδα ανήκει κάθε πόλη*/

void group_update_centers();
/*Υπολογίζει τα νέα κέντρα κάθε ομάδας*/

void find_groups();
/*Χρησιμοποιεί επαναληπτικά τις προηγούμενες δυο συναρτήσεις για να τυπώνει σε κάθε επανάληψη ποιες πόλεις περιέχει κάθε ομάδα*/


int main()
{
   system("chcp 1253>nul");
   city_init();
   print_city();
   //find_groups();
   printf("\n");
   system ("pause");
   return 0;
}

void print_city()
{
	int i;
	
	for (i=0; i<15; i++)
		printf("Όνομα: %s, Γεωγραφικό Πλάτος: %.2f, Γεωγραφικό Μήκος: %.2f \n",city_array[i].city_name,city_array[i].lat,city_array[i].lon);
		group_init();
		
}

void group_init()
{
	printf("Η 1η ομάδα εχει κέντρο : %.2f,%.2f\n",city_array[0].lat,city_array[0].lon);
	printf("Η 2η ομάδα εχει κέντρο : %.2f,%.2f\n",city_array[1].lat,city_array[1].lon);
	printf("-------------------");
}

void group_assign_members()
{
	
}
