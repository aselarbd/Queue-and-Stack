#include <stdlib.h>
#include <stdio.h>
/* define queue data stracture. in here 1 st node keeping track of evevry node details and using that deal with other elemets */
struct queue
{
	int data;
	struct queue * next;
};
/* create queue data stracture */
struct queue * createQueue(){
	struct queue * tmp = malloc(sizeof(struct queue));
	tmp -> data = 0;
	tmp -> next =NULL;
	return tmp;
}
/* enter elemnts to queue by adding elemnt as 2 nd node */
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
/* remove element from queue by removing node from tail */
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
/* return queue peek return tale node */
int queuePeek(struct queue * head){
	if(head->next == NULL)
		return -1;
	while(head->next){
		head = head -> next;
	}
	return head-> data;	
}
/* check queue is empty  */
int queueIsEmpty(struct queue * head){
	if(head->next == NULL)
		return 1;
	else
		return 0;
}
/* distroy queue and free memory  */
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
/* display queue */
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

