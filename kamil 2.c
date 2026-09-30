#include<studio.h>
int main()
{
    int a, b, temp;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("a= %d and b= %d\n", a, b);

    temp=a;
    a=b;
    b=temp;
    printf("a = %d and b = %d\n", a, b);

    return 0;
}
