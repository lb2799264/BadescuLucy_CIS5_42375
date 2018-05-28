/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 27, 2018, 5:20 PM
 * Purpose: Verify lottery numbers to check if match winner
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int searchList(const int[], int, int);

//Execution Begins Here!

int main() {
    //Declare Variables
    const int SIZE= 18;
    int test[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                      8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                      1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int accNum;//to hold account number entered by user
    int result;
    
    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    result=searchList(test, SIZE, accNum);
    if (result==-1)
        cout<<"Invalid Number.\n";
    else
        cout<<"Number is Valid.\n";
    //Exit program!
    return 0;
}
int searchList(const int test[], int SIZE, int accNum)
{
    int index = 0;
    int pos=-1;
    bool found=false;
    
    cout<<"Enter 7 Digit Charge Account Number: ";
    cin>>accNum;
    while (index<SIZE && !found)
    {
        if (test[index]==accNum)
        {
            found=true;
            pos=index;
        }
        index++;
    }
    return pos;
}