#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\n the list of all even numbers: ");
    for (i=1;i<=num;i++)
    {
        if (i%2==0)
            printf("\t %d",i);

    }
    return 0;
}
