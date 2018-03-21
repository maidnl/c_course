#include <stdio.h>
 
/* program to show the use of the sizeof() function*/
 
void main(void) {
     
    char c;
    unsigned char uc;
    signed char sc;

    int i;
    unsigned int ui;
    signed int si;

    short int shi;
    long int li;

    float f;
    double d;

    long long ll;

    printf("The size of a char is %d bytes\n", sizeof(c));
    printf("The size of an unsigned char is %d bytes\n", sizeof(uc));
    printf("The size of a signed char is %d bytes\n", sizeof(sc));

    printf("The size of an int is %d bytes\n", sizeof(i));
    printf("The size of a short int is %d bytes\n", sizeof(shi));
    printf("The size of a long int is %d bytes\n", sizeof(li));

    printf("The size of a float is %d bytes\n", sizeof(f));
    printf("The size of a double is %d bytes\n", sizeof(d));

    printf("The size of a long long is %d bytes\n", sizeof(ll));
}