#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age between 1-18:");
    scanf("%d",&a);
    if(a>=1 && a<=11){
        printf("child");
    }else if(a>=12 && a<=18)
    {
        printf("Teeneger");
    }
    return 0;
}
