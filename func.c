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
    int x;

    l = (LinkList)malloc(sizeof(LNode));
    l->next = NULL;

    printf("insert the data:");
    scanf("%d", &(x));

    while (x!=5678)
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