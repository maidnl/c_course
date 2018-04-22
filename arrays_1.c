#include <stdio.h>
 
/* program to show the use of arrays */
 
void main(void) {
    /* an array that contains 4 integer */
    int a[4];
    int b = 0;

    printf("len of array: %d\n",sizeof(a));

    /* print all the integers of the array */
    printf("\na[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n", a[0],a[1],a[2],a[3]);

    /* set the first integer in the array */
    a[0] = 4;

    /* set the second integer in the array */
    a[1] = 3;

    /* set the third integer in the array */
    a[2] = 2;
    
    /* set the fourth integer in the array */
    a[3] = 1;

    /* print all the integers of the array */
    printf("\na[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n", a[0],a[1],a[2],a[3]);

    printf("\nb = %d\n",b);
    /* assign the content of the second element of the array to b */
    b = a[2];
    printf("\nb = %d\n",b);
    
}