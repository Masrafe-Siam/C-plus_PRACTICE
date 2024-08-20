#include<stdio.h>
int main()
{
    int q,w,e,r,t;
    printf("Enter The 1st number:");
    scanf("%d",&q);
    printf("Enter The 2nd Number:");
    scanf("%d",w);
    e=q/w;
    r=e*w;
    t=q-r;
    printf("The result is %d\nThe Remainder is %d",e,t);
    return 0
}
