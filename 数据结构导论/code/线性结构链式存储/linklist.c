#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node *next;
} Node, *LinkList;

void main()
{
    LinkList InitiateLinkList();
    int LengthLinkList(LinkList head);
    LinkList GetLinkList(LinkList head, int i);
    int LocateLinkList(LinkList head, int n);
    int InsertLinkList(LinkList head, int i, int n);
    void PrintLinkList(LinkList head);
    int DeleteLinkList(LinkList head, int i);

    LinkList head = InitiateLinkList();

    int i, n, r1, r2, r3, r4;
    while (n != -1)
    {
        scanf("%d%*1c%d",&i,&n);
        InsertLinkList(head,i,n);
        r1 = LengthLinkList(head);
        r2 = LocateLinkList(head, 5);
        r3 = GetLinkList(head,1)->data;
        printf("长度：%d\n",r1);
        printf("5的位置：%d\n",r2);
        printf("第1个的值：%d\n",r3);
        PrintLinkList(head);
    }
    r4 = DeleteLinkList(head,2);
    PrintLinkList(head);

}

void PrintLinkList(LinkList head)
{
    LinkList p = head->next;
    printf("数组：");
    while (p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}


LinkList InitiateLinkList()
{
    LinkList head;
    head = malloc(sizeof(Node));
    head->next = NULL;
    return head; 
}

int LengthLinkList(LinkList head)
{
    int count = 0;
    LinkList p = head;
    while(p->next != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

LinkList GetLinkList(LinkList head, int i)
{
    int count = 0;
    LinkList p = head;
    while ((count !=  i) && p->next != NULL) 
    {
        p = p->next;
        count++;
    }
    if (count == i)
    {
        return p;
    }
    else
    {
        return NULL;
    }
}

int LocateLinkList(LinkList head, int n)
{
    int count = 0;
    LinkList p = head->next;
    while ((p->next != NULL) && (p->data != n))
    {
        p = p->next;
        count++;
    }

    if (p->data == n)
    {
        return count + 1; // 返回第几个而非下标
    }
    else
    {
        return 0;
    }
}

int InsertLinkList(LinkList head, int i, int n)
{
    LinkList GetLinkList(LinkList head, int i);
    LinkList p, new;
    p = GetLinkList(head,i-1); // 找到要插入的位置之前的结点

    if (p != NULL)
    {
        new = malloc(sizeof(Node));
        new->data = n;
        new->next = p->next;
        p->next = new;
        return 1;
    } 
    else
    {
        return 0;
    }
}

int DeleteLinkList(LinkList head, int i)
{
    LinkList GetLinkList(LinkList head, int i);
    LinkList p = GetLinkList(head,i-1);
    if (p != NULL)
    {
        LinkList temp = p->next;
        p->next = temp->next;
        free(temp);
        return 1;
    }
    return 0;
}