#include <stdlib.h>
#include <stdio.h>

typedef struct linkqueuenode
{
    int data;
    struct linkqueuenode *next;
}LinkQueueNode;

typedef struct
{
    struct linkqueuenode *front, *rear;
}LQ;

LQ* InitLinkQueue();
int EmptyLinkQueue(LQ *lq);
void EnLinkQueue(LQ *lq, int i);
int OutLinkQueue(LQ *lq);
int GetHead(LQ *lq);

int main()
{
    LQ *lq = InitLinkQueue();
    printf("%d\n",EmptyLinkQueue(lq));
    EnLinkQueue(lq,1);
    EnLinkQueue(lq,2);
    EnLinkQueue(lq,3);
    printf("%d\n",GetHead(lq));
    OutLinkQueue(lq);
    printf("%d\n",GetHead(lq));
    OutLinkQueue(lq);
    printf("%d\n",GetHead(lq));
    OutLinkQueue(lq);
    printf("%d\n",GetHead(lq));
    OutLinkQueue(lq);
    printf("%d\n",GetHead(lq));
}

LQ* InitLinkQueue()
{
    LQ *lq = malloc(sizeof(LQ));
    LinkQueueNode *temp =  malloc(sizeof(LinkQueueNode));
    lq->front = temp;
    lq->rear = temp;
    lq->front->next = NULL;
    return lq;
}

int EmptyLinkQueue(LQ *lq)
{
    if ((lq->front == lq->rear) || (lq->front->next == NULL))
    {
        return 1;
    }
    return 0;
}

void EnLinkQueue(LQ *lq, int i)
{
    LinkQueueNode *temp =  malloc(sizeof(LinkQueueNode));
    temp->data = i;
    temp->next = NULL;
    lq->rear->next = temp;
    lq->rear = temp;
}

int OutLinkQueue(LQ *lq)
{
    if (!EmptyLinkQueue(lq))
    {
        LinkQueueNode *temp = lq->front->next;
        lq->front->next = temp->next;
        if (temp->next == NULL)
        {
            lq->rear = lq->front;
        }
        free(temp);
        return 1;
    }
    return 0;
}

int GetHead(LQ *lq)
{
    if (!EmptyLinkQueue(lq))
    {
        return lq->front->next->data;
    }
    return -1;
}


