#include <stdio.h>
#include <stdlib.h>


typedef struct linkstack
{
    int data;
    struct linkstack *next;
} LinkStk;

LinkStk * InitStack();
int EmptyStack(LinkStk *stk);
int PopStack(LinkStk *stk);
void PushStack(LinkStk *stk, int i);
int GetTopStack(LinkStk *stk);

int main()
{
    int a, b;
    LinkStk *stk;
    stk = InitStack();
    a = EmptyStack(stk);
    printf("%d\n", a);
    scanf("%d",&b);
    PushStack(stk, b);
    b = GetTopStack(stk);
    printf("%d\n",b);
    PopStack(stk);
    PopStack(stk);
    a = EmptyStack(stk);
    printf("%d\n", a);
}

LinkStk * InitStack()
{
    LinkStk *stk = malloc(sizeof(LinkStk));
    return stk;
}

int EmptyStack(LinkStk *stk)
{
    if (stk->next != NULL)
    {
        return 1;    
    }
    return 0;
}

int PopStack(LinkStk *stk)
{
    if (stk->next != NULL)
    {
        LinkStk *temp = stk->next;
        stk->next = temp->next; 
        free(temp);
        return 1;
    }
    return 0;
}

void PushStack(LinkStk *stk, int i)
{
    LinkStk *temp = malloc(sizeof(LinkStk));
    temp->data = i;
    temp->next = stk->next;
    stk->next = temp;
}

int GetTopStack(LinkStk *stk)
{
    return stk->next->data;
}
