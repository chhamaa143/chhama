// number is divisible by 11 using (vedic math)
#include<stdio.h>
void divisible();
void divisible()
{
 int a,b,n,evensum=0,oddsum=0,div;
 printf("enter a number");
 scanf("%d",&n);
 a=n;
 b=n/10;
while(a>0)
 {
  oddsum=oddsum+(a%10);
  a=a/10;
}
  while(b>0)
{
   evensum=(evensum+(b%10));
   b=b/10;
}
   div=(evensum-oddsum);
   if(div%11==0)
    printf("The number is divisible by 11");
   else
    printf("The number is not divisible by11");
int main()
{
divisible();
return 0;
}
}

 
