#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int main(){
	int * head = NULL;
	head= stackCreate();

	int i;
	
	//Test StackIsEmpty()
		printf("Check : StackIsEmpty -> 0 - Not Empty, 1 - Empty :: %d\n",StackIsEmpty(head));
		printf("Check : StackIsFul -> 0 - Not Full, 1 - Full :: %d\n",StackIsFull(head));
		//Test pop when start
		printf("Check : pop return value :: %d\n",stackPop(head));

		for (i = 0; i <1000; ++i)
		{
			int k = stackPush(i,head);
		}
		//Test peak
		printf("Check : peak :: %d\n",stackPeek(head));
		//Test push
		int k = stackPush(i,head);
		printf("Check : array exeed push return value :: %d\n",stackPush(i,head));
		//Test Pop
		printf("Check : pop value :: %d\n",stackPop(head));

		printf("Check : peak after pop :: %d\n",stackPeek(head));
	
	//Test StackIsFul()
	printf("Check : StackIsEmpty -> 0 - Not Empty, 1 - Empty :: %d\n",StackIsEmpty(head));
	printf("Check : StackIsFul -> 0 - Not Full, 1 - Full :: %d\n",StackIsFull(head));

	head = stackDestroy(head);
	printf("head : %d\n",head );

	return 0;
}