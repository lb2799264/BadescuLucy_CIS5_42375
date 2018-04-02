/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 20, 2018, 8:55 PM / Modified March 28,2018, 12:38 PM
 * Purpose: Calculate the area of two rectangles and determine which is larger
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
    float  len1,//length of rectangle 1
           width1,//width of rectangle 1
           area1,//area of rectangle 1
           len2,//length of rectangle 2
           width2,//Width of rectangle 2
           area2;//area of rectangle 2

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter the length of first rectangle: ";
    cin>>len1;
    cout<<"Enter the width of first rectangle: ";
    cin>>width1;
    cout<<"Enter the length of the second rectangle: ";
    cin>>len2;
    cout<<"Enter the width of the second rectangle: ";
    cin>>width2;
    area1=len1*width1;
    area2=len2*width2;
    cout<<"---------------------------------------------------\n";
    cout<<"The area of the first rectangle is: "<<area1<<endl;
    cout<<"The area of the second rectangle is: "<<area2<<endl;
    if (area1 > area2)
        cout<<"The first rectangle is greater than the second rectangle.\n";
    if (area2 > area1)
        cout<<"The second rectangle is greater than the first rectangle.\n";
    if (area1 == area2)
        cout<<"Both rectangles have the same area.\n";

    //Exit program!
    return 0;
}