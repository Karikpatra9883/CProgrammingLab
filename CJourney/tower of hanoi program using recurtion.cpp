#include<stdio.h>
#include<conio.h>

void move(int,char,char,char);

int main()
{
	int n;
	
	printf("\n Enter the number of ring:-");
	scanf("%d",&n);
	
	move(n,'A','C','B');
	
	getch();
	
	return 0;
	
}

void move(int n,char source ,char dest,char spare)
{
	if(n==1)
		printf("\n Move Frome %c to %c",source,dest);
	else
	 {
		move(n-1,source,spare,dest);
		
    	move(1,source,dest,spare);
    	
    	move(n-1,spare,dest,source);
    	
	 }
	 
}