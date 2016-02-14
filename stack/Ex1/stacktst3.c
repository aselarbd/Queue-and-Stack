#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack2.h"

int main(){
	int * head = NULL;
	int i;

	head = stackCreate();

	

	for (i = 0; i < 100;i++)
		if(i%2==0)
			stackPush(i,head,0);
		else
			stackPush(i,head,1);
	printf("************* stack 1 ************* \n");
	stackDispaly(head,0);
	printf("************* stack 2 ************* \n");
	stackDispaly(head,1);

	return 0;
}