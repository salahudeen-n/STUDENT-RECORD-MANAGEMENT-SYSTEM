//main

#include "header.h"
int main()
{
	SLL *headptr=0;
	char ch;
	readFile(&headptr);
	while(1)
	{
		printf("\033[34m \nEnter your choice\n");
		printf("A)addNode\nD)deleteNode\nS)showList\nM)modifyNode\nV)saveNode\nE)Exit\nT)sortNode\nL)deleteAll\nR)reverseLinks\n \033[0m");
		scanf(" %c",&ch);

		switch(ch)
		{
			case 'A':addNode(&headptr);break;
			case 'S':printNode(headptr);break;
			case 'V':saveFile(headptr);break;
			case 'D':deleteNode(&headptr);break;
			case 'M':modifyNode(headptr);break;
			case 'E':printf("S:Save & exit\nE:Exit without saving\n");
				 char ch;
				 scanf(" %c",&ch);
				 if(ch=='S')
				 {
					 saveFile(headptr);
					 deleteAll(&headptr);
					 exit(0);

				 }
				 else if(ch=='E')
				 {
					 deleteAll(&headptr);
					 exit(0);
				 }
				 else
					 printf("Invalid Option\n");
				 break;

			case 'T':sortData(headptr);break;
			case 'L':deleteAll(&headptr);break;
			case 'R':reverseLinks(&headptr);break;

			default:printf("Invalid Option\n");

		}
	}
	return 0;
}


