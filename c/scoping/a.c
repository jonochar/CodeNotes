#include <stdio.h>
// Never include b.c, b.h if you must. If you include, you will drop all the contents of b.c here 

int main()
{
    extern char B_VAR[];
    printf("%s", B_VAR);
    return 0;
}