#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack.h"
/* get input by user and reverse it by using stack */
int main(){
	int * head = NULL;
	char str [100] ;
	char rev [100]; 
	int i;

	head = stackCreate();

	scanf("%s",str);	

	for (i = 0; i < strlen(str);i++)
		stackPush(str[i],head);
	
	for (i = 0; i < strlen(str);i++)
		rev[i]=stackPop(head);
	
	rev[strlen(str)]= '\0';

	printf("Reverse string is : %s\n",rev );

	
	

	return 0;
}