struct queue
{
int num;
struct queue *link;
}*front,*rear;

void insertq()
{
struct queue *temp=(struct queue *)malloc(sizeof(struct queue));
printf("\nEnter a number: ");
scanf("%d",&temp->num);
if(rear=='\0')
front=rear=temp;
else
{
while(rear->link!='\0')
rear=rear->link;
rear->link=temp;
}
printf("\nElement inserted successfully....\n");
}

void deleteq()
{
int value;
if(rear==front)
printf("\nEmpty Queue");
else
{
value=front->num;
front=front->link;
}
printf("\nDeleted element is %d\n",value);
}


void displayq()
{
if(rear=front=='\0')
printf("\nEMPTY QUEUE");
else
{
struct queue *p=front;
while(p!='\0')
{
printf("%d ",p->num);
p=p->link;
}
}
getch();
}

void main()
{
int times,choice,i;
clrscr();
printf("\nEnter number of times you want to execute the program: ");
scanf("%d",&times);
for(i=0;i<times;i++)
{
clrscr();
printf("\n\nMENU\n\n1:Insertion\n\n2:Deletion\n\n3:Display\n\n4:Exit\n\nEnter your choice: ");
scanf("%d",&choice);
if(choice==1)
insertq();
else if(choice==2)
deleteq();
else if(choice==3)
displayq();
else if(choice==4)
exit(0);
else
printf("\n\nWrong Input");
}
getch();
}