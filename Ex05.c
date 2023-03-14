#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct employee {
    char name[8];
    int number;
    float ppp;
    int hours;
} emp[6];

int main() {
	
	int i; float s=0;
	
	for(i=1;i<=6;i++) {
		printf("-----Employee %i--------------------------------\n", i);
		printf("Name: "); scanf("%s", emp[i].name);
		printf("Number: "); scanf("%i", &emp[i].number);
		printf("Payment per hour: "); scanf("%f", &emp[i].ppp);
		printf("Hours: "); scanf("%i", &emp[i].hours);
		printf("-------------------------------------------------\n");
	}
	printf("Name\tNumber\tGross Pay\n");
	for(i=1;i<=6;i++) {
		printf("%s\t%i\t%.2f$\n", emp[i].name, emp[i].number, emp[i].ppp*emp[i].hours);
		s+=emp[i].ppp*emp[i].hours;
	}
	
	printf("\nThe total gross pay is %.2f$", s);
	
	
	return 0;
}