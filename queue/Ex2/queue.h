#include <stdlib.h>
#include <stdio.h>

struct queue
{
	int data;
	struct queue * next;
};

struct queue * createQueue(){
	struct queue * tmp = malloc(sizeof(struct queue));
	tmp -> data = 0;
	tmp -> next =NULL;
	return tmp;
}

int enqueue(int data, struct queue * head){
	struct queue * tmp = malloc(sizeof(struct queue));
	if(!tmp)
		return -1;
	tmp -> data = data;
	head-> data += 1;
	tmp-> next = head-> next;
	head-> next = tmp;
	return 0;
}

int dequeue(struct queue * head){
	if(head->next == NULL)
		return -1;
	head-> data -=1;
	struct queue * curr;
	int tmp;
	while(head->next){
		curr = head;
		head = head -> next;
	}
	curr -> next = NULL;
	tmp = head -> data;
	free(head);
	return tmp;
}

int queuePeek(struct queue * head){
	if(head->next == NULL)
		return -1;
	while(head->next){
		head = head -> next;
	}
	return head-> data;	
}

int queueIsEmpty(struct queue * head){
	if(head->next == NULL)
		return 1;
	else
		return 0;
}

struct queue * queueDestroy(struct queue * head){
	struct queue * curr;
	while(head->next){		
		curr = head;
		head = head -> next;
		free(curr);
	}
	free(head);
	return NULL;
}

int queueDisplay(struct queue * head){
	printf("No of elements in queue : %d\n",head->data );
	if(head->next != NULL){
		head = head-> next;
		while(head->next){
			printf("Element : %d \n",head->data );
			head = head -> next;
		}
		printf("Element : %d \n",head->data );		
	}
	return 0;
}

