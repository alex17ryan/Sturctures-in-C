#include <stdio.h>
#include <stdlib.h>


struct date {
    int day, month, year;
} date;

int days(int d, int m, int y) {
	return d+(m*30)+((y-2000)*365);
}

int main() {
	
	printf("Enter the day: "); scanf("%i", &date.day);
	printf("Enter the month: "); scanf("%i", &date.month);
	printf("Enter the year: "); scanf("%i", &date.year);
	
	printf("The number of days since the turn of the century is %i days. ", days(date.day, date.month, date.year));
	
	return 0;
}