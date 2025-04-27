#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("\n Enter a number:-");
	scanf("%d",&n);
	for(i=n;i>=2;i--){
		fact=fact*i;
	}
	printf("\n The factorial of %d = %d",n,fact);
	return 0;
}