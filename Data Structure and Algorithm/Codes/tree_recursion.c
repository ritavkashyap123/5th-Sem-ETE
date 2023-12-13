#include <stdio.h>  
// It is called multiple times inside the fibo_num function  
int fibo_num (int num)  
{  
if (num <= 1)  
    return num;  
return fibo_num (num - 1 ) + fibo_num(num - 2);  
}  
void main()  
{  
int num = 7;  
printf (" Use of Tree Recursion: \n");  
// print the number  
printf (" The Fibonacci number is: %d", fibo_num(7));  
}  