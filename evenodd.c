//write a c program to find wheather the number is even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter any positive number");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }

}
