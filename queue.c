#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10
void insert();
void delete();
void display();
int f = -1,r = -1;
char queue[SIZE],data;
void main()
{
int choice;
while(1)
{
printf("\n*************************** WELCOME TO QUEQE **********************\n \n 1. INSERT \n 2. DELETE \n 3. DISPLAY \n 4. QUIT \n\n Enter Your choice :: " );
scanf("%d",&choice);
switch(choice)
{
     case 1 : insert();
        break;
     case 2 : delete();
        break;
     case 3 :display();
        break;
     case 4 :exit(0);
     default : printf("INVALID input");


}
}
}
void insert()
{
   printf("\t\t\t INSERT");

    if(r==SIZE - 1)
    {
        printf("\n Queue is full\n");
        return;
    }
printf("\n INPUT::");
scanf("%c",&data);

    if(r==-1)
    {
        f=0;
        r=0;
    }
else
{
    r=r+1;
}
queue[r]=data;
printf("%c is inserted",data);
}
void delete()
{
    printf("\t\t\t DELETING...............\n");
    if(f=-1)
    {
        printf("\nQUEUE IS EMPTY");
        return;
    }
data=queue[f];
if(f=r)
{
    r=-1;
    f=-1;

}
else
    {
    f=f+1;
    }
printf("\n %c is deleted",data);
}
void display()
{

}
