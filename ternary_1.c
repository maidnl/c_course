#include <stdio.h>
 
/* program to show the use of ternary operator */
 
void main(void) {
    int a = 0;

    printf("Enter a number (positive or negative):> ");
    scanf("%d",&a);

    int b = (a < 0) ? -a : a;

    printf("Value of b: %d\n",b);

    /* the following is equivalent to the previous 
       ternary operator */

    int c = 0;
    if(a < 0)  {
        c = -a;
    }
    else {
        c = a;
    }
    printf("Value of b: %d\n",b);
    
}