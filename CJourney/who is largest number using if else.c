#include<stdio.h>
int main()
{
	int a,b;
	printf("\n a=");
	scanf("%d",&a);
	printf("\n b=");
	scanf("%d",&b);
	if(a>b){
		printf("%d is a largest number.",a);
	}
	else{
		printf("%d is a largest number.",b);
	}
	return 0;
}