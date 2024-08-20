#include<stdio.h>
int main()
{
    int j;
    printf("Enter your Number:");
    scanf("%d",&j);
    if(j%7==0)
    {
        printf("The Number is Divisible by 7");
    }else
    {
        printf("The number is not Divisible by 7");
    }
    return 0;
}
