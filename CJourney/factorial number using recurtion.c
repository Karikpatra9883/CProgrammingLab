#include<stdio.h>
long factorial(int n)
{
	if(n==0)
	return 1;
	else
	return(n*factorial(n-1));
}
void main()
{
	int number;
	long fact;
	printf("\n Enter a Number:-");
	scanf("%d",&number);
	fact=factorial(number);
	printf("\n Factorial of %d is= %d",number,fact);
	getch();
	return 0;
}