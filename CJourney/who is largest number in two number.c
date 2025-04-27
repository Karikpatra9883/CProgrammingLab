#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\n Enter Your First Number:-");
    scanf("%d",&a);
    printf("\n Enter Your Second Number:-");
    scanf("%d",&b);
    if(a>b)
    {
        printf("\n %d Is A Largest Number",a);
    }
    else {
        printf("\n %d Is A Largest Number",b);
    }
    return 0;
}