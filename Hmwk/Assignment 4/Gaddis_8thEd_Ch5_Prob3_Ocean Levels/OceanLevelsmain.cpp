/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 31, 2018, 2:06 AM
 * Purpose: Calculate ocean level rise in 25 years
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
    float   ocLvl,//Ocean Level rise per year
            year,//to hold year 1
            maxYr;//to hold max years 25

    //Initial Variables
    ocLvl=1.5;//Ocean levels rise 1.5 millimeters per year
    year=1;
    maxYr=25;

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Year(s) | Ocean Level Increase\n";
    cout<<"------------------------------------\n";
    while (year <= maxYr)
    {
        cout<<year<<"\t\t"<<(year*ocLvl)<<" millimeters"<<endl;
        year++;
    }
    

    //Exit program!
    return 0;
}