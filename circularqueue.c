
#include<stdio.h>
#include<conio.h>

#include<stdlib.h>
#define SIZE 5

int queue[SIZE],data;
 int f=-1,r=-1;
 void delete();
 void display();
 void insert();

 void main()
 {
	 int ch;
	 printf("important facts :: int type data should be inserted\n");
	 	 while(1)
	 {
		 printf("\n1.insert\t2. delete\t3.display\t4. exit\n choice::");
		 scanf("%d",&ch);
		 switch(ch)
		 {
			case 1: insert();
					break;
			case 2: delete();
					break;
			case 3: display();
				break;
			case 4: exit(0);
			default:
			printf("wrong choice ..try again::");
				 scanf("%d",&ch);
		 }
	 }
 }
 void insert()
 {
	 if((f==0&&r==SIZE-1)||(f==r+1))
	 {
		 printf("\nthe queue is full");
		 return;
	 }
	 printf("enter int  data ::");
	 scanf("%d",&data);
	 if(r==-1)
	 {
		 f=0;
		 r=0;
	 }
	 else
        if(r==SIZE-1)
        {
		 r=0;
        }
	 else
		 r=r+1;
    queue[r]=data;
     printf("%d  is inserted",data);
 }
 void delete()
 {
	 if(f==-1)
	 {
		 printf("queue is empty");
		 return;
	 }
	 data=queue[f];
	 if(f==r)
	 {
		 f=-1;
		r=-1;
	 }
	 else if(f==SIZE-1)
	 {
		 f=0;
	 }
	 else
	 {
		 f=f+1;
	 }
	 printf("%d is deleted",data);
 }
 void display()
 {int i;
	 if(r==-1)
	 {
		 printf("nothing to display");
		 return;
	 }
	 if(f<r)
	{
		 for(i=r;i>=f;i--)
		 {
			 printf("%d\t",queue[i]);
		 }
	}
	else
	{
	 for(i=r;i>=0;i--)
	 {
		 printf("%d\t",queue[i]);
	 }
	 for(i=SIZE-2;i>=f;i--)
	 {
		 printf("%d\t",queue[i]);
	 }
	}
 }




