//GCD and lcm of two numbers 
#include<stdio.h>
int gcdandlcm(int n1,int n2,int lcm,int gcd,int x,int y)
{
 
   while(n1!=n2){
     if(n1>n2)
     {
     n1=n1-n2;
     }
      else
      {
      n2=n2-n1;
      }
       printf("gcd = %d",n2);   
       gcd=n1;
       lcm=(x*y)/gcd;
       printf("lcm = %d",lcm);
       } 
       }   
int main(){
    int n1,n2,lcm,gcd,x,y;
    printf("enter n1");
    scanf("%d",&n1);
    printf("enter n2");
   scanf("%d",n2);
gcdandlcm(n1,n2,lcm,gcd,x,y);
}
