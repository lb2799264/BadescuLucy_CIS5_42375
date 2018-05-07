/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 6:10 PM
 * Purpose: Calculate Present Value
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
float presentValue(float, float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float   preVal,//to hold present value (p)
            fuVal,//to hold future value(f)            
            anRate,//to hold annual interest rate (r)
            numYrs;//to hold # of years money will be left in account (n)

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program calculates present value for a future value of $10,000\n";
    do 
    {
        cout<<"Enter annual interest rate, and number of years money\n";
        cout<<"will be left in account. Enter 0 to exit: ";
        cin>>anRate>>numYrs;
        presentValue(anRate, numYrs);
        
    }while (anRate!=0 && numYrs!=0);
    
    

    //Exit program!
    return 0;
}
float presentValue(float anRate, float numYrs)
{
    float fuVal=10000;
    float r=anRate/100;
    float preVal= fuVal/pow((1+r),numYrs);
    cout<<setprecision(2)<<fixed;
    cout<<"Present Value = $"<<preVal<<endl;
    return preVal;
}