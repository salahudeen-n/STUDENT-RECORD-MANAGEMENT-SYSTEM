//header.h

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct stu
{
int rollno;
char name[20];
float percentage;
struct stu *next;
}SLL;

void addNode(SLL**);
void deleteNode(SLL**);
void printNode(SLL*);
void modifyNode(SLL*);
void saveFile(SLL*);
void sortData(SLL*);
void deleteAll(SLL**);
void reverseLinks(SLL**);
int countNode(SLL*);
void readFile(SLL**);
