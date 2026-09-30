//write a c program to find the largest of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the first number");
    scanf("%d"&a);
    printf("enter the second number");
    scanf("%d",b);
    if(a>b)
    {
        printf("a is the largerst number = %d",a);
    }
    else
    {
        printf("b is the largest number = %d",b);
    }
}
