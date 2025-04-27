#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("\n A=");
	scanf("%d",&a);
		printf("\n B=");
	scanf("%d",&b);
		printf("\n C=");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("\n %d is a largest number",a);
		}
		else{
			printf("\n %d is a largest number",c);
		}
	}
		else{
			if(b>c){
				printf("\n %d the largest number",b);
			}
			else{
				printf("\n %d the largest number",c);
			}
		}
		return 0;
}