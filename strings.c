#include <stdio.h>
#include <string.h>

/* program to demonstrate some string functions */

void main(void) {

    char ch[] = {'a','b','c','d','e','f','g','h','i','j','\0'};
    char ch_1[] = "That is a string of text";
    char str[256];
    char str2[25];
    /* this is a pointer (for the moment just use it!) */
    char *look_for;

    /* the elements of the strings */
    printf("elements of ch: %lu\n", sizeof(ch)/sizeof(char));
    printf("elements of ch_1: %lu\n", sizeof(ch_1)/sizeof(char));
    printf("elements of str: %lu\n", sizeof(str)/sizeof(char));
    printf("elements of str2: %lu\n", sizeof(str2)/sizeof(char));

    /* the content of the string */
    printf("%s\n",ch);
    printf("%s\n",ch_1);
    printf("str: %s\n",str);   /* very bad! printing unitialized string */
    printf("str2: %s\n",str2); /* very bad! printing unitialized string */

    /* memset the string to 0 */
    memset(str,'\0',sizeof(str));
    memset(str2,0,sizeof(str2));

    /* printing the strings */
    printf("str: %s\n",str);
    printf("str2: %s\n",str2);

    /* writing something on the strings*/
    sprintf(str,"the size of str (in bytes) is %lu",sizeof(str));
    snprintf(str2, sizeof(str2), " that is all folks! but this exceed the dimension of the string!");

    /* printing the strings */
    printf("str: %s\n",str);
    printf("str2: %s\n",str2);

    /* print the length of the text contained into the string */
    printf("length of str %lu\n",strlen(str));
    printf("length of str2: %lu\n", strlen(str2));
 
    snprintf(str2, sizeof(str2), " that is all folks!");
    /* concatenating 2 strings */
    strcat(str,str2);
    strncat(str2," only the first 5 characters will be appended",5);

    /* printing the strings */
    printf("str: %s\n",str);
    printf("str2: %s\n",str2);

    /* print the length of the text contained into the string */
    printf("length of str %lu\n",strlen(str));
    printf("length of str2: %lu\n", strlen(str2));

    look_for = strstr(str," that is all folks!");
    if(look_for != NULL) {
        printf("The \"%s\" string is present into the string \"%s\"\n", str2, str);
        printf("loo_for is a string: %s\n", look_for);
    }

    look_for = strstr(str,"NOT present");
    if(look_for != NULL) {
        /* that code will not be executed because look_for is null */
        printf("The \"%s\" string is present into the string \"%s\"\n", str2, str);
        printf("loo_for is a string: %s\n", look_for);
    }
    else {
        printf("String not found\n");
        /* you cannot print look_for here!!!!!!*/
    }

}
