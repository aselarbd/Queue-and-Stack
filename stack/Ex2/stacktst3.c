#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
	struct stack * head = stackCreate();
	int i=0;

	for (i = 0; i < 10; i++)
	{
		stackPush(i,head);
	}

	stackDisplay(head);

	head = stackReverseIter(head);

	stackDisplay(head);

	return 0;
}

