#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,m;
    i=1;
    printf("enter a no for multiplication table:");
    scanf("%d",&a);
     printf("multiplictation table of a:\n");
    for(i=1;i<11;i++)
    {
        m=a*i;
    
       printf("\n%d*%d=%d",a,i,m);
       
    }

    return 0;


}