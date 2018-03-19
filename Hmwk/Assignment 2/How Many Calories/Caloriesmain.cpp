/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 12, 2018, 2:14 PM
 * Purpose: Calculate calories consumed from a bag of cookies
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
    int     cookies,//To hold number of cookies eaten
            cals,//To hold the calories in one cookie
            totCals;//To hold total calories consumed

    //Initial Variables
    cals = 100;//One cookie is 100 calories in a bag of 30 cookies with a serving
               //size of 3 cookies equal to 300 calories. (10 servings in bag).
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"How many cookies did you eat? ";
    cin>>cookies;
    totCals=cookies*cals;
    cout<<"Calories consumed: "<<totCals<<" calories"<<endl;
    
    //Exit program!
    return 0;
}