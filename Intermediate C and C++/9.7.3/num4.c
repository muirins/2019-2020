#include <stdio.h>

long term(long a, long d, long k) //The function that will compute the equation of the arithmetic series. 
{
    long arith_sum; //This variable will hold the answer provided by the equation. 
    arith_sum=a+(k-1)*d;
    return arith_sum
    
}
int main(void)
{
    long a;
    long d;
    long k;
    
    printf("Please enter the first term in the series\n"); //Prompts the user to enter a value for the variable a
    scanf("%l",&a);
    printf("Please enter the difference between the terms\n");//Prompts the user to enter a value for the variable d.
    scanf("%l",&d);
    
    for(k=0;k<100;k++)
    {
        term(a,d,k);
        if(k!=0&&k%5==0)
        {
            
        }
    }
}