#ifndef _LINKNODE_H
#define _LINKNODE_H

//elem type
typedef int ElemType;

/*
    LinkNode struct
*/
typedef struct LinkNode
{
    ElemType elem; //data
    struct LinkNode *next; //next ptr
}*LinkList, LNode;


#endif