/divison by 5 nd 11
#include<stdio.h>
int main()
{

    int number = 0;
    printf("enter a number\n");
    scanf("%d", &number);
    if (number%5==0 && number%11==0) 
    printf("entered number is divisiable by 5 and 11\n",number);
    else
    printf("entered number is not divisiable by 5 and 11\n",number); 
}
