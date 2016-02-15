#include <stdlib.h>
#include <stdio.h>
#define SIZE 1000
/* stack by array head is keep tracking at 1 st elemt in array */

/* define stack and allocating memeor */
int * stackCreate(){
	int * tmp = malloc(sizeof(int)*SIZE+1);
	tmp[0]=1;
	return tmp;
}
/* Desttroy stack  and free memory */
int * stackDestroy(int * head){
	free(head);
	return NULL;
}
/* put elemts to stack  */
int stackPush(int data,int * head){
	if(head[0]<(SIZE+1)){
		head[head[0]]=data;
		head[0]++;
		return 0;
	}
	return -1;
}
/* getting elements out by stack */
int stackPop(int * head){
	if(head[0]>1){
		int val =head[head[0]-1];
		head[head[0]-1]=0;
		head[0]--;
		return val;
	}
	return -1;
}
/* getting stack peek elemet */
int stackPeek(int * head){
	return head[head[0]-1];
}
/* checking stack is empty */
int StackIsEmpty(int * head){
	if(head[0]==1)
		return 1;
	return 0;
}
/* checking stack is full */
int StackIsFull(int * head){
	if(head[0]==(SIZE+1))
		return 1;
	return 0;
} 