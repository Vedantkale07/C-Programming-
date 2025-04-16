#include<stdio.h>
#define SIZE 5
int queue[SIZE];
void enQueue(int);
void display();
int rear = -1;
int front = -1;
main()
{
int choice,n;
while(1)
{
printf("1.Insert element to circular queue\n");
printf("2.Delete element from circular queue\n");
printf("3.Display all elements of cicular queue\n");
printf("4.Quit\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch (choice)
{
 case 1:
 printf("\n1.Input element");
 scanf("%d",&n);
 enQueue(n);
 break;
 
 case 2:
 deQueue();
 break;
./a
 case 3: 
 display();
 break;
 
 case 4:
 	exit(1);
 	
 default:
 	printf("Wrong choice\n");
 	}
 }
 }
 
 
 int isFull()
 {
 
 if ((front==rear + 1) || (front == 0 && rear == SIZE -1)) return 1;
 return 0;
 }
 
 
 int isEmpty()
 {
 if(front == -1) return 1;
return 0;
 }
 
 void enQueue(int element)
 {
 if(isFull())
 printf("\n Queue is Full!!\n");
 else
 {
 if(front == -1)
  front =0;
 rear =(rear + 1) % SIZE;
 queue[rear] =element;
 printf("\n Inserted -> %d",element);
 }
 }
 
 
 int deQueue()
 {
 int element;
 if(isEmpty())
 {
 printf("\n Queue is empty !! \n");
 return(-1);
 }
 else
 {
 element =queue[front];
 if (front == rear)
 {
 front = -1;
 rear = -1;
 }
 
 else
{
 front = (front + 1) % SIZE;
 }
 printf("\n Deleted element -> %d \n",element);
 return(element);
 }
 }
 
void display()
 {
 int i;
 if (isEmpty())
 printf("\n Empty Queue\n");
 else
 {
 printf("\n Front -> %d",front);
 printf("\n Data ->");
 for(i = front; i != rear; i =( i+1) % SIZE)
 {
 printf("%d",queue[i]);
 }
 printf("%d",queue[i]);
 printf("\n \tRear -> %d \n ",rear);
 }
 }
