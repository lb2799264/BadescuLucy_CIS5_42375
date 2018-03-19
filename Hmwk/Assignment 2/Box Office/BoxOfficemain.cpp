/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 12, 2018, 12:12 AM
 * Purpose: Calculate box office profits
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <string>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    int     adultTSold, kidTSold;//To hold tickets sold
    double  adultTTot, kidTTot,//To hold money made from each sale 
            adultT, kidT,//To hold price of adult and kid tickets
            grossPro, netPro,//To hold gross and net box office profits
            amPaidDist;//To hold amount paid to distributor
    string  nameOfMov;//To hold name of the movie

    //Initial Variables
    adultT=10.00;
    kidT=6.00;

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"What is the name of the movie? ";
    getline(cin, nameOfMov);
    cout<<"Adult tickets sold: ";
    cin>>adultTSold;
    cout<<"Kid tickets sold: ";
    cin>>kidTSold;
    
    adultTTot = adultTSold*adultT;
    kidTTot = kidTSold*kidT;
    grossPro = adultTTot + kidTTot;
    netPro = grossPro*0.2;
    amPaidDist = grossPro - netPro;
    
    cout<<setprecision(2)<<fixed;
    cout<<"Gross Box Office Profit: "<<setw(8)<<"$"<<grossPro<<endl;
    cout<<"Net Box Office Profit: "<<setw(10)<<"$"<<netPro<<endl;
    cout<<"Amount Paid to Distributor: "<<setw(5)<<"$"<<amPaidDist<<endl;
    

    //Exit program!
    return 0;
}