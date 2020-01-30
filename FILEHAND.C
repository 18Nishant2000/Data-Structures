#include<stdio.h>
# define S 100
void main()
{
char ch[S],c;
int i;
FILE *f;
clrscr();
//printf("\nEnter data: ");
//gets(ch);
f=fopen("C:\\Users\\nisha\\Desktop\\source.txt","r+");
//fprintf(f,"%s",ch);
/*for(i=0;i<strlen(ch);i++)
putc(ch[i],f);*/
//printf("\nData written successfully.");

while(fscanf(f,"%s",ch)!=EOF)
printf("%s",ch);



/*c=getc(f);
while(c!=EOF)
{
printf("%c",c);
c=getc(f);
}*/

//for(i=0;i<strlen(ch);i++)
//printf("%c",ch[i]);
fclose(f);
getch();
}
