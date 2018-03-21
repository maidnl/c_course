#include <stdio.h>
 
void main(void) {
     
    char ch;
    
    ch = 'A';
    /* ch printed "as" char -> use %c in printf */
    printf("ch is %c (as char)\n", ch);
    /* ch printed "as" integer -> use %d in printf */
    printf("ch is %d (as integer)\n", ch);

    ch = 49;
    /* ch printed "as" char -> use %c in printf  */
    printf("ch is %c (as char)\n", ch);
    /* ch printed "as" integer -> use %d in printf */
    printf("ch is %d (as integer)\n", ch);
}