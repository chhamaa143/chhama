//convert all input string simultaneously into asterisk(*)
#include<stdio.h>
void array()
{
char ch[]="****";
char c='A';
int i=0,j;
  printf("write your quote \n\n");
   while(c)
    {
    
    printf("%c\a",ch[i]);
     i++;
     if(i==14)
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
