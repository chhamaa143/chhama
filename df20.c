//  Greatest of two number
 #include<stdio.h>  
      
    int biggest(int, int); //  function prototype  
      
    int main()  
    {  
        int a, b;  
      
        printf("Enter 2 integer numbers\n");  
        scanf("%d%d", &a, &b);  
      
        // function call biggest(a, b)  
        printf("Biggest of %d and %d is %d\n", a, b, biggest(a, b));  
      
        return 0;  
    }  
      
    //function definition  
    int biggest(int x, int y)  
    {  
        return( x>y?x:y );  
    }  



