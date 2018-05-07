/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 6:36 PM
 * Purpose: Calculate Future Value
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
float futureValue(float, float, float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float   preVal,//to hold present value of account(p)
            fuVal,//to hold future value(f)            
            mthRate,//to hold monthly interest rate (i)
            numMths;//to hold # of months (t)

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program calculates future value of an account\n";
    do 
    {
        cout<<"Enter account present value, monthly interest rate, and the\n";
        cout<<"number of months money will be left in account. Enter 0s to exit: ";
        cin>>preVal>>mthRate>>numMths;
        futureValue(preVal, mthRate, numMths);
        
    }while (preVal!=0 || mthRate!=0 || numMths!=0);
    
    //Exit program!
    return 0;
}
float futureValue(float preVal, float mthRate, float numMths)
{
    float i=mthRate/100;
    float fuVal= preVal*(pow((1+i),numMths));
    cout<<setprecision(2)<<fixed;
    cout<<"Future Value = $"<<fuVal<<endl;
    return fuVal;
}