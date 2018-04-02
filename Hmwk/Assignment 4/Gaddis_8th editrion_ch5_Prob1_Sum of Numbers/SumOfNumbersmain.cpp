/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 31, 2018, 12:48 AM
 * Purpose: Get the sum of integers up to number entered
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
    int     val,//initial positive integer value
            ranVal;//Random positive integer value entered by user

    //Initial Variables;
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program gets the sum of all integers from 1 up to value entered.\n";
    cout<<"Please enter a positive integer value: ";
    cin>>ranVal; 
    for (int val=1;val<=ranVal;val++)
    {
        cout<<val<<endl;
    }
    if (ranVal<0)
    {
        cout<<"Invalid variable, please enter a positive integer value: ";
        cin>>ranVal;
    }
    cout<<"End of program.\n";
    
    //Exit program!
    return 0;
}