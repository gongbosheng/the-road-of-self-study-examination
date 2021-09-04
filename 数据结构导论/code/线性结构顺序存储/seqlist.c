#include <stdio.h>
#include <stdlib.h>

const int maxlength = 200;

typedef struct
{
    int data[maxlength];
    int length;
} LIST;

void main()
{
    int addArray(int x[maxlength], int len);
    int insertArray(int x[maxlength], int len, int i);
    int deleteArray(int x[maxlength], int len, int i);
    int indexArray(int x[maxlength], int len, int n);
    void printArray(int x[maxlength], int len);


    int i;
    LIST L;
    L.length = 0;
    L.length = addArray(L.data,L.length);
    
    printArray(L.data,L.length);

    while (i != -1)
    {
        scanf("%d", &i);
        // L.length = insertArray(L.data, L.length, i);
        // L.length = deleteArray(L.data, L.length, i);
        // printArray(L.data,L.length);
        int n = indexArray(L.data, L.length, i);
        printf("%d\n",n);
    }
}

int indexArray(int L[maxlength], int len, int n)
{
    int x;
    for (x=0; x< len; x++)
    {
        if ( L[x] == n)
        {
            return x;
        }
    }
    return 0;
}

int deleteArray(int L[maxlength], int len, int i)
{
    int x;
    if (i < 1 || i > len) exit(3);
    for (x=i; x <= len; x++ )
    {
        L[x-1] = L[x];
    } 
    len--;
    return len;
}


int insertArray(int L[maxlength], int len, int i)
{
    int x;
    if (len == maxlength) exit(1);
    if (i < 1 || i > (len + 1)) exit(2);
    for (x = len; i <= x; x--)
    {
        L[x] = L[x-1];
    }
    L[i-1] = 0;
    len++;
    return len;
}

int addArray(int x[maxlength],int len)
{
    int i;
    for (i=0;i<=10;i++)
    {
        x[i] = i + 1;
        len++;
    }
    return len;
}

void printArray(int x[maxlength],int len)
{
    int i;
    for (i=0;i<len;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
}
