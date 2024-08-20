#include<stdio.h>
int main()
{
    double a,s,d,f;
    printf("Enter The Radius:");
    scanf("%if",&a);
    s=3.1416;
    d=s*a*a;
    f=2*s*a;
    printf("The Area of The Circle is %lf\nThe Circum of the Circle is %lf",d,f);
    return 0;
}
