#include<stdio.h>
int main()
{
    int s,f,g,h;
    printf("Enter Your 1st Number:");
    scanf("%d",&s);
    printf("Enter your 2nd Number:");
    scanf("%d",&f);
    g=s/f;
    h=s%f;
    printf("The Result is %d\nThe Remainder is %d",g,h);
    return 0;
}
