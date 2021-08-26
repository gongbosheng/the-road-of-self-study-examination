#include <stdio.h>

void main()
{   
    int f = 8;
    int *a = &f , *b = &f, *c = &f, d;
    int *array[] = {a, b, c, &d};
    printf("%d\n", *array[0]);
}