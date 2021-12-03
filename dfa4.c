// print "I am IDIOT" instead of your name using
#include<stdio.h>
void array()
{
char ch[]="I AM IDIOT";
char c='A';
int i=0;
  printf("write your quote \n");
   while(c);
    {
    printf("%c\a",ch[i]);
     i++;
     if(i>14)
     {
     printf(" ");
     i=0;
     }
    
    }
}
  int main()
  {
  array();
  return 0;
  }
