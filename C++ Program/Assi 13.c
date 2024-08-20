#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Marks:");
    scanf("%d",&a);
    if(a<40 && a>=0)
    {
        printf("You are fail sorry");
    }else if(a<=100 && a>=40)
    {
        printf("You Pass");
    }else
    {
        printf("No Number");
    }
}
