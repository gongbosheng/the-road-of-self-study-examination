#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 200


typedef struct seqstack
{
    int data[MAXLENGTH];
    int top;
} SeqStk;


int InitStack(SeqStk *stk);
int EmptyStack(SeqStk *stk);
int PushStack(SeqStk *stk, int i);
int PopStack(SeqStk *stk);
int GetTopStack(SeqStk *stk);

int main()
{
    int a, r;
    SeqStk *stk = malloc(sizeof(SeqStk)); 
    InitStack(stk);
    while ( a != -1)
    {
        scanf("%d",&a);
        // r = EmptyStack(stk);

        PushStack(stk,a);
        // printf("+%d+",a);
        r = GetTopStack(stk);
        printf("%d\n", r);
        printf("      %d\n", stk->top);
    }

    PopStack(stk);
    PopStack(stk);
    r = GetTopStack(stk);
    printf("%d\n", r);
    printf("      %d\n", stk->top);
    return 0;
}

int GetTopStack(SeqStk *stk)
{
    if (stk->top != 0)
    {
        return stk->data[stk->top];
    }
    return -1;
}

int InitStack(SeqStk *stk)
{
    stk->top = 0;
    return 1;
}

int EmptyStack(SeqStk *stk)
{
    if (stk->top == 0)
    {
        return 1;
    }
    return 0;
}

int PushStack(SeqStk *stk, int i)
{
    if ((stk->top + 1) != MAXLENGTH)
    {
        stk->top++;
        stk->data[stk->top] = i;
        return 1;
    }
    else
    {
        return 0;
    }
}

int PopStack(SeqStk *stk)
{
    if (stk->top != 0)
    {
        stk->top--;
        return 1;
    }
    else
    {
        return 0;
    }
}

