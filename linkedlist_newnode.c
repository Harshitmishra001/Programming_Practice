#include <stdio.h>
#include <stdlib.h>
typedef struct linkedList{
 int number;
 struct linkedList *address;   
}linkedList;

int main(int argc,char *argv[])
{
 linkedList *list=NULL;
 for(int i=1;i<argc;i++)
 {
     int userNumber=atoi(argv[i]);
     linkedList *n=( linkedList *)malloc(sizeof(linkedList));
     n->number=userNumber;
     n->address=list;
     list=n;
 }  



 linkedList *ptr=list;
 while(ptr!=NULL)
 {
  printf("%i\n",ptr->number);
  ptr=ptr->address;     
 }
       return 0;   
}