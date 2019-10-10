void main()
{
int Stack[500],top=-1,element,choice,i=0,size;
clrscr();
printf("\nEnter size of Stack: ");
scanf("%d",&size);
for(;;i++)
{
clrscr();
printf("\nMENU:\n\n1:Insertion\n\n2:Deletion\n\n3:Display\n\nEnter your choice: ");
scanf("%d",&choice);
if(choice==1)
{
printf("\nEnter an element: ");
scanf("%d",&element);
if(top==size-1)
{
printf("\nOVERFLOW!!!");
break;
}
else
Stack[++top]=element;
}
else if(choice==2)
{
if(top==-1)
{
printf("\nUNDERFLOW!!!");
break;
}
else
{
printf("\nDeleted element: %d",Stack[top--]);
getch();
}
}
else if(choice==3)
{
if(top==-1)
{
printf("\nStack is empty...");
getch();
}
else
{
int j=top;
printf("\n");
for(;j>=0;j--)
printf("%d\n",Stack[j]);
break;
}
}
else
{
printf("\nInput Error....");
break;
}
}
getch();
}