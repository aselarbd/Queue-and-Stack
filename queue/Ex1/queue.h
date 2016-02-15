#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
/*
* Queue data stracture by circular array. front and rear are tracking by aditional 2 elements in array. 
*
*/
/* Create queue and return pointer of queue */
int * queueCreate(){
	int * tmp = malloc(sizeof(int)*(SIZE+2));
	if(!tmp)
		return NULL;	
	tmp[SIZE]=0;
	tmp[SIZE+1]=0;
	return tmp;
}
/* free memory of queue and return null pointer */
int * queueDestroy(int * head){
	free(head);
	return NULL;
}
/* add element to queue */
int enqueue(int data,int * head){
	if((0<=(head[SIZE+1]-head[SIZE]))&&((head[SIZE+1]-head[SIZE])<SIZE)){
		head[head[SIZE+1]%SIZE]=data;
		head[SIZE+1]++;
		return 0;
	}
	return -1;
}
/* remove elements from queue */
int dequeue(int * head){
	if(head[SIZE]!=head[SIZE+1]){
		int val = head[SIZE];
		head[head[SIZE]%SIZE]=0;
		head[SIZE]++;
		return val;
	}
	return -1;
}
/* get peek elemet in queue */
int queuePeek(int * head){
	if(head[SIZE]!=head[SIZE+1]){
		return head[SIZE];
	}
	return -1;
}
/* check queue is empty */
int queueIsEmpty(int * head){
	if(head[SIZE]== head[SIZE+1])
		return 1;
	return 0;
}
/* check queue is full */
int queueIsFull(int * head){
	if(head[SIZE+1]-head[SIZE]>=SIZE)
		return 1;
	return 0;
}