/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3, 2018, 6:53 PM
 * Purpose:  Calculate annual pay
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
    float   payAmt, //$ earned every pay period
            payPer, //Pay periods in a year
            annPay; //Total annual pay earned

    //Initial Variables
    payAmt=2200.0;//$2,200 every two weeks
    payPer=26;//26 pay periods in a year
    
    //Map/Process Inputs to Outputs
    annPay=payAmt*payPer;
    
    //Display Outputs
    cout<<"Pay Amount = $"<<payAmt<<endl;
    cout<<"Pay Period = "<<payPer<<" /year"<<endl;
    cout<<"Annual Pay = $"<<annPay<<endl;
    
    //Exit program!
    return 0;
}