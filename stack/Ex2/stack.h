#include <stdlib.h>
#include <stdio.h>
/* define stack data stracture by using link list */
struct stack
{
	int data;
	struct stack * next;
};
/* define stack and allocating memeor */
struct stack * stackCreate(){
	struct stack * tmp = malloc(sizeof(struct stack));
	tmp -> data = 0;
	tmp -> next =NULL;
	return tmp;
}
/* Desttroy stack  and free memory */
struct stack * stackDestroy(struct stack * head){
	struct stack * curr;
	while(head->next){		
		curr = head;
		head = head -> next;
		free(curr);
	}
	free(head);
	return NULL;
}
/* put elemts to stack  */
int stackPush(int data, struct stack * head){
	struct stack * tmp = malloc(sizeof(struct stack));
	if(!tmp)
		return -1;
	tmp -> data = data;
	head-> data += 1;
	tmp-> next = head-> next;
	head-> next = tmp;
	return 0;
}
/* getting elements out by stack */
int stackPop(struct stack * head){
	if(head-> data == 0)
		return -1;
	else{
		int val;
		struct stack * tmp = head-> next;
		struct stack * tmp1 = tmp-> next;
		val = tmp -> data;
		head-> data -= 1;
		head-> next = tmp1;
		free(tmp);
		return val;
	}
}
/* getting stack peek elemet */
int stackPeek(struct stack * head){
	if(head-> data == 0)
		return -1;
	else{
		head = head -> next;
		return head -> data;
	}
}
/* checking stack is empty */
int StackIsEmpty(struct stack * head){
	if(head -> data ==0) 
		return 1;
	return 0;
}

int stackDisplay(struct stack * head){
	printf("No of elements in stack : %d\n",head->data );
	if(head->next != NULL){
		head = head-> next;
		while(head->next){
			printf("Element : %d \n",head->data );
			head = head -> next;
		}
		printf("Element : %d \n",head->data );
		return 0;		
	}
	return 1;
}
/* reverse stack by recursion */
struct stack * stackReverseRec(struct stack * head){
	ReverseRec(head->next,&head);
	return head;
}
/* reverse linklist by recursion */
int ReverseRec(struct stack * tmp,struct stack ** head){

	if(tmp-> next == NULL){
		//printf("add in rev : %d\n",(*head)-> next );
		(*head) -> next = tmp;
		//printf("add aftr rev : %d\n",(*head)-> next );
		return ;
	} 

	ReverseRec(tmp ->next, head );
	struct stack * tmp1 = tmp -> next;
	tmp1 -> next = tmp;
	tmp-> next = NULL;
}
/* reverse linklist by recursion */
int ReverseIter(struct stack * tmp,struct stack ** head){
	struct stack * curr,* prev , * next;

	curr = tmp;
	prev = NULL;


	while(curr != NULL){
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	} 
	(*head)->next = prev;
}
/* reverse stack by iteration */
struct stack * stackReverseIter (struct stack * head){
	ReverseIter (head->next,&head);
	return head;
}
