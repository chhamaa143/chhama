//count number of digits of an integer
#include <stdio.h>
void aninteger();
void aninteger()
{
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
  do 
  {
    n /= 10;
    ++count;
  } 
  while (n != 0)

  printf("Number of digits: %d", count);
  }
int main() 
{
void aninteger();
return 0;
}
