#include <stdio.h>
 
int sum(int a, int b);

int sum(int a, int b) {
    return a + b;
}
 
void main(void) {
     
    int c;

    printf("Hello World!\n");
    printf("This is my first complete C program!\n");

    c = sum(5,3);
    printf("The sum of 3 and 5 is: %d\n",c);
}