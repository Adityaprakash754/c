#include<stdio.h>

void main(){
    int i,j,a[50],n,temp;
    
    printf("enter n ");
    scanf("%d",&n);
     printf("elements ");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }
     }
    printf("sorted array ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
}