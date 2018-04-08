#include <stdio.h>
 
/* program to show the use of ternary operator */
 
void main(void) {
    int a = 0;

    printf("Program to perform a division\n");

    printf("Enter the first number:> ");
    scanf("%d",&a);

    int c = 0;
    printf("Enter the second number:> ");
    scanf("%d",&c);

    (c != 0) ? printf("The result is %d\n", a / c) : printf("Error division by 0!\n");
    
}