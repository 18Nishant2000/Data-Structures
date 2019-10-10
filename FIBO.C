void fibo(int n)
{
static int a=0,b=1,c=0;
if(n!=0)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
fibo(n-1);
}
}
void main()
{
int n;
clrscr();
printf("\nEnter the number till you want to generate the fibonacci series: ");
scanf("%d",&n);
printf("0 1 ");
fibo(n-2);
getch();
}