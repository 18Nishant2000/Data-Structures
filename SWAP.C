struct node{
int data;
struct node *link;
}*head;

void swap(int choice)
{
struct node *temp1=head,*temp2=head,*temp3=head->link,*temp4=head->link;
int ch1,ch2,a=0,b=0;
if(choice==1)
{
printf("\nEnter first data: ");
scanf("%d",&ch1);
printf("\nEnter second data: ");
scanf("%d",&ch2);
while(temp3->data!=ch1)
{
temp3=temp3->link;
temp1=temp1->link;
}
while(temp4->data!=ch2)
{
temp4=temp4->link;
temp2=temp2->link;
}
a=temp4->link;
temp1->link=temp4;
temp4->link=temp3->link;
temp2->link=temp3;
temp3->link=a;
}
else if(choice==2)
{
printf("\nEnter data of node which is to be swapped: ");
scanf("%d",&ch1);
while(temp3->data!=ch1)
{
temp3=temp3->link;
temp2=temp2->link;
}
a=temp1->link;
b=temp3->link;
head=temp3;
temp3->link=a;
temp2->link=temp1;
temp1->link=b;
}
else if(choice==3)
{
while(temp3->link!='\0')
{
temp3=temp3->link;
temp1=temp1->link;
}
a=head->link;
head=temp3;
temp3->link=a;
temp1->link=temp2;
temp2->link='\0';
}
else if(choice==4)
{
printf("\nEnter data of node which is to be swapped: ");
scanf("%d",&ch1);
while(temp4->link!='\0')
{
temp4=temp4->link;
temp2=temp2->link;
}
while(temp3->data!=ch1)
{
temp3=temp3->link;
temp1=temp1->link;
}
a=temp3->link;
temp1->link=temp4;
temp4->link=a;
temp2->link=temp3;
temp3->link='\0';
}
else if(choice==5)
{
printf("\nEnter first data: ");
scanf("%d",&ch1);
printf("\nEnter second data: ");
scanf("%d",&ch2);
while(temp4->data!=ch2)
{
temp4=temp4->link;
}
while(temp3->data!=ch1)
{
temp3=temp3->link;
temp1=temp1->link;
}
a=temp4->link;
temp1->link=temp4;
temp4->link=temp3;
temp3->link=a;
}
}

void insert()
{
struct node *temp=(struct node *)malloc(sizeof(struct node *));
printf("\nEnter data: ");
scanf("%d",&temp->data);
if(head=='\0')
head=temp;
else
{
struct node *t=head;
while(t->link!='\0')
t=t->link;
t->link=temp;
}
temp->link='\0';
}

void display()
{
struct node *temp=head;
while(temp!='\0'){
printf("%d %u -->",temp->data,temp);
temp=temp->link;
}
}

void main()
{
int i=0,times,choice;
clrscr();
printf("\nHow many times do you want to run the program: ");
scanf("%d",&times);
for(;i<times;i++)
insert();
for(i=0;i<times;i++)
{
printf("\n\nMENU:\n\n1:Any two nodes in between the list.\n\n2:First node with any node except last.\n\n3:First node with last node.\n\n4:Last node with any node except first.\n\n5:Any two immediate nodes.\n\nEnter your choice: ");
scanf("%d",&choice);
printf("\n");
display();
swap(choice);
printf("\n");
display();
}
getch();
}