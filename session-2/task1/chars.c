
/*
 *  All char variables are also integers
 *  Some integers are also characters
 */

#include <stdio.h>

int main( void ) {
    char c = 'a';
    int k = 95;

    printf("Display char as char: %c\n",c, c);
    printf("Display char as int: %d\n",c, c);
    printf("Display int as int: %d\n",k, k);
    printf("Display int as char: %c\n",k, k);

    printf("Two values (c as char, c as int): %c %d\n", c, c);
    printf("Two values (k as int, k as char): %d %c\n", k, k);

    return 0;
}
