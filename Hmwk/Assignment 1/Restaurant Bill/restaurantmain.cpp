/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3rd, 2018, 2:59 PM
 * Purpose:  Restaurant Bill tax and tip calculation
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   mPrice, //Meal Price in $'s
            tax, //Tax percentage of meal price
            tip, //Tip percentage to be taken from meal price after tax
            txAmt, //Tax Amount to be paid in $'s
            tpAmt, //Tip amount to be paid in $'s after tax
            totBill; //Bill total to be paid
            
    //Initial Variables
    mPrice=88.67f;//$88.67
    tax=0.0665f;//6.65% of meal price
    tip=0.20f;//20% of meal price after tax
    
    //Map/Process Inputs to Outputs
    txAmt=mPrice*tax;
    tpAmt=(mPrice+txAmt)*tip;
    totBill=mPrice+txAmt+tpAmt;
    
    //Display Outputs
    cout<<"Meal Price = $"<<mPrice<<endl;
    cout<<"tax percentage = "<<tax<<"%"<<endl;
    cout<<"tip percentage = "<<tip<<"%"<<endl;
    cout<<"Tax Amount = $"<<txAmt<<endl;
    cout<<"Tip Amount = $"<<tpAmt<<endl;
    cout<<"Total Bill = $"<<totBill<<endl;
     
    //Exit program!
    return 0;
}