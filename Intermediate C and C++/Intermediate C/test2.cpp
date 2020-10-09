/*Olivia Knight CSCI 2212-02 Test 2. Jewelery System*/
using namespace std;
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#define input_file "jewels.txt";
#define output_file "output.txt"
int main()
{
    cout<<"Welcome to the Jewelery Store System, created by Olivia Knight\n"<<endl;
    ifstream dataFile("jewels.txt");
    
    string gem,metal;
    double carat;
    double dcount=0,rcount=0,ocount=0,gcount=0,pcount=0,scount=0;
    double value;
    double grandtotal=0;
    int x;
    for(x=1;!dataFile.eof();++x)
    {
        dataFile>>gem>>metal>>carat;
        if(gem=="diamond")
        {
            ++dcount;
        }
        if(gem=="ruby")
        {
            ++rcount;
        }
        if(gem=="opal")
        {
            ++ocount;
        }
      //  if(gem!="diamond"||gem!="opal"||gem!="ruby")
       // {
            //cout<<"Error %s is not a valid gem\n"<<gem;
        //}
        if(metal=="gold")
        {
            ++gcount;
        }
        if(metal=="platinum")
        {
            ++pcount;
        }
        if(metal=="silver")
        {
            ++scount;
        }
        
        value=carat*((dcount*5000)+(rcount*8000)+(ocount*3000))+((gcount*1500)+(pcount*3000)+(scount*250));
        grandtotal+=value;
        
        cout<<"Your jewelery will be "<<metal<<" metal with a "<<carat <<" carat "<<gem<<" and the price is $"<<value<<"\n"<<endl;
        ofstream outFile("output.txt");
        outFile<<"Your jewelery will be "<<metal<<" metal with a "<<carat<<" carat "<<gem<< " and the price is $"<<value<<"\n"<<endl;
        
    }
    ofstream outFile("output.txt");
    outFile<<"The grand total of your purchases will be: $"<<grandtotal<<endl;
    cout<<"The grand total of your purchases will be: $"<<grandtotal<<endl;
    
    dataFile.close();
    
    outFile.close();
    cout<<"Program ended successfully\n";
    
    
}


