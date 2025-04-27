#include<stdio.h>
#include<conio.h>

int table(int,int,int);

int main()
{
	int a,b,c;
	
	printf("\n Enter Lower Value You Want To Table Print:-");
	scanf("%d",&a);
	
	printf("\n Enter Max Value You Want To Table Print:-");
	scanf("%d",&b);
	
	printf("\n Enter Table Value:-");
	scanf("%d",&c);
	
	table(a,b,c);
	
		getch();
		
		return 0;
		
}

int table(int x,int y,int z)
{
	
	table:
		
	printf("\n %d x %d=%d",z,x,z*x);
	
	x++;
	
	if(x<=y)
	
	goto table;
}