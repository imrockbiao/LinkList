#include"func.h"


//print List
/*
    print tht LNode elem
*/
void printList(LinkList l)
{
    LinkList t = l;
    printf("the data:\n");
    for( ;t->next != NULL; t= t->next )
    {
        printf("%d ", t->next->elem);
    }

    printf("\nprint over\n");
}


//Head Insert
/*
    get the LNode elem by Head
*/
LinkList HeadInsert(LinkList l)
{
    LNode *s;
    ElemType x;

    l = (LinkList)malloc(sizeof(LNode));
    l->next = NULL;

    printf("insert the data:");
    scanf("%d", &(x));

    while (x!=END)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->elem = x;
        s->next = l->next;
        l->next = s;
        printf("insert the data:");
        scanf("%d", &(x));
    }
    return l;

}

//
//Tail Insert
LinkList TailInsert(LinkList l)
{
    ElemType x;
    LNode *s = NULL;
    LNode *r = l;
    l = (LinkList)malloc(sizeof(LNode));
    printf("Tail Insert, input your data:");
    scanf("%d", &x);
    while(x!=END)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->elem = x;
        r->next = s;
        r = s;
        printf("input the data:");
        scanf("%d", &x);
    }
    r->next = NULL;
    return l;
}

//Find elem Node
LNode* GetElem(LinkList l, ElemType x)
{
    /*
        当查询的元素属于链表， 返回节点， 若不在链表内， 返回NULL
    */
    if(l == NULL)
    {
        return NULL;
    }
    LNode *p = l->next;
    while (p && p->elem!=x)
    {
        p = p->next;
    }
    return p;
    
}


//Delete elem Node
LinkList DeletElem(LinkList l, ElemType x)
{
    if(l == NULL)
    {
        return NULL;
    }
    LNode *p = l->next;
    LNode *t = l;
    while (p && p->elem!=x)
    {
        p = p->next;
        t = t->next;
    }
    if(p!=NULL)
    {
        t->next = p->next;
        free(p);
    }
    return l;
}