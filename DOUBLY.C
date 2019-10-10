struct student
{
int rno;
char name[50];
struct student *next,*prev;
}*head;

void insert_first()
{
struct student *temp=(struct student *)malloc(sizeof(struct student));
printf("\nEnter name and roll number: ");
scanf("%s%d",temp->name,&temp->rno);
if(head=='\0')
head=temp;
else
{
temp->next=head;
head->prev=temp;
head=temp;
}
printf("\nNode inserted successfully!!!\n");
}

void insert_last()
{
struct student *temp=(struct student *)malloc(sizeof(struct student));
printf("\nEnter name and roll number: ");
scanf("%s%d",temp->name,&temp->rno);
if(head=='\0')
head=temp;
else
{
struct student *p=head;
while(p->next!='\0')
p=p->next;
p->next=temp;
temp->prev=p;
}
printf("\nNode inserted successfully!!!\n");
}

void insert_specific()
{
struct student *temp=(struct student *)malloc(sizeof(struct student));
int pos;
printf("\nEnter name and roll number: ");
scanf("%s%d",temp->name,&temp->rno);
printf("\nEnter the position after which you want to add node: ");
scanf("%d",&pos);
if(head=='\0')
head=temp;
else
{
struct student *p=head;
while(pos-1)
{
p=p->next;
pos--;
}
temp->next=p->next;
(p->next)->prev=temp;
p->next=temp;
temp->prev=p;
}
printf("\nNode inserted successfully!!!\n");
}

void delete_first()
{
if(head=='\0')
printf("\nUNDERFLOW!!!");
else
{
struct student *temp=head;
head=temp->next;
(temp->next)->prev='\0';
printf("Node deleted with name %s and roll number %d.",temp->name,temp->rno);
free(temp);
}
}

void delete_last()
{
if(head=='\0')
printf("\nUNDERFLOW!!!");
else
{
struct student *temp1=head,*temp2=head->next;
while(temp2->next!='\0')
{
temp2=temp2->next;
temp1=temp1->next;
}
temp1->next='\0';
printf("Node deleted with name %s and roll number %d.",temp2->name,temp2->rno);
free(temp2);
}
}

void delete_specific()
{
if(head=='\0')
printf("\nUNDERFLOW!!!");
else
{
int pos;
struct student *temp1=head,*temp2=head->next;
printf("\nEnter the position of the node: ");
scanf("%d",&pos);
while(pos-2)
{
temp2=temp2->next;
temp1=temp1->next;
pos--;
}
temp1->next=temp2->next;
(temp2->next)->prev=temp1;
printf("\nNode deleted with name %s and roll number %d.",temp2->name,temp2->rno);
free(temp2);
}
}

void display()
{
if(head=='\0')
printf("\nEmpty List...");
else
{
struct student *p=head;
while(p!='\0')
{
printf("| %s %d | --> ",p->name,p->rno);
p=p->next;
}
}
}

void main()
{
int choice,i=0,n;
clrscr();
printf("\nEnter number of times you want to iterate the program: ");
scanf("%d",&n);
for(;i<n;i++)
{
clrscr();
printf("\nMENU\n\n1:Insertion\n\n2:Deletion\n\n3:Display\n\n4:Exit\n\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
clrscr();
printf("\nSUBMENU\n\n1:At the beginning\n\n2:At the last\n\n3:At a specific position\n\nEnter yout choice: ");
scanf("%d",&choice);
if(choice==1)
insert_first();
else if(choice==2)
insert_last();
else if(choice==3)
insert_specific();
else
printf("\nWrong Input...");
break;
case 2:
clrscr();
printf("\nSUBMENU\n\n1:From the beginning\n\n2:From the last\n\n3:From a specific position\n\nEnter yout choice: ");
scanf("%d",&choice);
if(choice==1)
delete_first();
else if(choice==2)
delete_last();
else if(choice==3)
delete_specific();
else
printf("\nWrong Input...");
break;
case 3:
clrscr();
display();
break;
case 4:
printf("\nTerminating......");
exit(0);
break;
default:
printf("\nWrong Input....");
}
}
getch();
}