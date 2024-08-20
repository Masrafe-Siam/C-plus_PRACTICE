#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter The 1st Number:");
    scanf("%d",&a);
    printf("Enter The 2nd Number:");
    scanf("%d",b);
    if(a%b==0){
        printf("The 1st Number is Muiltiple of 2nd");
    }else{
    printf("The 1st Number is not Multiplie of 2nd");
    }
    return 0;
}
