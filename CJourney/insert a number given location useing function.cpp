#include<stdio.h>
#include<conio.h>

void insert_location(int i,int arr[],int n,int pos,int num);

int main()
{
	int i,n,num,pos,arr[10];
	
	printf("\n Enter The Number Of Elements In The Array:-");
	scanf("%d",&n);
	
	printf("\n Enter The Array Element:-");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("\n Enter The Number To Be Inserted:-");
	scanf("%d",&num);
	
	printf("\n Enter The Position At Which The Number Has To Be Added:-");
	scanf("%d",&pos);
	
	insert_location(i,arr,n,pos,num);
	printf("\n The Array After Insertion of %d Is:-",num);
	
	for(i=0;i<n;i++)
		printf("\t %d",arr[i]);
	
	getch();
	
	return 0;
}

void insert_location(int i,int arr[],int n,int pos,int num)
{
	for(i=n-1;i>=pos;i--)
		
		arr[i+1]=arr[i];
	
	arr[pos]=num;
	n++;
}