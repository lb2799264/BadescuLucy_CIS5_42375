/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 12, 2018, 2:40 PM
 * Purpose: Diamond Pattern
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    double loan, ins, gas, oil, tires, maint, totMonth, totAnn;

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Monthly loan payment: $";
    cin>>loan;
    cout<<"Monthly Insurance Payment: $";
    cin>>ins;
    cout<<"Monthly gas payment: $";
    cin>>gas;
    cout<<"Monthly oil payment: $";
    cin>>oil;
    cout<<"Monthly tires payment: $";
    cin>>tires;
    cout<<"Monthly maintenance payment: $";
    cin>>maint;
    
    totMonth = loan + ins + gas + oil + tires + maint;
    totAnn = totMonth*12;
    
    cout<<"Total Monthly Payment: $"<<totMonth<<endl;
    cout<<"Total Annual Payment: $"<<totAnn<<endl;

    //Exit program!
    return 0;
}