#include <stdio.h>
  
void main(void) {

   int a = 0;
   int b = 5;

   printf("(1) a contains the value %d\n", a);
   printf("(2) b contains the value %d\n", b);

   a = 45; /* the value 45 is assigned to a */
   printf("(3) a contains the value %d\n", a);
   printf("(4) b contains the value %d\n", b);

   a = b;
   printf("(5) a contains the value %d\n", a);
   printf("(6) b contains the value %d\n", b);

}

