/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 20, 2018, 9:49 PM / Modified: March 28, 2018 12:58 PM
 * Purpose: Determine points awarded according to books purchased
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
    int     bkPur,//To hold books purchased by customer
            book0 = 0,//0 points
            book1 = 1,//5 points
            book2 = 2,//15 points
            book3 = 3,//30 points
            book4 = 4;//60 points

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Tell me how many books you purchased this month\n";
    cout<<"and I will tell you your points: ";
    cin>>bkPur;
    {
        if (bkPur <= book0)
            cout<<"You receive 0 points.\n";
        else if (bkPur == book1)
            cout<<"You receive 5 points.\n";
        else if (bkPur == book2)
            cout<<"You receive 15 points.\n";
        else if (bkPur == book3)
            cout<<"You receive 30 points.\n";
        else if (bkPur >= book4)
            cout<<"You receive 60 points.\n";
        
    }

    //Exit program!
    return 0;
}