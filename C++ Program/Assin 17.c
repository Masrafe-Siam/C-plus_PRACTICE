#include<stdio.h>
int maim()
{
    int a,b;
    double c;
    printf("Enter The room Temperature:");
    scanf("%d",&a);
    printf("Number 1 for Faren to Celsius\nNumber 2 for Celsius to faren.");
    scanf("%d",&b);
    if(b==1)
    {
        c=a*1.8+32;
        printf("The Temperature is :%lf C",c);
    }else if(b==2)
    {
        c=(a-32)/1.8;
        printf("The Temperature is : %lf F",c);
    }else
    {
        printf("Not Found");
    }
    return 0;
}
