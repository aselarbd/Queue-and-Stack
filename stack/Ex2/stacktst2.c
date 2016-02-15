#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* tesing program to revrse by recersion  */
int main(){
	struct stack * head = stackCreate();
	int i=0;

	for (i = 0; i < 10; i++)
	{
		stackPush(i,head);
	}

	stackDisplay(head);

	head = stackReverseRec(head);

	stackDisplay(head);
	
	return 0;
}

