#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* check funtionality of stack implementation using linklist */
int main(){
	struct stack * head = stackCreate();
	int i=0;

	for (i = 0; i < 10; i++)
	{
		stackPush(i,head);
	}

	stackDisplay(head);

	printf("peak : %d\n", stackPeek(head) );

	printf("pop   : %d \n", stackPop(head) );

	printf("peak aftrer pop : %d\n", stackPeek(head) );

	head=stackDestroy(head);

	printf("after distroy head : %p\n",head );

	return 0;
}

