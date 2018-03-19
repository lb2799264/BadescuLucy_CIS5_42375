/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3, 2018, 7:51 PM
 * Purpose: Calculate miles traveled per gallon
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
    float   maxGall, //Total Amount of gallons car holds
            maxDistTr, //Greatest Distance traveled with full tank
            mpg; //Miles Traveled /gallon
            
    //Initial Variables
    maxGall=15;//15 gallons
    maxDistTr=375;//375 miles
    
    //Map/Process Inputs to Outputs
    mpg=maxDistTr/maxGall;
    
    //Display Outputs
    cout<<"Total Gallons car holds = "<<maxGall<<" Gallons"<<endl;
    cout<<"Greatest Distance traveled = "<<maxDistTr<<" Miles"<<endl;
    cout<<"Miles Traveled per Gallon = "<<mpg<<" Miles"<<endl;
    
    //Exit program!
    return 0;
}