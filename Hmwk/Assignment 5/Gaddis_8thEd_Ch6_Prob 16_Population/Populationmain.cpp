/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 7:00 PM
 * Purpose: Calculate the size of a population for a year.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float popSize(float, float, float, float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float   stSize,//to hold population starting size (p)
            anBth,//to hold annual birth rate (B)
            anDth,//to hold annual death rate (D)
            numYrs;//to hold number of years to display(in this case 1).

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program calculates population size increase.\n";
    cout<<"Enter starting population size, annual birth rate, annual \n";
    cout<<"death rate and the number of years to display: ";
    cin>>stSize>>anBth>>anDth>>numYrs;
    while (stSize<2 || anBth<0 || anDth<0 || numYrs<1)
    {
        cout<<"Invalid input please re-enter your values: ";
        cin>>stSize>>anBth>>anDth>>numYrs;
    }
    popSize(stSize, anBth, anDth, numYrs);

    //Exit program!
    return 0;
}
float popSize(float stSize, float anBth, float anDth, float numYrs)
{
    float B=anBth/100;
    float D=anDth/100;
    float Pop= stSize+(B*stSize)-(D*stSize);
    float newPop=Pop*numYrs;
    cout<<"New Population size: "<<newPop<<endl;
    return newPop;
}