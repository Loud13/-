#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main()
{
	LNode*head;
	initlist(&head);
	creatH(head);
	show(head);
	int i;
	Elemtype e;
	printf("请输入删除位置：");
	scanf("%d",&i);
	deletelist(head,i);
	show(head);
	printf("请输入查找的数据：");
	scanf("%d",&e);
	printf("查找的数据为第%d的数据。\n",search(head,e));
	printf("请输入插入的数据：");
	scanf("%d",&e);
	printf("请输入插入的位置：");
	scanf("%d",&i);
	insert(head,e,i);
	show(head);
	printf("当前单链表的长度为%d。\n",length(head));
	destroy(&head);
	return 0;
}

