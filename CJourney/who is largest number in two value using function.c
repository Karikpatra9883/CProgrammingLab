#include<stdio.h>
#include<conio.h>

int call(int,int);

int main()
{
int a,b,c;

printf("\n Enter The First Number:-");
scanf("%d",&a);

printf("\n Enter The Second Number:-");
scanf("%d",&b);

c=call(a,b);
printf("\n %d And %d The Largest Number = %d",a,b,c);

getch();

return 0;
	
}

int call(int x, int y)

{
	if(x>y)
		
	{
		return x;
	}
	
	else {
		
		return y;
	}
}