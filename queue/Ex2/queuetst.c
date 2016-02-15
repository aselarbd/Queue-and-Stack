#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

/* queue testing program */

int main(){
	int i=0;
	struct queue * head = createQueue();
	for(i=0;i<10;i++){
		enqueue(i,head);
	}

	queueDisplay(head);

	printf("Peek right after fill : %d \n",queuePeek(head));

	for(i=0;i<3;i++){
		dequeue(head);
	}

	queueDisplay(head);

	printf("Peek right after dequeue 3 : %d \n",queuePeek(head));

	head = queueDestroy(head);

return 0;
}