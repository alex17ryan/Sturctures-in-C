#include <stdio.h>
#include <stdlib.h>


struct time {
    int hr;
    int min;
} ct;

int main() {
	
	printf("Enter the current hour: "); scanf("%i", &ct.hr);
	printf("Enter the current minute: "); scanf("%i", &ct.min);
	
	printf("\nTime: %i:%i", ct.hr, ct.min+1);
	
	return 0;
}