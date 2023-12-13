#include <stdio.h>    
int fact(int num)    
{    
   int res = 1, i;  
    
    for (i = 2; i <= num; i++)  
        res *= i;  
    return res;  
}   
  
int main()    
{    
    int num, f;    
    printf("Enter any number: ");    
    scanf("%d", &num);    
    f = fact(num);    
    printf("factorial = %d", f);    
}    