#include <stdio.h>
#include <stdlib.h>

const int maxlength = 10;

typedef struct 
{
    int data[maxlength];
    int front, rear;
} CycQue;

CycQue* InitQueue();
int EmptyQueue(CycQue *cq);
int EnQueue(CycQue *cq, int i);
int OutQueue(CycQue *cq);
int GetHead(CycQue *cq);
void PrintQueue(CycQue *cq);

int main()
{
    CycQue *cq = InitQueue();
    PrintQueue(cq);
    EnQueue(cq,1);
    EnQueue(cq,2);
    EnQueue(cq,3);
    PrintQueue(cq);
    OutQueue(cq);
    PrintQueue(cq);
    int a = GetHead(cq);
    printf("%d\n",a);
    OutQueue(cq);
    OutQueue(cq);
    OutQueue(cq);
    OutQueue(cq);
    OutQueue(cq);
    OutQueue(cq);
    a = EmptyQueue(cq);
    printf("%d\n",a);
}

void PrintQueue(CycQue *cq)
{
    int len = sizeof(cq->data)/sizeof(cq->data[0]);
    for (int i=0; i<len; i++)
    {
        printf("%d",cq->data[i]);
    }
    printf("\n");
}

CycQue* InitQueue()
{
    CycQue *cq = malloc(sizeof(CycQue));
    cq->front = 0;
    cq->rear = 0;
    return cq;
}

int EmptyQueue(CycQue *cq)
{
    if (cq->front == cq->rear)
    {
        return 1;
    }
    return 0;
}

int EnQueue(CycQue *cq, int i)
{
    if ((cq->rear + 1) % maxlength != cq->front)
    {
        cq->rear = (++cq->rear)%maxlength;
        cq->data[cq->rear] = i;
        return 1;
    }
    return 0;
}

int OutQueue(CycQue *cq)
{
    if (!EmptyQueue(cq))
    {
        cq->front = (++cq->front)%maxlength;
        return 1;
    }
    return 0;
}

int GetHead(CycQue *cq)
{
    return cq->data[cq->front+1];
}