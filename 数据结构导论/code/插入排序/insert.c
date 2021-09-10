#include <stdio.h>
#include <stdlib.h>

const int maxlength = 20;

typedef struct
{
    int key;
    int data;
} Record;

typedef Record list[maxlength];

void InitRecord(list array);

int main()
{
    list array;
    InitRecord(array);

}

void InitRecord(list array)
{
    int a,key = 1;
    while (a != -1)
    {
        scanf("%d",&a);
        array[key].data = key;
        array[key].key = a;
        key++;
    }
}

