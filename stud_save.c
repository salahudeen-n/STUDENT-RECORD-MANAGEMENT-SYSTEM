#include"header.h"

void saveFile(SLL *ptr)
{
if(ptr==0)
{
printf("No data found\n");
return;
}
FILE *fp;
fp=fopen("student.dat","w");

while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
printf("Data Saved in the file\n");
fclose(fp);
}


void readFile(SLL **ptr)
{
FILE *fp;
fp=fopen("student.dat","r");

if(fp==0)
{
printf("No data found\n");
return;
}
while(1)
{
SLL *new,*last;
new=malloc(sizeof(SLL));

if((fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percentage))==EOF)
break;

new->next=0;
if(*ptr==0)
*ptr=new;
else
{
last=*ptr;
while(last->next)
last=last->next;

last->next=new;
}
}
printf("File copied successfully\n");
}

