/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 11:34 AM
 * Purpose: Coin Toss
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>
#include <ctime>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int coinToss();

//Execution Begins Here!

int main() {
    //Declare Variables
    int choice;//to hold player choice
    unsigned seed = time(0);
    srand(seed);
   

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Heads = 1, Tails = 2\n";
    cout<<"Times the coin will be tossed: ";
    cin>>choice;
    for (int toss=1;toss<=choice;toss++ )
    {
        coinToss();
    }

    //Exit program!
    return 0;
}
int coinToss ()
{
    const int MX_VL=1;
    const int MIN_VL=0;
    int t = (rand()%(MX_VL - MIN_VL +1)) + MX_VL;
    cout<<t<<endl;
    
}