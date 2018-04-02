/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on April 1, 2018, 12:59 AM
 * Purpose: Calculate earnings if user got paid pennies
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    float   penn,//to hold pennies
            dayWrk,//Days worked
            day,//to hold day
            earn;//Earnings for each day

    //Initial Variables
    penn=0.01;//value of a penny
    day=1;

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program calculates earnings per day if they were paid in pennies.\n";
    cout<<"How many days did you work? ";
    cin>>dayWrk;
    if (dayWrk<1)
    {
        cout<<"Invalid value for days worked, please enter a value equal to or greater than 1: ";
        cin>>dayWrk;
    }
    cout<<"Earnings | Day(s)\n";
    cout<<"----------------------\n";
    for (day=1;day<=dayWrk;day++,penn++)
    {
        earn=penn*.02;
        cout<<"$"<<setprecision(2)<<earn<<"\t\t"<<day<<endl;
    }
    //Exit program!
    return 0;
}