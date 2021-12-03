//Area of triangle
#include<stdio.h>
int triangle(int,int);
int triangle(int b,int h)
{
   float area;
   area=(b*h)/2;
   printf("%.2f",area);
}
int main()
{
  int b,h;
  printf("Enter brith");
  scanf("%d",&b);
  printf("Enter hight");
  scanf("%d",&h);
  triangle(b,h);
}
