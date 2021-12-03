//Find A Generic Root Of Number
#include <stdio.h> 
int main()
{
  int number, sum, remainder; 
  printf("\n Please Enter any number\n");
  scanf("%d", &number); 
  while(number >= 10)
  {
    for (sum=0; number > 0; number= number/10)
    {
      remainder = number % 10;
      sum=sum + remainder;  
    }
    if(sum >= 10)
    {
      number = sum;
    }
    else
    {
      printf("\n The Generic Root of a Given Number = %d", sum);
      
    }
  } 
  return 0;
}
