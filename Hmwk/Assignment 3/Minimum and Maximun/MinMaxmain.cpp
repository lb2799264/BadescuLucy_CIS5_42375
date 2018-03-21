/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 20, 2018, 3:07 PM
 * Purpose: Determine which number is greater and which is smaller.
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
    int x,y;

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter a random number: ";
    cin>>x;
    cout<<"Enter another number: ";
    cin>>y;
    cout<<"--------------------------\n";
    cout<<"x is "<<x<<" and y is "<<y<<endl;
    if (x>y)
        cout<<"x is greater than y\n";
    if (x<y)
        cout<<"x is smaller than y\n";
    
    //Exit program!
    return 0;
}