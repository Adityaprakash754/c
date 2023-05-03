#include<stdio.h>
void main(){
    int u;
    float a;
    char name[20];
    
    printf("enter name and units \n");
    scanf("%s %d",name,&u);
    
    if(u<=200)
    a=u*.8;
    else if (u>200 && u<=300)
    a=200*.8+(u-200)*.9;
    else
    a=200*.8+100*.9+(u-300)*1;
    
    a+=100;
    if(a>=400)
    a+=(a*15)/100;
    
    printf("the name of consumer is %s , units consumed is %d, total amount is %.3f ",name,u,a);
}