/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 31, 2018, 3:39 AM
 * Purpose: Calculate a car's travel distance
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
    float   speed,//to hold speed of vehicle
            hours,//to hold hours traveled
            dist,//to hold distance
            time;//to hold time

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program displays distance traveled for each hour of given time period.\n";
    cout<<"Please enter the speed of your vehicle in miles per hour(mph): ";
    cin>>speed;
    cout<<"Please enter the amount of hours traveled: ";
    cin>>hours;
    if (speed<=0)
    {
        cout<<"Invalid value for speed, please enter a value greater than 0: ";
        cin>>speed;
    }
    if (hours<1)
    {
        cout<<"Invalid time, please enter a value greater than 0 for hours traveled: ";
        cin>>hours;
    }
    cout<<"Distance | Hours\n";
    cout<<"-------------------------------\n";
    for (time = 1; time<=hours; time++)
    {
        dist=speed*time;
        cout<<dist<<" miles"<<"\t\t"<<time<<" hour(s)"<<endl;
    }
    

    //Exit program!
    return 0;
}