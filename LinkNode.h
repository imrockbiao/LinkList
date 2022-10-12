#ifndef _LINKNODE_H
#define _LINKNODE_H

typedef struct LinkNode
{
    int elem; //data
    struct LinkNode *next; //next ptr
}*LinkList, LNode;

#endif