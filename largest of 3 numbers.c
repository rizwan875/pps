//write a c program to find the largest of 3 numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Ente the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("a is the largest number");
    }
    else if (b>a && b>c)
    {
        printf("b is the largest number");
    }
    else
    {
        printf("c is the largest number");
    }


}
