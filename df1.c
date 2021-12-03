// Area and circumference of circle
#include<stdio.h>
int circumference(int);
int circumference(int redius)
{
  float c;
  c=2*3.14*redius;
  printf("%2f\n",c);
}
int main()
{
   int redius,x;
   printf("Enter redius");
   scanf("%d",&redius);
   circumference(redius);
}
