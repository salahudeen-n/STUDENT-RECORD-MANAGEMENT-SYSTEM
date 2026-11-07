#include"header.h"

void printNode(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No data found\n");
		return;
	}
	printf("****************\nRollno   name   percentage\n");
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
}


