/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on April,1 2018, 11:38 PM
 * Purpose: Calculate and Display Body Mass Index
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    float   BMI,//to hold body mass index
            weight,//to hold weight
            height,//to hold height
            optWth,//to hold optimal weight
            unWth,//to hold underweight
            ovWth;//to hold overweight

    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"This program calculates your body mass index and tells you \n";
    cout<<"if your weight is optimal, under, or overweight.\n";
    cout<<"-------------------------------------------------\n";
    cout<<"Please enter your current weight in pounds: ";
    cin>>weight;
    cout<<"Please enter your current height in inches: ";
    cin>>height;
    BMI= (weight*703)/ pow(height,2.0);
    cout<<"Your BMI is: "<<BMI<<endl;
    if (BMI>=18.5&&BMI<=25)
    {
        cout<<"Optimal weight"<<endl;
    }
    if (BMI<18.5)
    {
        cout<<"You are Underweight"<<endl;
    }
    if (BMI>25)
    {
        cout<<"You are Overweight"<<endl;
    }

    //Exit program!
    return 0;
}