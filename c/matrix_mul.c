
#include<stdio.h>
void main(){
    int i,j,m,n,p,q,k;
    int a[5][5],b[5][5],c[5][5];
    printf("enter m,n,p,q ");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    
    printf("enter a matrix ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    
    printf("enter b matrix ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
          c[i][j]=0;
          for(k=0;k<q;k++)
          {
              c[i][j]+=a[i][k]*b[k][j];
          }
        }
    }
   for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
        printf("%d \t",c[i][j]);
        }
         printf("\n");
    } 
  
 }
