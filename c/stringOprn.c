#include<stdio.h>

int length(char s[]);
void cmp(char s1[] , char s2[]);
char conc(char s1[] , char s2[]);


int main (void){
    int l1;
    char s1[100],s2[50],c;
    
    
    printf("enter s1 \n");
    gets(s1);
    
    printf("enter s2 \n");
    gets(s2);
    
    l1=length(s1);
    printf("length of string1=%d \n", l1);
    
    cmp(s1,s2);
    
    c=conc(s1 , s2);
    printf("concatenated string is \n");
    puts(s1);
}

int length(char s[])
{
    int i , len;
    len=0;
    for(i=0;s[i]!='\0';i++)
    len++;
    
    return len;
}

void cmp(char s1[] , char s2[])
{
    if(length(s1) !=length(s2))
    printf("strings are. not equal\n");
    else
    for(int i=0;s1[i]!='\0';i++)
    {
        if (s1[i]!=s2[i])
        { 
            printf("Strings are unequal\n");
            return;
        }
        else
        printf("strings are equal\n");
        return;
    }
}

char conc(char s1[] , char s2[])
{
    int i =length(s1);
    int j;
    for(j=0;s2[j]!='\0';j++,i++)
    {
    s1[i]=s2[j];
    }
    return s1;
}