using namespace std;
#include <iostream>

int main()
{
    int i=0;
    for(char ascii=0;ascii<128&&i<128;ascii++)
    {
       cout<<ascii<<' ';
       i++;
       if(i%4==0)
       {
           cout<<"\t"<<"\n";
       }
    }
    
}