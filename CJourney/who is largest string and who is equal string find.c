#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	int i=0,len1=0,len2=0,same=0;
	printf("\n Enter The First String:-");
	gets(str1);
	printf("\n Enter The Second String:-");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2)
	{
		while(i<len1)
		{
			if(str1[i]==str2[i])
				i++;
			else break;
		}
		{
			same=1;
			printf("\n The Two String are equal");
		}
	}
	if(len1!=len2)
		printf("\n The Two String is not equal");
	if(same==0)
	{
		if(str1[i]>str2[i])
			printf("\n First String are greater than second string");
		else if(str1[i]<str2[i])
			printf("\n Second string are greater than First string");
	}
	getch();
	return 0;
}