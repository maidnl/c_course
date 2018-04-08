#include <stdio.h>
 
/* program to show the use of switch / case */
 
void main(void) {
    int a = 0;

    printf("Enter an integer number between 0 and 10:> ");
    scanf("%d",&a);

    /* switch case WITH break  that stops the falling through 
       behaviour */
    printf("\nWith break\n");
    switch(a) {
        case 0:
            printf("The entered value is 0\n");
        break;

        case 1:
            printf("The entered value is 1\n");
        break;

        case 2:
            printf("The entered value is 2\n");
        break;
        
        case 3:
            printf("The entered value is 3\n");
        break;

        case 4:
            printf("The entered value is 4\n");
        break;

        case 5:
            printf("The entered value is 5\n");
        break;

        case 6:
            printf("The entered value is 6\n");
        break;

        case 7:
            printf("The entered value is 7\n");
        break;

        case 8:
            printf("The entered value is 8\n");
        break;
        
        case 9:
            printf("The entered value is 9\n");
        break;
        
        case 10:
            printf("The entered value is 10\n");
        break;

        default:
            printf("Error in entered value\n");
        break;
    }

    /* switch case WITHOUT break  that stops the falling through 
       behaviour */
    printf("\nWithot break\n");
    switch(a) {
        case 0:
            printf("The entered value is 0\n");

        case 1:
            printf("The entered value is 1\n");
        
        case 2:
            printf("The entered value is 2\n");
        
        case 3:
            printf("The entered value is 3\n");
        
        case 4:
            printf("The entered value is 4\n");
        
        case 5:
            printf("The entered value is 5\n");
        
        case 6:
            printf("The entered value is 6\n");
        
        case 7:
            printf("The entered value is 7\n");
        
        case 8:
            printf("The entered value is 8\n");
        
        case 9:
            printf("The entered value is 9\n");
        
        case 10:
            printf("The entered value is 10\n");
        
        default:
            printf("Error in entered value\n");
        
    }
    printf("\nEnd of the program\n");
}