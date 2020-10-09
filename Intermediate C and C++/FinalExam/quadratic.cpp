using namespace std;
#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>
#define output_file "roots.txt";
double quadratic_equation(int a, int b, int c)
{
    double root1,root2;
    root1= (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    root2= (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    ofstream outFile("roots.txt"); 
    outFile<<"The roots are "<<root1 <<" and "<<root2<<endl;
    outFile.close();
    return root1;
}

int main()
{
    int a=1, b=5, c=4;
    quadratic_equation(a,b,c);
}