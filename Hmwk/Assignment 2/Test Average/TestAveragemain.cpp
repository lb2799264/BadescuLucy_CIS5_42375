/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 11, 2018, 7:14 PM
 * Purpose: Calculate the average of test scores
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    double test1, test2, test3, test4, test5, average;

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter the first test score: ";
    cin>>test1;
    cout<<"Enter the second test score: ";
    cin>>test2;
    cout<<"Enter the third test score: ";
    cin>>test3;        
    cout<<"Enter the fourth test score: ";
    cin>>test4;
    cout<<"Enter the fifth test score: ";
    cin>>test5;
    average=(test1 + test2 + test3 + test4 + test5) / 5.0;
    cout<<"The average test score is: "<<average<<endl;
    
    //Exit program!
    return 0;
}