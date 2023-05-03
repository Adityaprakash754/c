#include<stdio.h>
void main(){
    int i,degree;
    float x,sum=0,term,nume, deno;
    printf("enter degree ");
    scanf("%d",&degree);
    
    x=(degree*3.142)/180;
    nume=x;
    deno=1;
    i=2;
    do{
        term=nume/deno;
        sum+=term;
        nume=-nume*x*x;
        deno=deno*i*(i+1);
        i+=2;
    }
    while(fabs(term)>=0.00001);
    
    printf("sine series of %d is %.3f \n",degree,sum);
    printf("org series of %d is %.3f ",degree,sin(x));
    
}