#include"header.h"

void addNode(SLL **ptr)
{
	SLL *new,*t=*ptr;
	new=malloc(sizeof(SLL));
a:
	printf("Enter the name & percentage\n");
	scanf("%s%f",new->name,&new->percentage);

	if((new->percentage<0)||(new->percentage>100))
	{
		printf("Percentage must be with in the range of 0 to 100\n");
		goto a;
	}
	int i,c=countNode(*ptr),*roll;
	roll=malloc(sizeof(int)*c);

	for(i=0;i<c;i++)
	{
		roll[i]=t->rollno;
		t=t->next;
	}
	int flag,num=1;
	while(1)
	{
		flag=0;
		for(i=0;i<c;i++)
		{
			if(roll[i]==num)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			new->rollno=num;
			break;
		}
		num++;
	}
	if(*ptr==0||new->rollno < (*ptr)->rollno)
	{
		new->next=*ptr;
		*ptr=new;
		return;
	}

	else
	{
		SLL *t=*ptr;
		while((t->next!=0) && new->rollno > t->next->rollno)
			t=t->next;

		new->next=t->next;
		t->next=new;
	}
}

int countNode(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;;
}

