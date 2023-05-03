#include <stdio.h>
#define pf printf
#define sf scanf
void main() {
 float a[10],sum=0,sumstd=0,mean,std,*ptr;
 int i,n;
 
 pf("Enter n \n");
 sf("%d",&n);
 
 pf("Enter array elements \n");
 for(i=0;i<n;i++)
 {
     sf("%f",&a[i]);
 }
 
 ptr=a;
 for(i=0;i<n;i++)
 {
     sum+=*ptr;
     ptr++;
 }
 mean=sum/n;
 
 ptr=a;
 for(i=0;i<n;i++)
 {
     sumstd+=pow((*ptr-mean),2);
     ptr++;
 }
 std=sqrt(sumstd/n);

 pf("sum=%.3f \n",sum);
 pf("mean=%.3f \n",mean);
 pf("std div=%.3f \n",std);

 }