/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 31, 2018, 2:56 AM
 * Purpose: Show country club membership fee increase in a span of 6 years
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
    float   mem,//membership cost per year
            feeInc,//percentage increase
            year,//to hold year
            maxYr,//To hold max year
            memInc;//To hold membership increase

    //Initial Variables
    mem=2500;//$2,500 membership cost per year
    feeInc=0.04;//4% fee increase per year
    maxYr=6;//Increase occurs in a period of 6 years
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program calculates the new membership cost for country club for the next 6 years.\n";
    cout<<"Year | New Membership Cost\n";
    cout<<"----------------------------------\n";
    for (year=1;year<=maxYr;year++)
    {
        memInc=mem*feeInc;
        cout<<year<<"\t\t"<<"$"<<((memInc*year)+mem)<<endl;
    }
    
    //Exit program!
    return 0;
}