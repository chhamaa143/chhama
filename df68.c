//Reverse a Number with do while
#include <stdio.h>
int main()
{
    int num, reverse = 0;
    printf("Enter any number to get the reverse number: ");
    scanf("%d", &num);
    do
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
      while(num != 0);
    printf("Reverse number is = %d", reverse);
    return 0;
}
