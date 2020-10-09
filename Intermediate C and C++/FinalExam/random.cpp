using namespace std;
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    vector<int>count(1000);
    int ones=0,twos=0,threes=0,fours=0,fives=0;
    srand(time(NULL));
    
    for(int i=0;i<count.size();i++)
    {
        count[i]=rand()%5+1;
        if(count[i]==1)
        {
            ones++;
        }
        if(count[i]==2)
        {
            twos++;
        }
        if(count[i]==3)
        {
            threes++;
        }
        if(count[i]==4)
        {
            fours++;
        }
        if(count[i]==5)
        {
            fives++;
        }
    }
    cout<<"Ones: "<<ones<<"\n"<<"Twos: "<<twos<<"\n"<<"Threes: "<<threes<<"\n"<<"Fours: "<<fours<<"\n"<<"Fives: "<<fives<<
    "\n";
    return 0;
}