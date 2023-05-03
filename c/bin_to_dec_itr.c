// using loop

#include <stdio.h>
#include<math.h>
int con(int);

int main(void) {
    int bin , num , res=0 ,i=0;
    printf("enter the binary number \n");
    scanf("%d", &bin);
    
    while(bin!=0)
    {
        num=bin%10;
        res+=num*pow(2,i);
        i++;
        bin=bin/10;
    }
    
    printf("decimal= %d ", res);
    
   
}