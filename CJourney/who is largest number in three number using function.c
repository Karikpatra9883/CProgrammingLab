#include<stdio.h>
#include<conio.h>

int call(int,int,int);

int  main()
{
	int a,b,c,largest;
	
	printf("\n Plase Enter The First Number:-");
	scanf("%d",&a);
	
	printf("\n plase Enter The Second Number:-");
	scanf("%d",&b);
	
	printf("\n Plase Enter The Third Number:-");
	scanf("%d",&c);
	
	largest=call(a,b,c);
	printf("\n The Largest Number= %d",largest);
	
	getch();
	
	return 0;
	
}

int call(int x,int y,int z)

{
	
	if(x>y && x>z)
		
	{
		return x;
	}
	
	if(y>x && y>z)
		
	{
		
		return y;
	}
	
	else {
		
		return z;
	}
}