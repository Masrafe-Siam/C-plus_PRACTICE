#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Number:");
    scanf("%d",&a);
    printf("Enter The Number:");
    scanf("%d",&b);
    printf("Enter The Number:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The Greatest number is %d",a);
        }else
        {
            printf("The great number is %d",c);
        }if(b>c)
        {
            printf("The great number is %d",b);
        }else
        {
            printf("The great number is %d",c);
        }
    }
    return 0
}
