/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 4:35 PM
 * Purpose: Falling Distance Table
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
float fallingDistance(float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float g;
    float time;
    

    //Initial Variables
    

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"  Falling Distance Table\n";
    cout<<"  Time           Distance\n";
    cout<<"--------------------------------\n";
    for (time=1; time <=10; time++)
    {
        cout<<setw(5)<<time<<"s";
        fallingDistance(time);
    }

    //Exit program!
    return 0;
}
float fallingDistance(float time)
{
    float d = 0.5*(9.8*pow(time, 2));
    cout<<setprecision(1)<<fixed;
    cout<<setw(17)<<d<<"m"<<endl;
    return d;
}