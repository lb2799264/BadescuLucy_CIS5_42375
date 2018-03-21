/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 20, 2018, 8:05 PM
 * Purpose: Convert numbers 1-10 into Roman numbers
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
    const int romI = 1,   romVI = 6,
              romII = 2,  romVII = 7,
              romIII = 3, romVIII = 8,
              romIV = 4,  romIX = 9,
              romV = 5,   romX = 10;
    int numb;//To hold a random number (1-10)
             
    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter a number between 1 & 10 and I will\n";
    cout<<"convert it into a Roman number:\n";
    cin>>numb;
    if (numb == romI)
    {
        cout<<"Is equal to Roman number I.\n";
    }
    else
    {
        if (numb == romII)
        {
            cout<<"Is equal to Roman number II.\n";
        }
        else
        {
            if (numb == romIII)
            {
                cout<<"Is equal to Roman number III.\n";
            }
            else
            {
                if (numb == romIV)
                {
                    cout<<"Is equal to Roman number IV.\n";
                }
                else
                {
                    if (numb == romV)
                    {
                        cout<<"Is equal to Roman number V.\n";
                    }
                    else
                    {
                        if (numb == romVI)
                        {
                            cout<<"Is equal to Roman number VI.\n";
                        }
                        else
                        {
                            if (numb == romVII)
                            {
                                cout<<"Is equal to Roman number VII.\n";
                            }
                            else
                            {
                                if (numb == romVIII)
                                {
                                    cout<<"Is equal to Roman number VIII.\n";
                                }
                                else
                                {
                                    if (numb == romIX)
                                    {
                                        cout<<"Is equal to Roman number IX.\n";
                                    }
                                    else
                                    {
                                        if (numb == romX)
                                        {
                                            cout<<"Is equal to Roman number X.\n";
                                        }
                                        else
                                        {
                                            if(numb > romX)
                                            {
                                                cout<<"Invalid number, please enter another\n";
                                                cout<<"number between 1 and 10.\n";
                                            }
                                            else
                                            {
                                                if (numb < romI)
                                                {
                                                   cout<<"Invalid number, please enter another\n";
                                                   cout<<"number between 1 and 10.\n"; 
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    //Exit program!
    return 0;
}