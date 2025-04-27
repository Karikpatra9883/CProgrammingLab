#include<stdio.h>
#include<conio.h>
#include<string.h>

void call(char str[]);

int main()
{
	int i=0;
	
	char str[100];
	
	printf("\n Enter A string:-");
	scanf("%s",&str[i]);
	
	call(str);
	
	getch();
	
	return 0;
}

void call(char str[])

{
	
int i=0,vowelcount=0,con;
	
		while(str[i] !='\0')
	{
		if(str[i] == 'A'|| str[i] == 'a' || str[i] == 'E' || str[i] == 'e' ||
			 
		str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || 
	
        str[i ]== 'U' || str[i] == 'u')
        
		{
			
			vowelcount=vowelcount+1;
			
			con=strlen(str)-vowelcount;
			
		}
		
		i=i+1;
		
	}
	printf("\n The Vowel Count=%d",vowelcount);
	
	printf("\n The Consonant Count=%d",con);
}