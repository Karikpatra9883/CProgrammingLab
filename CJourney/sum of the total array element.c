#include<stdio.h>
int main()
{
	int arr[50],i,n,sum=0;
	printf("\n Enter total number of element:-");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("sum=%d",sum);
	return 0;
}