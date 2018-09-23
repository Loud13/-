#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib.h>
typedef int Elemtype;
typedef struct LNode{
	Elemtype data;
	struct LNode *next;
}LNode,*listlink;
int initlist(listlink*head){
	//给头节点分配内存
	*head=(LNode*)malloc(sizeof(LNode));
	if(*head==0){
		return -1;
	} 
	(*head)->next=NULL;
	return 0;
}
int search(LNode*head,Elemtype e){
	LNode*p=head->next;
	int i=1;
	while(p!=NULL){
		if(p->data==e){
			break;
		}
		p=p->next;
		i++;
	}
	return i;
}
int creatH(LNode*head){
	int i,num;
	Elemtype e;
	LNode *p;
	printf("请输入数据的长度：");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		printf("请输入第%d个数据:",i);
		scanf("%d",&e);
		p=(LNode*)malloc(sizeof(LNode));
		if(p==NULL){
			return -1; 
		} 
		p->data=e;
		p->next=head->next;
		head->next=p;
	} 
	return 0;
}
int Empty(LNode*head){
	if(head->next==NULL){
		return 1;
	}
	return 0; 
}
int show(LNode*head){
	if(Empty(head)){
		return -1; 
	} 
	int i=1;
	LNode*p=head->next;
	while(p!=NULL){
		printf("第%d个数据为%d。\n",i,p->data);
		p=p->next;
		i++;
	}
	return 0;
}
int deletelist(LNode*head,int num){
	int i=0;
	LNode*p=head,*q;
	while(p!=NULL)
	{
		if((i+1)==num){
			q=p->next;
			p->next=q->next;
			free(q);
			break;
		}
		i++;
		p=p->next;
	}
	return 0;
}
void destroy(listlink*head){
	LNode *p=(*head)->next,*q=NULL;
	while(p!=NULL)
	{
		q=p;
		p=p->next;
		free(q);
	 } 
	 free(*head);
	*head=NULL;
} 
int length(LNode*head){
	int i=0;
	LNode*p=head->next;
	while(p!=NULL){
		i++;
		p=p->next;
	}
	return i;
}
int insert(LNode*head,Elemtype e,int num){
	if(num>0&&num<length(head)){
		LNode*p=head,*q;
	int i=1;
	while(p!=NULL){
		if(i==num){
			LNode*tem=(LNode*)malloc(sizeof(LNode));
			tem->data=e;
			q=p->next;
			p->next=tem;
			tem->next=q;
			break;
		}
		i++;
		p=p->next;
		}
		return 0;
	}
	else{
		return -1;//插入失败 
	}
}
#endif 
