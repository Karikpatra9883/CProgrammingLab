#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("\n Enter Side Of Triangle:-");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b)
	{
		printf("\n Triangle Can be Drawn");
	}
	else {
		printf("\n Triangle Can not be Drawn");
	}
	getch();
	return 0;
}