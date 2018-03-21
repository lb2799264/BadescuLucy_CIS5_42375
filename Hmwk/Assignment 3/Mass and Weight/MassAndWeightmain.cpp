/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 20, 2018, 9:14 PM
 * Purpose: Calculate an objects weight
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    double mass, weight;

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter the object's mass: ";
    cin>>mass;
   
    if (weight > 1000)
    {
        cout<<"This object is too heavy, please enter a lighter weight.\n";
    }
    else
    {
        if (weight < 10)
        {
            cout<<"This object is too light, please enter a heavier weight.\n";
        }
        else
        {
            weight = mass*9.8;
            cout<<"The object's weight is: "<<weight<<endl;
        }
    }
    //Exit program!
    return 0;
}