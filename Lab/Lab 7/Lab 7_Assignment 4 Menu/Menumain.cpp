/* 
  File:   main.cpp
  Author: Lucy Badescu
  Created on April 8, 2018, 11:45 PM
  Purpose:  Assignment 4 Menu Program
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    cout<<"End of program.\n";
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1 Sum of two Numbers"<<endl;
        cout<<"Type 2 for Problem 2 Membership Fee Increase"<<endl;
        cout<<"Type 3 for Problem 3 Population"<<endl;
        cout<<"Type 4 for Problem 4 Square Display"<<endl;
        cout<<"Type 5 for Problem 5 Ocean Levels"<<endl;
        cout<<"Type 6 for Problem 6 Calories Burned"<<endl;
        cout<<"Type 7 for Problem 7 Distance Traveled"<<endl;
        cout<<"Type 8 for Problem 8 Pennies For Pay"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                int val,//initial positive integer value
                    ranVal;//Random positive integer value entered by user
                
                //Display Outputs
                cout<<"This program gets the sum of all integers from 1 up to value entered.\n";
                cout<<"Please enter a positive integer value: ";
                cin>>ranVal; 
                for (int val=1;val<=ranVal;val++)
                {
                    cout<<val<<endl;
                }
                if (ranVal<0)
                {
                    cout<<"Invalid variable, please enter a positive integer value: ";
                    cin>>ranVal;
                }
                break;
            }
            case '2':{
                cout<<"We are in Problem 2"<<endl;
                float   mem,//membership cost per year
                        feeInc,//percentage increase
                        year,//to hold year
                        maxYr,//To hold max year
                        memInc;//To hold membership increase
                
                //Initial Variables
                mem=2500;//$2,500 membership cost per year
                feeInc=0.04;//4% fee increase per year
                maxYr=6;//Increase occurs in a period of 6 years
                
                //Display Outputs
                cout<<"This program calculates the new membership cost for country club for the next 6 years.\n";
                cout<<"Year | New Membership Cost\n";
                cout<<"----------------------------------\n";
                for (year=1;year<=maxYr;year++)
                {
                    memInc=mem*feeInc;
                    cout<<year<<"\t\t"<<"$"<<((memInc*year)+mem)<<endl;
                }
                break;
            }
            case '3':{
                cout<<"We are in Problem 3"<<endl;
                float   srtOrg,//to hold starting number of organisms
                        avgInc,//to hold the average daily population increase
                        numDays,//to hold number of days they will multiply
                        days,//to hold days
                        incPer,//to hold population increase percentage (converted)
                        inc;//to hold how much the population increases
                
                //Display Outputs
                cout<<"This program will predict the size of a population of organisms per day.\n";
                cout<<"Please enter the starting number of organisms: ";
                cin>>srtOrg;
                if (srtOrg<2)
                {
                    cout<<"Invalid number, please enter a larger starting organism size: ";
                    cin>>srtOrg;
                }
                cout<<"What is the average daily population increase (%)? ";
                cin>>avgInc;
                if (avgInc<0)
                {
                    cout<<"Invalid value, please enter a positive value: ";
                    cin>>avgInc;
                }
                cout<<"Please enter the number of days the organisms will multiply: ";
                cin>>numDays;
                if (numDays<1)
                {
                    cout<<"Invalid value, please enter a value greater than 1: ";
                    cin>>numDays;
                }
                cout<<"Day(s) | Population Size\n";
                cout<<"----------------------------------\n";
                incPer=avgInc*0.01;
                inc=srtOrg*incPer;
                for (days=1;days<=numDays;days++)
                {
                    cout<<days<<"\t\t"<<((inc*days)+srtOrg)<<endl;
                }
                break;
            }
            case '4':{
                cout<<"We are in Problem 4"<<endl;
                int    ranNum,//to hold a random number between 1 and 15
                       row;//to hold rows
                char x;//to hold x
                
                //Display Outputs
                cout<<"Please enter a positive integer no greater than 15: ";
                cin>>ranNum;
                if (ranNum>15 || ranNum <1)
                {
                    cout<<"Invalid value, please enter an integer between 1 and 15: ";
                    cin>>ranNum;
                }
                for (int row = 0;row<=ranNum;row++)
                {
                    for (char x=0;x<=ranNum;x++)
                    {
                        cout<<"x";
                        if (x > ranNum)
                        break;
                    }
                    cout<<endl;
                }
                break;
            }
            case '5':{
                cout<<"We are in Problem 5"<<endl;
                float   ocLvl,//Ocean Level rise per year
                        year,//to hold year 1
                        maxYr;//to hold max years 25
                
                //Initial Variables
                ocLvl=1.5;//Ocean levels rise 1.5 millimeters per year
                year=1;
                maxYr=25;
                
                //Display Outputs
                cout<<"Year(s) | Ocean Level Increase\n";
                cout<<"------------------------------------\n";
                while (year <= maxYr)
                {
                    cout<<year<<"\t\t"<<(year*ocLvl)<<" millimeters"<<endl;
                    year++;
                }
                break;
            }
            case '6':{
                cout<<"We are in Problem 6"<<endl;
                float   calBur,//Calories burned in a minute
                        min,//to hold minutes
                        maxMin;//To hold max minutes
                
                //Initial Variables
                calBur=3.6;//3.6 calories per minute burned
                maxMin=30;//max amount of minutes running in treadmill
                
                //Display Outputs
                cout<<"Minutes in treadmill | Calories Burned\n";
                cout<<"-------------------------------------------\n";
                for (min=5;min<=maxMin;min+=5)
                {
                    cout<<min<<" minutes"<<"\t\t"<<(min*calBur)<<" calories"<<endl;
        
                }
                break;
            }
            case '7':{
                cout<<"We are in Problem 7"<<endl;
                float   speed,//to hold speed of vehicle
                        hours,//to hold hours traveled
                        dist,//to hold distance
                        time;//to hold time
                
                //Display Outputs
                cout<<"This program displays distance traveled for each hour of given time period.\n";
                cout<<"Please enter the speed of your vehicle in miles per hour(mph): ";
                cin>>speed;
                cout<<"Please enter the amount of hours traveled: ";
                cin>>hours;
                if (speed<=0)
                {
                    cout<<"Invalid value for speed, please enter a value greater than 0: ";
                    cin>>speed;
                }
                if (hours<1)
                {
                    cout<<"Invalid time, please enter a value greater than 0 for hours traveled: ";
                    cin>>hours;
                }
                cout<<"Distance | Hours\n";
                cout<<"-------------------------------\n";
                for (time = 1; time<=hours; time++)
                {
                    dist=speed*time;
                    cout<<dist<<" miles"<<"\t\t"<<time<<" hour(s)"<<endl;
                }
                break;
            }
            case '8':{
                cout<<"We are in Problem 8"<<endl;
                float   penn,//to hold pennies
                        dayWrk,//Days worked
                        day,//to hold day
                        earn;//Earnings for each day

                //Initial Variables
                penn=0.01;//value of a penny
                day=1;
                
                //Display Outputs
                cout<<"This program calculates earnings per day if they were paid in pennies.\n";
                cout<<"How many days did you work? ";
                cin>>dayWrk;
                if (dayWrk<1)
                {
                    cout<<"Invalid value for days worked, please enter a value equal to or greater than 1: ";
                    cin>>dayWrk;
                }
                cout<<"Earnings | Day(s)\n";
                cout<<"----------------------\n";
                for (day=1;day<=dayWrk;day++,penn++)
                {
                    earn=penn*.02;
                    cout<<"$"<<setprecision(2)<<earn<<"\t\t"<<day<<endl;
                }
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='8');
    
    //Exit stage right!
    return 0;
}