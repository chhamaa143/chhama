//Find number is armstrong or not
#include<stdio.h>
void armstrong();
void armstrong()
{
   int n, r,sum,temp;
   printf("Enter the nuber/n");
   scanf("%d",&n);
   temp=n;
     do
     {
      r=n%10;
      sum=sum+r*r;
      n=n/10; 
     }
 while (n!=0);
    if(sum==temp)
     printf("armstrong");
    else
     printf("not armstrong");
}
    int main()
    {
    armstrong();
    return 0;
    }
