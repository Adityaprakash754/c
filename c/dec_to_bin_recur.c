// using recursion 

#include <stdio.h>
int con(int);

int main(void) {
    int bin,dec,res;
    printf("enter the decimal number \n");
    scanf("%d", &dec);
    
    res=con(dec);
    printf("the binary of %d is %d \n", dec, res);
    
}

int con(int dec)
{
    if (dec==0)
    return 0;
    else
    return dec%2+10*con(dec/2);
}
