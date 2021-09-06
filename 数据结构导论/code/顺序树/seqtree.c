#include <stdio.h>
#include <stdlib.h>
#include <../链接队列/linkqueue.c>

typedef struct seqtree
{
    int data;
    struct  seqtree *lchild, *rchild;
} *Bintree;


int main()
{
    
}

int levelOrder(Bintree bt)
{
    int p;
    LQ *lq = InitLinkQueue();
    if (bt != NULL)
    {
        EnLinkQueue(lq, bt);
    }
    if (!EmptyLinkQueue)
    {
        p = GetHead(lq);
        OutLinkQueue(lq);
        printf("%d",p);
        
    }
    
}



