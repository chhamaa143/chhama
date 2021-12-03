//votting eligibility checker
#include<stdio.h>
int votting(int a)
{
         
          
	if (a>=18)
	{
		printf("Eigibal for voting");
	}
	else
	{
		printf("Not eligibal for voting\n");		
	}
}
	int main()
{		 
	int a;	
	printf("Enter the age of the person: ");
	scanf("%d",&a);
	votting(a);

	return 0;
}
