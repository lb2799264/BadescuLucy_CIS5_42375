/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3, 2018, 6:35 PM
 * Purpose:  Calculating the average of values
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
    float   v1, //value 1
            v2, //value 2
            v3, //value 3
            v4, //value 4
            v5, //value 5
            sumOfVs, //Sum of all the values
            numbOfVs, //Number of Values
            avg; //Average of all the values

    //Initial Variables
    v1=28;
    v2=32;
    v3=37;
    v4=24;
    v5=33;
    numbOfVs=5;
    
    //Map/Process Inputs to Outputs
    sumOfVs=v1+v2+v3+v4+v5;
    avg=sumOfVs/numbOfVs;
    
    //Display Outputs
    cout<<"value 1 = "<<v1<<endl;
    cout<<"value 2 = "<<v2<<endl;
    cout<<"value 3 = "<<v3<<endl;
    cout<<"value 4 = "<<v4<<endl;
    cout<<"value 5 = "<<v5<<endl;
    cout<<"Sum of Variables = "<<sumOfVs<<endl;
    cout<<"Number of Variables = "<<numbOfVs<<endl;
    cout<<"Average of Values = "<<avg<<endl;
    
    //Exit program!
    return 0;
}