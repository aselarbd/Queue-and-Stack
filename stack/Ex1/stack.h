#include <stdlib.h>
#include <stdio.h>



int * stackCreate(){
	int * tmp = malloc(sizeof(int)*1001);
	tmp[0]=1;
	return tmp;
}

int * stackDestroy(int * head){
	free(head);
	return NULL;
}

int stackPush(int data,int * head){
	if(head[0]<1001){
		head[head[0]]=data;
		head[0]++;
		return 0;
	}
	return -1;
}

int stackPop(int * head){
	if(head[0]>1){
		int val =head[head[0]-1];
		head[head[0]-1]=0;
		head[0]--;
		return val;
	}
	return -1;
}

int stackPeek(int * head){
	return head[head[0]-1];
}

int StackIsEmpty(int * head){
	if(head[0]==1)
		return 1;
	return 0;
}

int StackIsFull(int * head){
	if(head[0]==1001)
		return 1;
	return 0;
} 