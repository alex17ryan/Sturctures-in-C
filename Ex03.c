#include <stdio.h>
#include <stdlib.h>


struct date {
    int month;
    int day;
    int year;
} cd;

int main() {
	
	printf("Enter the current month: "); scanf("%i", &cd.month);
	printf("Enter the current day: "); scanf("%i", &cd.day);
	printf("Enter the current year: "); scanf("%i", &cd.year);
	
	printf("\nToday: %i/%i/%i", cd.month, cd.day, cd.year);
	
	return 0;
}