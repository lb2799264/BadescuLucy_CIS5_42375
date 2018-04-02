/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on April 1, 2018, 2:20 AM
 * Purpose: Predict the size of a population of organisms
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
    float   srtOrg,//to hold starting number of organisms
            avgInc,//to hold the average daily population increase
            numDays,//to hold number of days they will multiply
            days,//to hold days
            incPer,//to hold population increase percentage (converted)
            inc;//to hold how much the population increases

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program will predict the size of a population of organisms per day.\n";
    cout<<"Please enter the starting number of organisms: ";
    cin>>srtOrg;
    if (srtOrg<2)
    {
        cout<<"Invalid number, please enter a larger starting organism size: ";
        cin>>srtOrg;
    }
    cout<<"What is the average daily population increase (%)? ";
    cin>>avgInc;
    if (avgInc<0)
    {
        cout<<"Invalid value, please enter a positive value: ";
        cin>>avgInc;
    }
    cout<<"Please enter the number of days the organisms will multiply: ";
    cin>>numDays;
    if (numDays<1)
    {
        cout<<"Invalid value, please enter a value greater than 1: ";
        cin>>numDays;
    }
    cout<<"Day(s) | Population Size\n";
    cout<<"----------------------------------\n";
    incPer=avgInc*0.01;
    inc=srtOrg*incPer;
    for (days=1;days<=numDays;days++)
    {
        cout<<days<<"\t\t"<<((inc*days)+srtOrg)<<endl;
    }
    
    //Exit program!
    return 0;
}