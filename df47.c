// check whether a number is a pailindrom or not
#include<stdio.h>
void palindrom();
void palindrom()
{
  int n,sum=0,r,temp;
  printf("enter the number");
  scanf("%d",&n);
 while (n>0){
   r=n%10;
   sum=sum*10+r;
   n=n/10;
}
    if(temp==sum)
     printf("it's not a palindrom");
    else
     printf("it's palindrom");
      
}
int main()
{
palindrom();
return 0;
}
