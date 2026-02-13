
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    int **testIntPtrPtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("Int pointer to pointer size is %ld bytes\n",sizeof(testIntPtrPtr));

    return 0;
}
