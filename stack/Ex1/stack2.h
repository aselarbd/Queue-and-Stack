#include <stdlib.h>
#include <stdio.h>



int * stackCreate(){
	int * tmp = malloc(sizeof(int)*102);
	tmp[0]=2;
	tmp[1]= 101;
	return tmp;
}

int * stackDestroy(int * head){
	free(head);
	return NULL;
}

int stackPush(int data,int * head,int stack){
	if(stack == 0 && (head[0]<head[1])){
		head[head[0]]=data;
		head[0]++;
		return 0;
	}
	if(stack == 1 && (head[0]<head[1])){
		head[head[1]]=data;
		head[1]--;
		return 0;
	}	
	return -1;
}

int stackPop(int * head,int stack){
	if(stack==0 && head[0]>2){
		int val =head[head[0]-1];
		head[head[0]-1]=0;
		head[0]--;
		return val;
	}
	if(stack==1 && head[1]<101){
		int val = head[head[1]+1];
		head[head[1]+1]=0;
		head[1]++;
		return val;
	}
	return -1;
}

int stackPeek(int * head,int stack){
	if(stack ==0)
		return head[head[0]-1];
	if(stack ==1)
		return head[head[1]+1];
	return -1;
}

int StackIsEmpty(int * head,int stack){
	if(stack==0 && head[0]==2)
		return 1;
	if(stack==1 && head[1]==101)
		return 1;	
	return 0;
}

int StackIsFull(int * head,int stack){
	if(head[0]<head[1])
		return 1;
	return 0;
} 

int stackDispaly(int * head,int stack){
	int i;
	if(stack==0){
		for (i = 2; i < head[0];i++){
			printf("Elements : %d \n",head[i] );
		}
	}
	if(stack==1){
		for (i = 101; i > head[1];i--){
			printf("Elements : %d \n",head[i] );
		}
	}
}