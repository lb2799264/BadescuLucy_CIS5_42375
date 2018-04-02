/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on April 1, 2018, 3:27 AM
 * Purpose: Display a square with "x"
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    int     ranNum,//to hold a random number between 1 and 15
            row;//to hold rows
    char x;//to hold x

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Please enter a positive integer no greater than 15: ";
    cin>>ranNum;
    if (ranNum>15 || ranNum <1)
    {
        cout<<"Invalid value, please enter an integer between 1 and 15: ";
        cin>>ranNum;
    }
    for (int row = 0;row<=ranNum;row++)
    {
        for (char x=0;x<=ranNum;x++)
        {
            cout<<"x";
            if (x > ranNum)
                break;
        }
        cout<<endl;
    }

    //Exit program!
    return 0;
}