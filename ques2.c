#include<stdio.h>
#include<stdlib.h>

typedef struct node_t Node_t;
typedef struct node_t *Node;

struct node_t{
	int  data;
	Node next;
};

Node newNode(int data, Node next){
	Node node = (Node) calloc(1,sizeof(Node_t));
	node->data = data;
	node->next =next;
	return node;
}

void addatbegin(Node *pList, int data){
	*pList= newNode(data,*pList);
}

void addlast(Node *pList, int data){
	if(*pList== NULL){
		addatbegin(pList,data);
		return;
	}
	Node node= *pList;
	while(node->next) node=node->next;
	node->next = newNode(data, NULL);
}

int removebegin(Node *pList){
	if(*pList==NULL){
		printf("Failed to remove from empty list.\n");
		return 0;
	}
	int data=(*pList)->data;
	*pList=(*pList)->next;
	
	return data;
}

int removelast(Node *pList){
	if(*pList==NULL || (*pList)->next == NULL) return removebegin(pList);
	Node node = *pList;
	while(node->next->data) node=node->next;
	int data = node->next->data;
	free(node->next);
	return data;
}

void printlist(Node list){
	while(list){
		printf("%d ->",list->data);
		list=list->data;
	}
	printf("NULL\n");
}


int main()
{
	Node list =NULL;
	addatbegin(&list, 1);
	printlist(list);
	addatbegin(&list, 2);
	printlist(list);
	addatbegin(&list, 3);
	printlist(list);
	addlast(&list,4);
	printlist(list);
	int n=removebegin(&list);
	printlist(list);
	return 0;
}