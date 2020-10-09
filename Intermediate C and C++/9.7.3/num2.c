#include <stdio.h>
#include <math.h>

double f1(int n, double x) //This is the first formula 
{
  double ans1;
  ans1=(exp(sqrt(n*x)))*sin(n*x); //Will calculate e^square root of n times x times sine of n*x
  return ans1; //returns the value
}
double f2(int n, double x) //The second formula
{
  double ans2;
  ans2=(exp(sqrt(n*x)))*cos(n*x); //Calculates e^square root of n times x times cosine of n*x
  return ans2; //returns the value
}

int main(void)
{
    int n; 
    double x;
    double answer1;
    double answer2;
    printf("please enter a value for x\n");
    scanf("%lg",&x); //will take the input for the value of x that will be used in the formulas
    if(x<0.1||x>2.5) //prints an error message if the x value isnt within the bounds of 0.1-2.5 and will take another input. 
    {

        printf("Error:Please enter a value from 0.1 to 2.5\n");
        scanf("%lg",&x);
      
    }
    for(n=0;n<30;n++) //will complete both formulas and print out the results 30 times. 
    {
        answer1=f1(n,x);
        answer2=f2(n,x);
        printf("%g \t %g \n",answer1,answer2);
    }
    return 0; //ends the program
}