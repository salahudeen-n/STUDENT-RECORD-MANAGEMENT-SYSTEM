#include"header.h"

void modifyNode(SLL*ptr)
{
	if(ptr==0)
	{
		printf("No data found\n");
		return;
	}
	SLL *t=ptr;
	int op,flag=0;
	char ch;
	printf("Select your choice\nR)search by rollno\nN)search by name\nP)search by percentage\n");
	scanf(" %s",&ch);

	if(ch=='R')
	{
roll:
		printf("Enter the rollno\n");
		scanf("%d",&op);

		ptr=t;
		while(ptr)
		{
			if(ptr->rollno==op)
			{
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
a:
				printf("Enter updated name & percentage\n");
				scanf("%s %f",ptr->name,&ptr->percentage);
				if(ptr->percentage <0 && ptr->percentage >100)
				{
					printf("percentage must be in the range of 0 & 100\n");
					goto a;
				}
				return;
			}
			ptr=ptr->next;
		}
	}
	else if(ch=='N')
	{
		char n[20];
		printf("Enter the name\n");
		scanf(" %s",n);
		ptr=t;
		while(ptr)
		{
			if(strcmp(ptr->name,n)==0)
			{
				flag++;
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
				if(flag==1)
					t=ptr;
			}
			ptr=ptr->next;
		}
	}
	else if(ch=='P')
	{
		float p;
		printf("Enter the percentage\n");
		scanf("%f",&p);
		ptr=t;
		while(ptr)
		{
			if(ptr->percentage==p)
			{
				flag++;
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
				if(flag==1)
					t=ptr;
			}
			ptr=ptr->next;
		}
	}
	else
	{
		printf("Invalid option\n");
		return;
	}
	if(flag==1)
	{
b:
		printf("Enter the updated name & percentage\n");
		scanf("%s %f",t->name,&t->percentage);

		if((t->percentage <0) || (t->percentage >100))
		{
			printf("Percentage must in the range of 0 to 100");
			goto b;
		}
		return;
	}
	else if(flag>=2)
	{
		printf("Multiple data available\n");
		goto roll;
	}
	printf("No data found\n");
}


void sortData(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No data found\n");
		return;
	}
	char ch;
	printf("Enter your choice\n\nN)sort with name\nP)sort with percentage\n");
	scanf(" %c",&ch);

	if(ch=='N')
	{
		int i,j,c=countNode(ptr);
		SLL t,*p1,*p2;

		p1=ptr;
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-1-i;j++)
			{
				if(strcmp(p1->name,p2->name)>0)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
	}

	else if(ch=='P')
	{
		int i,j,c=countNode(ptr);
		SLL t,*p1,*p2;

		p1=ptr;
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-1-i;j++)
			{
				if(p1->percentage < p2->percentage)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
	}
	else
	{
		printf("Invalid option\n");
		return;
	}
	printf("Stored successfully\n");
}


void reverseLinks(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No data found\n");
		return;
	}

	int i,c=countNode(*ptr);
	if(c>1)
	{
		SLL *t=*ptr;
		SLL **a=malloc(sizeof(SLL*)*c);
		for(i=0;i<c;i++)
		{
			a[i]=t;
			t=t->next;
		}
		for(i=c-1;i>0;i--)
			a[i]->next=a[i-1];

		a[0]->next=0;
		*ptr=a[c-1];
	}
	printf("List reversed successfully\n");
}

