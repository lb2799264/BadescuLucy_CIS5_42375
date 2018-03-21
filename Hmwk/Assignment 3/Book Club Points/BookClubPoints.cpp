/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 20, 2018, 9:49 PM
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
    int     bookspurch,//To hold books purchased by customer
            book0 = 0,//0 pts
            book1 = 1,//5 pts
            book2 = 2,//15 pts
            book3 = 3,//30 pts
            book4 = 4;//60 points

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Tell me how many books you purchased this month\n";
    cout<<"and I will tell you your points ";
    cin>>bookspurch;
    {
        if (bookspurch <= book0)
            cout<<"You receive 0 points.\n";
        else if (bookspurch == book1)
            cout<<"You receive 5 points.\n";
        else if (bookspurch == book2)
            cout<<"You receive 15 points.\n";
        else if (bookspurch == book3)
            cout<<"You receive 30 points.\n";
        else if (bookspurch >= book4)
            cout<<"You receive 60 points.\n";
        
    }

    //Exit program!
    return 0;
}