/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3, 2018, 5:37 PM
 * Purpose:  Adding two numbers
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
    float   x, //variable 1
            y, //variable 2
            total;

    //Initial Variables
    x=50;
    y=100;
    
    //Map/Process Inputs to Outputs
    total=x+y;
    
    //Display Outputs
    cout<<"variable 1 = "<<x<<endl;
    cout<<"variable 2 = "<<y<<endl;
    cout<<"total = "<<total<<endl;
    
    //Exit program!
    return 0;
}