//find a grade of given marks of (find a grade of given marks using switch case )
#include<stdio.h>
void switch(){
   int marks;
   printf("Enter your marks\n");
   scanf("%d",&marks);
 switch(marks/10);
 {
 case 10;
 case 9;
    printf("pass with 'A' grade\n");
    break;
 case 8;
 case 7;
     printf("pass with 'B' grade\n");
     break;
 case 6;
 case 5;
     printf("pass with 'C' grade\n");
     break;
 case 4;
     printf("pass with 'D' grade\n");
     break;
 default;
     printf("you are not pass pls give again exam");
     
 }
}
int main()
{
  switch();
   return 0;
}
