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
	printf("������ɾ��λ�ã�");
	scanf("%d",&i);
	deletelist(head,i);
	show(head);
	printf("��������ҵ����ݣ�");
	scanf("%d",&e);
	printf("���ҵ�����Ϊ��%d�����ݡ�\n",search(head,e));
	printf("�������������ݣ�");
	scanf("%d",&e);
	printf("����������λ�ã�");
	scanf("%d",&i);
	insert(head,e,i);
	show(head);
	printf("��ǰ������ĳ���Ϊ%d��\n",length(head));
	destroy(&head);
	return 0;
}

