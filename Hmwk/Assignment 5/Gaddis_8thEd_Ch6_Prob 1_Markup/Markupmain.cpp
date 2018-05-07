/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 5th, 2018, 6:51 PM
 * Purpose: Calculate new Markup price.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip> //for setprecision
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void calculateRetail(float, float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float   cost,//to hold wholesale cost
            conPer,//to hold converted percentage value
            mkPer;//to hold mark up percentage

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Please enter products wholesale cost and mark up percentage: ";
    cin>>cost>>mkPer;
    while (cost < 0 || mkPer <0)
    {
        cout<<"Invalid input, please enter a positive value.\n";
        cin>>cost>>mkPer;
    }
    calculateRetail(cost, mkPer);
    

    //Exit program!
    return 0;
}

void calculateRetail(float cost, float mkPer)
{
    float conPer=mkPer/100;
    cout<<setprecision(2)<<fixed;
    cout<<"The retail price is: $"<<((cost*conPer)+cost)<<endl;
}