struct element
{
int num;
struct element *link;
}*top;

void push()
{
struct element *temp=(struct element *)malloc(sizeof(struct element));
printf("\nEnter element: ");
scanf("%d",&temp->num);
if(top=='\0')
top=temp;
else
{
temp->link=top;
top=temp;
}
printf("\nElement inserted successfully...");
getch();
}

void pop()
{
if(top=='\0')
printf("\nUnderflow...");
else
{
struct element *temp=top;
top=top->link;
printf("\nDeleted element is %d",temp->num);
free(temp);
}
getch();
}

void display()
{
if(top=='\0')
printf("\nStack is empty...");
else
{
struct element *temp=top;
while(temp!='\0')
{
printf("%d-->",temp->num);
temp=temp->link;
}
}
getch();
}

void main()
{
int choice,i=0,iteration;
clrscr();
printf("\nEnter number of times you want to iterate the program: ");
scanf("%d",&iteration);
for(;i<iteration;i++)
{
clrscr();
printf("\nMENU:\n\n1:Insertion\n\n2:Deletion\n\n3:Display\n\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
default:
printf("\nWrong input....");
}
}
getch();
}