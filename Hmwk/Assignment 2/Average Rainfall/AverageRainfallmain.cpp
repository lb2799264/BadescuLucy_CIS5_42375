/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 11, 2018, 7:45 PM
 * Purpose: Calculate the average rainfall in 3 months
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    double  m1Rain, m2Rain, m3Rain,//To hold the amount of rain in inches
            average;//To hold the average rain
    string  month1, month2, month3;//To hold the name of the month

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter first month name: ";
    cin>>month1;
    cout<<"Enter amount of rain in inches: ";
    cin>>m1Rain;
    cout<<"Enter second month name: ";
    cin>>month2;
    cout<<"Enter amount of rain in inches: ";
    cin>>m2Rain;
    cout<<"Enter third month name: ";
    cin>>month3;
    cout<<"Enter amount of rain in inches: ";
    cin>>m3Rain;
    average= (m1Rain + m2Rain + m3Rain) / 3;
    cout<<"--------------------\n";
    cout<<"The average rainfall for "<<month1<<", "<<month2<<" and "<<month3<<" is: "<<average<<" inches"<<endl;
               
    //Exit program!
    return 0;
}