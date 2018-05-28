/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 26, 2018, 3:26 AM
 * Purpose: Display numbers larger than N
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int showValue(int);

//Execution Begins Here!

int main() {
    //Declare Variables
    const int SIZE=100000;//size of the array
    int nVal;//value of n
    int vals[SIZE];
    int count=0;
    int num;//number to be entered by user

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Please enter the value of 'n': ";
    cin>>nVal;
    cout<<"Enter a number or -1 to stop: ";
    cin>>num;
    while (num!=-1&&count<SIZE)
    {
        count++;
        vals[count-1]=num;
        cout<<"Enter a number or -1 to stop: ";
        cin>>num;
    }
    cout<<endl;
    cout<<"Values greather than n: ";
    for (int index=0;index<count;index++)
    {
        if (vals[index]>nVal)
        {
            showValue(vals[index]);
        }
        
    }
    
    
    //Exit program!
    return 0;
}
int showValue(int vals)
{
    cout<<vals<<" ";
    
}