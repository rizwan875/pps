//write a c program to find wheather the person is elible to vote or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter the person's age");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Elible to vote");
    }
    else
    {
        printf("Not elible to vote");
    }




}
