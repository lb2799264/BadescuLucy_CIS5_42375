/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 2:24 AM
 * Purpose: Fahrenheit to Celsius Table
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <cmath>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float celsius(float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float fah;//to hold temp in Fahrenheit
    float c;//to hold temp in celsius
    

    //Initial Variables
    

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Fahrenheit to Celsius Table\n";
    cout<<"  Fahrenheit     Celsius\n";
    cout<<"--------------------------------\n";
    for (fah=1; fah <=20; fah++)
    {
        celsius(fah);
    }

    //Exit program!
    return 0;
}
float celsius(float fah)
{
    float c = 0.5555555556*(fah-32);
    cout<<setprecision(1)<<fixed;
    cout<<setw(5)<<fah<<setw(17)<<c<<endl;
    return c;
}