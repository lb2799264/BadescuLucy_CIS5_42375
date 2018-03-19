/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3, 2018, 7:08 PM
 * Purpose:  Calculate Ocean rising levels
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   ocLvlYr, //Amount that Ocean level rises /year
            ocLvl5yr, //Ocean level in 5 years
            ocLvl7yr, //Ocean level in 7  years
            ocLvl10yr, //Ocean level in 10 years
            oc1, // 5 years
            oc2, // 7 years
            oc3; //10 years

    //Initial Variables
    ocLvlYr=1.5;//millimeters
    oc1=5;
    oc2=7;
    oc3=10;
    
    //Map/Process Inputs to Outputs
    ocLvl5yr=ocLvlYr*oc1;
    ocLvl7yr=ocLvlYr*oc2;
    ocLvl10yr=ocLvlYr*oc3;
    
    //Display Outputs
    cout<<"Ocean Level Rise = "<<ocLvlYr<<" Millimeters"<<" /year"<<endl;
    cout<<"Ocean Level Rise in 5 years = "<<ocLvl5yr<<" Millimeters"<<endl;
    cout<<"Ocean Level Rise in 7 years = "<<ocLvl7yr<<" Millimeters"<<endl;
    cout<<"Ocean Level Rise in 10 year = "<<ocLvl10yr<<" Millimeters"<<endl;
    
    //Exit program!
    return 0;
}