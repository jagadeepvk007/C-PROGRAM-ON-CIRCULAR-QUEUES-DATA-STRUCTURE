#include<stdio.h>
#include<conio.h>
#define max 5
char cq[max],ele;
int f=0,r=-1,n=0,i=0,j=0;
 void insert()
  {
   if(n==max)
   {
   printf("the queue is full\n");
   return;
   }
  else
  {
  r=(r+1)%max;
  printf("enter the element tobe inserted\n");
  fflush(stdin);
  scanf("%c",&ele);
  cq[r]=ele;
  n++;
  }
 }
void delete()
{
 if(n==0)
 {
 printf("queue is empty\n");
 return;
 }
 else
 {
 printf("the element deleted is %c",cq[f]);
 f=(f+1)%max;
 n--;
 }
}

void display()
{
 if(n==0)
 {
 printf("no elements to display\n");
 return;
 }
 else
 {
 j=0;
 for(i=f;j<n;i=(i+1)%max,j++)
 printf("%c\n",cq[i]);
 }
}

void main()
{
 int ch;
 clrscr();
 printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
 while(1)
 {
 printf("\nenter the choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:insert();
 break;
 case 2:delete();
 break;
 case 3:printf("the status of queue is\n");
 display();
 break;
 case 4:exit(0);
  }
 }
}
