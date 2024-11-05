#include<stdio.h>
int main()
{
    int a[5],i;
    printf("array input 5 elements");
    for(i=0;i<5;i++)
    {
        scanf("\n %d",&a[i]);

    }
    for(i=0;i<5;i++)
    printf("\na[i]=%d",a[i]);
    return 0;

}