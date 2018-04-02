/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 31, 2018, 2:30 AM
 * Purpose: Calculate calories burned in a treadmill in 30 minutes
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
    float   calBur,//Calories burned in a minute
            min,//to hold minutes
            maxMin;//To hold max minutes
            

    //Initial Variables
    calBur=3.6;//3.6 calories per minute burned
    maxMin=30;//max amount of minutes running in treadmill

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Minutes in treadmill | Calories Burned\n";
    cout<<"-------------------------------------------\n";
    for (min=5;min<=maxMin;min+=5)
    {
        cout<<min<<" minutes"<<"\t\t"<<(min*calBur)<<" calories"<<endl;
        
    }

    //Exit program!
    return 0;
}