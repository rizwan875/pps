#include <stdio.h>
int main()
{
    int num1,num2,Result;
    char operand;

    printf("\n Enter The First Number: ");
    scanf("%d",&num1);

    printf("\n Enter The Second Number: ");
    scanf("%d",&num2);

    printf("\n Enter The Operand: ");
    scanf(" %c",&operand);

    switch(operand)
    {
        case '+': Result=num1+num2;
                  printf("Sum of %d and %d is %d",num1,num2,Result);
                  break;

        case '-': Result=num1-num2;
                  printf("Diff of %d and %d is %d",num1,num2,Result);
                  break;

       case '*': Result=num1*num2;
                 printf("Product of %d and %d is %d",num1,num2,Result);
                 break;


         default: printf("Invalid Operand");
                  break;

    }
    return 0;
}
