/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 26, 2018, 2:39 AM
 * Purpose: Determining the smallest and largest values
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
    const int VALUES=10;
    int val[VALUES];
    int hgst;//to hold highest value
    int lowst;//to hold lowest value

    //Initial Variables
    hgst=val[0];

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter 10 different values and I will\n";
    cout<<"output the largest and smallest.\n";
    for (int count=0;count<VALUES;count++)
    {
        cout<<"value: ";
        cin>>val[count];
    }
    for (int count=0;count<VALUES;count++)
    {
        if (val[count] > hgst)
            hgst = val[count];
    }
    cout<<"The highest value is: "<<hgst<<endl;
    lowst=val[0];
    for (int count=0;count<VALUES;count++)
    {
        if (val[count] < lowst)
            lowst = val[count];
    }
    cout<<"The lowest value is: "<<lowst<<endl;
          

    //Exit program!
    return 0;
}