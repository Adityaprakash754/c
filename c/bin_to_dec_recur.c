//using recursion

#include <stdio.h>
int con(int);

int main(void) {
    int bin,dec,res;
    printf("enter the binary number \n");
    scanf("%d", &bin);
    
    res=con(bin);
    printf("the decimal of %d is %d \n", bin,res);
    
}

int con(int bin)
{
    if (bin==0)
    return 0;
    else
    return bin%10+2*con(bin/10);
}