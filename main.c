#include <stdio.h>
#include <stdlib.h>


int add(int num1,int num2)
{
    return num1+num2;
}

int div(int num1,int num2)
{
    return num1/num2;
}

int main()
{
    int f=add(10,20);
    printf("%d",f);
}
