/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 12, 2018, 8:29 PM
 * Purpose: Calculate the amount of insurance needed for a home
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
    double  repCostOfB,//To hold the replacement cost of a building
            minIns,//To hold minimum insurance needed
            minRec;//To hold the minimum suggested requirement %

    //Initial Variables
    minRec=0.8;//80% of the replacement cost of building

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter replacement cost of building: $";
    cin>>repCostOfB;
    minIns = repCostOfB*minRec;
    cout<<"Minimum amount of insurance needed: $"<<minIns<<endl;

    //Exit program!
    return 0;
}