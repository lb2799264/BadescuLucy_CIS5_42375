/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 11, 2018, 5:00 PM
 * Purpose: Calculate miles driven per gallon
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
    int gallons, miles, milesPerGal;

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout << "This program calculates the number of miles that ";
    cout << "may be driven per gallon of gas.\n";
    cout << "What is the number of gallons the car can hold? ";
    cin >> gallons;
    cout << "How many miles can the car be driven with a full tank? ";
    cin >> miles;
    milesPerGal = miles / gallons;
    cout << "The number of miles that may be driven per gallon is " <<milesPerGal<<endl;
    
    //Exit program!
    return 0;
}