/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 20, 2018, 10:14 PM
 * Purpose: Calculate the charge for long distance calls
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
    double stime,//start time of call
            mins,//minutes the call took
            maxMins = 00.59,//max minutes
            maxTime = 23.59;//max time

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Starting time of the call in HH.MM format: ";
    cin>>stime;
    cout<<"How many minutes did the call last? Use HH.MM format: ";
    cin>>mins;
    
    if (stime > 23.59)
    {
        cout<<"Invalid time, please run the program again and enter correct time.\n";
    }    
    else if(mins >00.00 && mins <= 06.59)
    {
        cout<<"There will be a charge of 0.05.\n";
    }
    else if (mins >=07.00 && mins <=19.00)
    {
        cout<<"There will be a charge of 0.45.\n";
    }
    else if (mins >=19.01 && mins <=23.59)
    {
        cout<<"There will be a charge of 0.20.\n";
    }
    if (mins > 00.59)
    {
        cout<<"Invalid time, please run the program again and enter correct time.\n";
    }
    //Exit program!
    return 0;
}