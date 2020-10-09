/*Olivia Knight CSCI 2212-02 Final Project*/
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>

#define output_file "winning_numbers.txt";
#define input_file "winning_numbers.txt";
// -------------------------------------------- Part 1 ---------------------------------------------------//
void random_generation(vector<int>win) //Creates the random winning numbers and puts them into a text file.
{
    srand(time(NULL));//Setting the seed so that the vector can be filled with random numbers
    ofstream outFile("winning_numbers.txt"); //Opens the file that will hold the winning numbers
    for(int i=0;i<win.size();i++)
    {
        win[i]=rand()%999;//Will choose a number between 0-999 to go into the win vector.

        outFile<<win[i]<<"\n";//Outputs the winning numbers to the winning_numbers text file.

    }
    outFile.close();

}

void insertion_sort(vector<int>win) //Sorts the numbers chosen by the random_generation function and puts them back in the file.
{
    ifstream dataFile("winning_numbers.txt");
    for(int x=0;!dataFile.eof();++x) //Uses the numbers obtained from the random_generation function and assigns them to the vector so it can be used in this function
    {
        dataFile>>win[x];
    }
    ofstream outFile("winning_numbers.txt");
    int j, key;
    for (int i = 0; i < win.size(); i++) //Insertion sorts the numbers and puts this new order back into the file.
    {
        key = win[i];
        j = i - 1;

        while (j >= 0 && win[j] >key)
        {
            win[j + 1] = win[j];
            j = j - 1;
        }
        win[j + 1] = key;
        outFile<<key<<"\n";
    }
    outFile.close();
    dataFile.close();
}
//---------------------------------Part 2---------------------------------------//
int check_for_win(int ID,vector<int>wins)//This function will check if the last 3 of the ID is a winning number
{
    int last_3;
    ifstream dataFile("winning_numbers.txt");
    for(int b=0;!dataFile.eof();++b) //Uses the numbers obtained from the random_generation function and assigns them to the vector
    {
        dataFile>>wins[b];
    }
    dataFile.close();

    last_3=ID%1000;//this will take the last 3 digits of the student ID
    for(int k=0;k<wins.size();k++) //This loop will check the last 3 digits of the ID and see if it matches with anything in the wins vector
    {
        if(last_3==wins[k])
        {

            return 1;
        }
    }

}
int main()
{
    vector<int> winners(50);//this is the vector used in all of the functions
    random_generation(winners); //Calling this function so that the random numbers can be generated
    insertion_sort(winners); //This will sort the generated numbers.

    int student_ID;
    int max_wins=0;
    int cont; //This is a variable that makes sure that the user can input another digit and that the max wins can be 10.
    cout<<"Welcome to SuccessForAll. Please log in with your 6 digit Student ID"<<"\n"; //Welcomes and instructs the user
    cin>>student_ID; //The user inputs a 6 digit ID
    if(check_for_win(student_ID,winners)==1)//This will check if the function returned a 1 so that max_wins can be counted properly and if the user won
    {
        cout<<"Congratulations! You've won the weekly prize!\n";
        max_wins++;//Adding one to this variable so that the user can only win 10 times a week.
    }
    else
    {
        cout<<"Unfortunately you did not win. Please try again next week!\n";
    }

    cout<<"Enter 1 to continue, 0 to quit\n"; //Asking the user to input a value so that they can continue to enter IDs if needed.
    cin>>cont;
    if(cont==0)
    {
        return 0;
    }
    while(cont=1)
    {
        if(max_wins<10)
        {
            cout<<"Welcome to SuccessForAll. Please log in with your 6 digit Student ID"<<"\n";
            cin>>student_ID;
            if(check_for_win(student_ID,winners)==1)
            {
                cout<<"Congratulations! You've won the weekly prize!\n";
                max_wins++;
            }
            else
            {
                cout<<"Unfortunately you did not win. Please try again next week!\n";
            }
            cout<<"Enter 1 to continue, 0 to quit\n";
            cin>>cont;
            if(cont==0)
            {
                return 0;
            }
        }
        else
        {
            cout<<"Sorry, the maximum amount of wins for the week have been reached. Please try again later.\n";
            return 0;
        }

    }

}