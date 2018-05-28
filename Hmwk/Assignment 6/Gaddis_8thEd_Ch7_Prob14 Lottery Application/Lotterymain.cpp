/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 27, 2018, 2:30 AM
 * Purpose: Simulate a Lottery
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>//for rand
#include <ctime>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    const int NUMBERS = 5;//Number of numbers 
    const int MX_VL=9;
    int loto[NUMBERS];//to hold lottery numbers
    int user[NUMBERS];//to hold the player's numbers
    unsigned seed =time(0);
    srand(seed);
    bool match = true;
    int count =0;
    
 
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    for (int num=0;num<NUMBERS;num++)
    {
        cout<<"Please enter a number (0-9): ";
        cin>>user[num];
    }
    for (int num=0;num<NUMBERS;num++)
    {
        loto[num]=1+rand()%MX_VL;
    }
    cout<<endl;
    cout<<"Your numbers: ";
    for (int num=0;num<NUMBERS;num++)
    {
        cout<<user[num]<<" ";
    }
    cout<<endl;
    cout<<"Lottery #s: ";
    for (int num=0;num<NUMBERS;num++)
    {
        cout<<loto[num]<<" ";
    }
    cout<<endl;
    while (match && count<NUMBERS)
    {
        if (loto[count] != user[count])
            match = false;
        count++;
    }
    if (match)
        cout<<"Grand Prize Winner.\n";
    else 
        cout<<"Not a Winner.\n";

    //Exit program!
    return 0;
}