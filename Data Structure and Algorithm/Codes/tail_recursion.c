#include <stdio.h>  
// function definition  
void fun1( int num)  
{  
    // if block check the condition  
    if (num == 0)  
        return;  
    else  
        printf ("\n Number is: %d", num); // print the number  
    return fun1 (num - 1);      // recursive call at the end in the fun() function   
}  
int main ()  
{  
    fun1(7); // pass 7 as integer argument  
    return 0;  
}  