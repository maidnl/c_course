#include <stdio.h>
 
/* program to demonstrate functions */

int global_a = 0;

/* declaration of the function */
int sum(int a, int b);

/* definition of the function */
int sum(int a, int b) {
    int c = a + b;
    
    global_a = global_a + 1;
    c = a + b;
    /* incremented the variable a */
    a = a + 1;

    printf("  (inside sum) - global_a = %d, a = %d\n", global_a, a);
    
    return c;
}
 
void main(void) {
    int a = 4;
    int d2 = 6;
    int result = 0;
    
    printf("\n  ---------- function use demonstration ---------- \n\n");

    printf("  (1) - value of a before the sum = %d\n", a);
    printf("  (1) - value of global_a before the sum = %d\n", global_a);
    result = sum(12,45);
    printf("  (1) - Result = %d\n", result);  
    printf("  (1) - value of a after the sum = %d\n", a);
    printf("  (1) - value of global_a after the sum = %d\n\n", global_a); 


    printf("  (2) - value of a before the sum = %d\n", a);
    printf("  (2) - value of global_a before the sum = %d\n", global_a);
    result = sum(a,d2);
    printf("  (2) - Result = %d\n", result);
    printf("  (2) - value of a after the sum = %d\n", a);
    printf("  (2) - value of global_a after the sum = %d\n\n", global_a);


    printf("  (3) - value of a before the sum = %d\n", a);
    printf("  (3) - value of global_a before the sum = %d\n", global_a);
    result = sum(global_a,d2);
    printf("  (3) - Result = %d\n", result);
    printf("  (3) - value of a after the sum = %d\n", a);
    printf("  (3) - value of global_a after the sum = %d\n\n", global_a);
    
      
}