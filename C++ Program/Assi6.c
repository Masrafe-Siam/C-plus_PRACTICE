#include<stdio.h>
int main()
{
    int s,t;
    printf("Enter The Salary:");
    scanf("%d",&s);
    if(s>=9000){
        t=s*40/100;
        printf("The Tax=%d",t);
    }else if(7500<=s && s<=8999){
    t=s*30/100;
    printf("The Tax=%d",t);
    }else if(s<7500){
    t=s*20/100;
    printf("The Tax=%d",t);
    }



}
