#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
/*
* Queue data stracture by circular array testing function program 
*
*/
int main(){
	int i=0;
	int * head = queueCreate();

	printf("first Is empty : %d \n",queueIsEmpty(head) );
	printf("first Is full : %d \n",queueIsFull(head));

	for(i=0;i<100;i++){
		enqueue(i,head);
	}


	printf("Peek right after fill : %d \n",queuePeek(head));

	for(i=0;i<3;i++){
		dequeue(head);
	}

	enqueue(20,head);
	enqueue(30,head);
	enqueue(40,head);
	printf("end Is empty : %d \n",queueIsEmpty(head) );
	printf("end Is full : %d \n",queueIsFull(head));

	printf("Peek right after dequeue 3 : %d \n",queuePeek(head));

	head = queueDestroy(head);

return 0;
}