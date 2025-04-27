#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,n,sum=0;
	printf("\n Enter The Number Of Element:-");
	scanf("%d",&n);
	printf("\n Enter The Element:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("\n Your Entrer Array Element=");
		for(i=0;i<n;i++){
	printf("\t %d",arr[i]);
		}
		printf("\n Sum Of The Array Element=%d",sum);
	getch();
	return 0;
}