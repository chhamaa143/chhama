//display fibonacci series
#include<stdio.h>
void fabonicci();
void fabonicci()
{
  int a,b,c,n;
  a=1,b=1;
  printf("Enter limit");
  scanf("%d",&n);
    do
    {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    n--;
    }
      while(n!=0);
int main(){
   fabonicci();
       return 0;
}
}
