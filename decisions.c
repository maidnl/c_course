#include <stdio.h>
 
/* program to show the use of the if, then, else statement */
 
void main(void) {
    int a = 0;

    printf("Enter a number (between 0 and 4):> ");
    scanf("%d",&a);

    printf("You entered the number: %d\n", a);

    if(a < 0) {
    	printf("Error: the number is lower than 0\n");
    	return;
    }
    
    if(a > 4) {
    	printf("Error: the number is higher than 4\n");
    	return;
    }

    if(a <= 1) {
    	printf("The number is lower or equal than 1\n");
    }
    else if(a >= 3) {
    	printf("The number is higher or equal to 3\n");
    }
    else {
    	printf("The number is 2\n");
    }

    if(a == 4) {
    	printf("The number is equal to 4\n");
    }

    if(a > 1) {
    	if(a < 3) {
    		printf("The number is equal to 2\n");
    	}
    	else {
    		printf("The number is greater than 3\n");
    	}
    }
}