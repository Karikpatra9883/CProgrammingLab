#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter the value of a:-");
	scanf("%d",&a);
	printf("\n Enter the value of b:-");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n AFTER SWAPPING");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	return 0;
}