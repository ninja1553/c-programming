#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum,avg,marks[5];
    sum=0;
    printf("enter the marks of 5 subjects");
    for(i=0;i<5;i++)
    {
        scanf("\n%d",&marks[i]);

    }
    for(i=0;i<5;i++) 
    {
        sum=sum+marks[i];

    }
    avg=sum/5;
    printf("sum is:%d and avg is:%d",sum ,avg);
getch();
}