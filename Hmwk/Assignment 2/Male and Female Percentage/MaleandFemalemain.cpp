/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 11, 2018, 8:27 PM
 * Purpose: Calculate percentage of male v. female students in a class
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
    int     femStudts, maleStudts;//To hold Number of Students of each gender
    double  percOfMStudts, percOfFStudts,//To hold percentage of each group
            totStudts;//To hold total number of students
            
    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Number of male students in class? ";
    cin>>maleStudts;
    cout<<"Number of female students in class? ";
    cin>>femStudts;
    totStudts = maleStudts + femStudts;
    percOfMStudts = (maleStudts / totStudts)*100;
    percOfFStudts = (femStudts / totStudts)*100;
    cout<<"Percentage of the students that are male: "<<percOfMStudts<<"%"<<endl;
    cout<<"Percentage of the students that are female: "<<percOfFStudts<<"%"<<endl;

    //Exit program!
    return 0;
}