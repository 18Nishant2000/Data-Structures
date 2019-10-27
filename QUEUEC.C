#define size 5
void main()
{
int QUEUE[size],front=-1,rear=-1,choice,times,i;
clrscr();
printf("\nEnter number of times you want to execute the program: ");
scanf("%d",&times);
for(i=0;i<times;i++)
{
printf("\n\nMENU:\n\n1:Insertion\n\n2:Deletion\n\n3:Display\n\n4:Exit\n\nEnter your choice: ");
scanf("%d",&choice);
if(choice==1)
{
int element;
printf("\n\nEnter an element: ");
scanf("%d",&element);
if((front==0 && rear==size-1) || (front==rear+1))
printf("\nOverflow");
else
{
if(front==-1 && rear==-1)
{
front++;
rear++;
}
else
rear=(rear+1)%size;
QUEUE[rear]=element;
printf("\n\nElement inserted successfully...");
}
}
else if(choice==2)
{
if(front==-1)
printf("\nUnderflow");
else
{
printf("\n\nDeleted element is %d.",QUEUE[front]);
if(front==rear)
{
front=-1;
rear=-1;
}
else
front=(front+1)%size;
}
}
else if(choice==3)
{
if(front==-1 && rear==-1)
printf("\nEmpty");
else
{
if(front<=rear)
{
for(i=front;i<=rear;i++)
printf("%d ",QUEUE[i]);
}
else
{
for(i=front;i<size;i++)
printf("%d ",QUEUE[i]);
for(i=0;i<=rear;i++)
printf("%d ",QUEUE[i]);
}
getch();
}
}
else if(choice==4)
exit(0);
else
printf("\n\nWrong Input!!!");
}
getch();
}