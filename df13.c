// area of circle
#include<stdio.h>
int circle(int);
int circle(int redius)
{
  float c;
  c=3.14*redius*redius;
  printf("%2f\n",c);
}
int main()
{
   int redius,x;
   printf("Enter redius");
   scanf("%d",&redius);
   circle(redius);
}
