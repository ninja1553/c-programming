#include<stdio.h>
int main()
{
    int intType;
    char charType;
    float floatType;
    double doubleType;
    printf("int size is:%zu \n" ,sizeof(intType));
     printf("char size is:%zu\n", sizeof(charType));
      printf("float size is:%zu\n", sizeof(floatType));
       printf("double size is:%zu\n", sizeof(doubleType));
       return 0;
}