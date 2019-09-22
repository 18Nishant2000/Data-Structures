struct student
{
char name[100];
int rno;
struct student *link;
}*head;

void insert_first()
{
struct student *temp=(struct student *)malloc(sizeof(struct student));
printf("\nEnter name and roll number: ");
scanf("%s",temp->name);
scanf("%d",&temp->rno);
if(head=='\0')
head=temp;
else
{
temp->link=head;
head=temp;
}
printf("\nElement inserted successfully!!!\n");
}

void insert_last()
{
struct student *temp=(struct student *)malloc(sizeof(struct student));
printf("\nEnter name and roll number: ");
scanf("%s",temp->name);
scanf("%d",&temp->rno);
if(head=='\0')
head=temp;
else
{
struct student *p=head;
while(p->link!='\0')
p=p->link;
p->link=temp;
temp->link='\0';
}
printf("\nElement inserted successfully!!!\n");
}

void insert_specific()
{
struct student *temp=(struct student *)malloc(sizeof(struct student));
int pos,i=1;
printf("\nEnter name and roll number and position: ");
scanf("%s",temp->name);
scanf("%d",&temp->rno);
scanf("%d",&pos);
if(head=='\0')
head=temp;
else
{
struct student *p=head;
while(i<pos)
{
p=p->link;
i++;
}
temp->link=p->link;
p->link=temp;
}
printf("\nElement inserted successfully!!!\n");
}

void display()
{
if(head=='\0')
printf("\nEmpty LIST!!!!");
else
{
struct student *temp=head;
while(temp!='\0')
{
printf("%s %d--->",temp->name,temp->rno);
temp=temp->link;
}
}
}

void delete_first()
{
if(head=='\0')
printf("\nUNDERFLOW!!");
else
{
struct student *p=head;
head=p->link;
printf("\nNode deleted with name: %s and roll number: %d\n",p->name,p->rno);
free(p);
}
}

void delete_last()
{
if(head=='\0')
printf("\nUNDERFLLOW!!");
else
{
struct student *p=head,*s=head->link;
while(s->link!='\0')
{
p=p->link;
s=s->link;
}
printf("\nNode deleted with name: %s and roll nummber: %d\n",s->name,s->rno);
p->link='\0';
free(s);
}
}

void delete_specific()
{
if(head=='\0')
printf("\nUNDERFLOW!!");
else
{
int pos,i=1;
struct student *p=head,*s=head->link;
printf("\nEnter position of the node: ");
scanf("%d",&pos);
while(i<pos-1)
{
p=p->link;
s=s->link;
i++;
}
p->link=s->link;
printf("\nNode deleted with name: %s and roll number: %d\n",s->name,s->rno);
free(s);
}
}

void main()
{
int choice,i,times;
clrscr();
printf("\nEnter number of times you want to run the program: ");
scanf("%d",&times);
for(i=0;i<times;i++)
{
printf("\nMENU:\n\n1:INSERTION\n\n2:DELETION\n\n3:DISPLAY\n\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nSUB-MENU:\n\n1:From the begining\n\n2:At a specific position\n\n3:From the last\n\nEnter your choice: ");
scanf("%d",&choice);
if(choice==1)
insert_first();
else if(choice==2)
insert_specific();
else if(choice==3)
insert_last();
else
printf("\nWrong Input!!!");
break;

case 2:
printf("\nSUB-MENU:\n\n1:From the begining\n\n2:At a specific position\n\n3:From the last\n\nEnter your choice: ");
scanf("%d",&choice);
if(choice==1)
delete_first();
else if(choice==2)
delete_last();
else if(choice==3)
delete_specific();
else
printf("\nWrong Input!!!");
break;

case 3:
display();
break;

default:
printf("\nWrong Input!!!");
}
}
getch();
}