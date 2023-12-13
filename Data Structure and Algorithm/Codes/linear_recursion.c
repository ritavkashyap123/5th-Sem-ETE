#include <stdio.h>  
#define NUM 7  
int rec_num( int *arr, int n)  
{  
    if (n == 1)  
    {  
        return arr[0];  
        }     
    return Max_num (rec_num (arr, n-1), arr[n-1]);    
}  
// get the maximum number  
int Max_num (int n, int m)  
{  
    if (n > m)  
        return n;  
    return m;  
}  
int main ()  
{  
    // declare and initialize an array  
    int arr[NUM] = { 4, 8, 23, 19, 5, 35, 2};  
    int max = rec_num(arr, NUM); // call function  
    printf (" The maximum number is: %d\n", max); // print the largest number  
}  