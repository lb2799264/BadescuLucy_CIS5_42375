/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 5:00 PM
 * Purpose: Calculate Stock Profit
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float stockProfit(float, float, float, float, float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float   ns,//number of shares
            sp,//sale price per share
            pc,//purchase commission paid
            sc,//sale commission paid
            pp;//purchase price per share

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program calculates stock profits(+)/(loses(-))\n";
    cout<<"Enter #of Shares, purchase price per share, purchase commission\n";
    cout<<"paid, sale price per share, and the sale commission paid: ";
    cin>>ns>>pp>>pc>>sp>>sc;
    stockProfit(ns, pp, pc, sp, sc);

    //Exit program!
    return 0;
}
float stockProfit(float ns, float pp, float pc, float sp, float sc)
{
    float profit= ((ns*sp)-sc)-((ns*pp)+pc);
    cout<<setprecision(2)<<fixed;
    cout<<"Stock profit/loss = $"<<profit<<endl;
    return profit;
}