#include<stdio.h>
int main()
{
    int e;
    printf("Enter Year:");
    scanf("%d",&e);
    if(e%4=0)
    {
        printf("The Year is leap year");
    }else
    {
        printf("The year is not leap year");
    }
}
