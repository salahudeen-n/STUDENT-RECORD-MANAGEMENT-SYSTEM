#include"header.h"

void deleteNode(SLL **ptr)
{

	if(*ptr==0)
	{
		printf("No data found\n");
		return;
	}
	int flag2=0;
	char name[20];
	char ch;
	printf("Enter your choice\n\nR)Enter rollno to delete\nN)Enter name to delete\n");
	scanf(" %c",&ch);
	if(ch=='R')
	{
r:

		int roll;
		printf("Enter rollno\n");
		scanf("%d",&roll);

		SLL *del=*ptr,*prev;

		while(del)
		{
			if(del->rollno==roll)
			{
				if(flag2==1 && (strcmp(del->name,name)!=0))
				{
					printf("Rollno entered doesn't match with name\n");
					return;
				}
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				printf("Data deleted successfully\n");
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("Rollno not found\n");
	}

	else if(ch=='N')
	{
		int flag1=0;
		printf("Enter name to delete\n");
		scanf(" %s",name);

		SLL *del,*prev,*t1,*t2;
		del=*ptr;

		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
				flag1++;
				printf("%d %s %f\n",del->rollno,del->name,del->percentage);
				if(flag1==1)
					t1=del;
			}
			prev=del;
			if(flag1==0)
				t2=del;

			del=del->next;
		}

		if(flag1==1)
		{
			del=t1;
			prev=t2;
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next;

			free(del);
			printf("Data deleted successfully\n");
			return;
		}
		else if(flag1>=2)
		{
			printf("Multiple records are available\n");
			flag2=1;
			goto r;
		}
		printf("Name not found\n");
	}
	else
	{
		printf("Invalid choice\n");
		return;
	}
}


void deleteAll(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No data found\n");
		return;
	}
	SLL *del=*ptr;

	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	*ptr=0;
	printf("All data deleted\n");
}

