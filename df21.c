// Leap year
#include<stdio.h>
int leapyear();
int leapyear(int year)
{
if (year%4==0)
  printf("Leap year");
 else
    printf("not Leap year");
}
int main()
{
int year;
 printf("Enter year");
 scanf("%d",&year);
leapyear (year);
}
