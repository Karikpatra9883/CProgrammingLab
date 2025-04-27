#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,temp,arr[10];
	printf("\n Enter The Element Number Of Arry:-");
	scanf("%d",&n);
	printf("\n Enter The Element of The Array:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
				temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	printf("\n The Sortated Element=");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
	getch();
	return 0;
}