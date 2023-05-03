// using loop

#include <stdio.h>
#include<math.h>


int main(void) {
    int dec , num , res=0 ,i=0;
    printf("enter the decimal number \n");
    scanf("%d", &dec);
    
    while(dec!=0)
    {
        num=dec%2;
        res+=num*pow(10,i);
        i++;
        dec=dec/2;
    }
    
    printf("binary=%d ", res);
      
}