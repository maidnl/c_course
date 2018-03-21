#include <stdio.h>

/* 
 * program to demonstrate the overflow concept
 */ 

void main(void) {
    
    unsigned int i = 4294967295;

    /* use %u to print unsigned int */
    printf("before %u\n", i);

    i = i + 1;
    /* use %u to print unsigned int */
    printf("after %d\n", i);  
}