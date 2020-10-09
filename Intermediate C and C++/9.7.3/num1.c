#include <stdio.h>
#include <math.h>

double formula(int x)
{
  double ans;
  ans=sqrt((3*x)+1);
  return ans;
}
int main(void)
{
    double sum;
    int b;
    for(b=0;b<1000;b++)
    {
      sum=formula(b);
      if(b!=0&&b%50==0)
      {
        printf("%g\n",sum);
      }
    }
    return 0;
}