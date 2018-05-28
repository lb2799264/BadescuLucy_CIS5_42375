/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 26, 2018, 1:03 AM
 * Purpose: Calculate average monthly rainfall in a year. 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>// for string objects
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    const int RAIN = 12; //number of months
    string month[RAIN]= {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November",
                         "December"}; 
    float totRain[RAIN];//total monthly rain
    float anRain;//to hold total annual rain
    float avgRain;//to hold average rain
    float lowst;//to hold month with lowest rain
    string lMnth;//month with lowest rain
    float hgst;//to hold month with most rain
    string hMnth;//month with most rain
                         
    //Initial Variables
    hgst=totRain[0];

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Enter the total annual rainfall for each month.\n";
    for (int count=0; count<RAIN;count++)
    {
        cout<<month[count]<<": ";
        cin>>totRain[count];
        while (totRain[count]<0)
        {
            cout<<"Please enter a positive value: ";
            cin>>totRain[count];
        }
    }
    anRain=0;
    for (int count = 0; count<RAIN;count++)
    {
        anRain+=totRain[count];
    }
    cout<<setprecision(2)<<fixed;
    cout<<"Total rainfall for the year is: "<<anRain<<endl;
    avgRain=anRain/RAIN;
    cout<<"The average rainfall is: "<<avgRain<<endl;
    for (int count=1;count<RAIN;count++)
    {
        if (totRain[count] > hgst)
        {
            hMnth =month[count];
            hgst = totRain[count];
        } 
    }
    cout<<"The month with the most rain is: "<<hMnth<<endl;
    lowst=totRain[0];
    for (int count=1;count<RAIN;count++)
    {
        if (totRain[count] < lowst)
        {
            lMnth=month[count];
            lowst = totRain[count];
        }
    }
    cout<<"The month with the least rain is: "<<lMnth<<endl;
    
    

    //Exit program!
    return 0;
}