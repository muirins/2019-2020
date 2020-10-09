/*Olivia Knight CSCI 2212-02 Page 380 Figure 12.35: Magic Memo Maker
April 8,2020 */
using namespace std;
#include <iostream>
#include <string>

#define N 4 //Memo menu choices count
#define BOSS "Leland Power"

string menItems[]={"P Promote","T Trip","F Fire", "Q Done"}; //Creates an array for the menu, uses the nickname that we just made
string valid("PpTtFfQq");//Valid choices

char doMenu(string title, int n, string menItems[],string valid);  //These are two prototypes for functions that will be used in main
void compose(string name, string re, string event);

int main(void)
{
    char memo;
    string re, event;
    string name;

    cout<<"\n Magic Memo Maker\n";
    for(;;) //Question for professor: Why is this possible? What's the point of using the semicolons in the for definition?
    {
        char ch=doMenu("Next memo:",N,menItems,valid);
        memo= toupper(ch);
        if(memo=='Q') break;

        switch(memo)
        {
            case 'P': re="Promotion";
                    event="You are being promoted to Assistant Manager.";
                    break;
            case 'T': re="Trip";
                    event="You have won a trip to Hawaii!";
                    break;
            case 'F': re="Downsizing";
                    event="You're fired.\n Please pick up your final paycheck from personnel.";
                    break;

        }
        cout << "Enter name: ";
        cin >> ws;
        getline(cin,name);
        compose(name,re,event);
    }
    return 0;
}

void compose(string name, string re,string event)
{
    int extra, last;
    string lname=name;

    cout <<"\n\n To "<< name << "\n From: The Big Boss\n";
    cout << "Re:" << re << "\n\n";

    extra=name.find_first_of(',');
    if(extra!=string::npos)lname=name.substr(0,extra);
    last=lname.find_last_of(',');
    if(last!=string::npos)lname=lname.substr(last+1);

    cout << "Dear M." << lname << ":\n" << event << "\n\n -- " << BOSS << "\n\n";
}

char doMenu(string title, int n, string menItems[], string valid)
{
    char ch;

    cout <<"\n" << title << "\n\n";
    for(;;)
    {
        for(int k=0; k<n; ++k) cout<<"\t" << menItems[k] <<"\n";
        cout<< "\n Enter code of desired item:";
        cin >> ch;
        if(valid.find_first_of(ch)!=string::npos)
        {
            break;
            cin.ignore(255);
            cout << "Illegal choice or input error; try again\n";
        }

    }
    return ch;
}