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
    const int SIZE= 10;
    int test[SIZE] = {13579, 26791, 26792, 33445, 55555,
                      62483, 77777, 79422, 85647, 93121};
    int winner;//to hold winner number entered by user
    int result;
    
    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    result=searchList(test, SIZE, winner);
    if (result==-1)
        cout<<"Not a Winner.\n";
    else
         cout<<"Winner.\n";

    //Exit program!
    return 0;
}
int searchList(const int test[], int SIZE, int winner)
{
    int index = 0;
    int pos=-1;
    bool found=false;
    
    cout<<"Enter 5 Digit Winning Number: ";
    cin>>winner;
    while (index<SIZE && !found)
    {
        if (test[index]==winner)
        {
            found=true;
            pos=index;
        }
        index++;
    }
    return pos;
}