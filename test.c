#include"test.h"


//头插测试
void test01()
{
    printf("头插测试\n");
    LinkList l;
    l = HeadInsert(l);
    printList(l);
}

//尾插测试
void test02()
{
    printf("尾插测试");
    printf("头插测试\n");
    LinkList l;
    l = TailInsert(l);
    printList(l);
}