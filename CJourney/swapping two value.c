#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\n Enter the value of a:-");
	scanf("%d",&a);
	printf("\n Enter the value of b:-");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n AFTER SWAPPING");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	return 0;
}