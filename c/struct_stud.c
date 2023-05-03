
#include <stdio.h>
#define pf printf
#define sf scanf
struct student
{
    char usn[50];
    char name[50];
    int marks;
    
} s[10];

void main() {
 int i,n,countav=0,countbv=0;
 float sum,avg;
  pf("Enter no of students \n");
  sf("%d",&n);
  
  for(i=0;i<n;i++)
  {
  pf("Enter usn \n");
  sf("%s",s[i].usn);
  
  pf("Enter name \n");
  sf("%s",s[i].name);
  
  pf("Enter marks \n");
  sf("%d",&s[i].marks);
  
  pf("\n");
  }
  
  for(i=0;i<n;i++)
  {
      pf("usn:%s \n",s[i].usn);
      pf("name:%s \n",s[i].name);
      pf("marks:%d \n",s[i].marks);
      pf("\n");
  }
  
  for(i=0;i<n;i++)
  {
      sum+=s[i].marks;
  }
  avg=sum/n;
  
  pf("average=%f \n",avg);
  
  for(i=0;i<n;i++)
  {
      if(s[i].marks>=avg)
      countav++;
      else
      countbv++;
  }
  
  pf("students above avg=%d \n",countav);
  pf("students below avg=%d \n",countbv);

 }