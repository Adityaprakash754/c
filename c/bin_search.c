#include<stdio.h>

void main(){
    int n, a[100],i,key,high,low,mid,loc;
    loc=-1;
    
    printf("enter n ");
    scanf("%d",&n);
    
    printf("enter elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("enter key ");
    scanf("%d",&key);
    
    low=0;
    high=n-1;
    
    while(low<=high){
        mid=(low+high)/2;
        if(key==a[mid])
        {
            loc=mid+1;
            break;
        }
        else{
            
         if(key<a[mid])
         high=mid-1;
         else
         low=mid+1;
        }
    }
    if(loc>=0)
    printf("loc=%d",loc);
    else
    printf("not found");
}