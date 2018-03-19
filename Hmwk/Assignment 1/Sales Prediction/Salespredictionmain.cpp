/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3, 2018, 5:37 PM
 * Purpose:  Calculating profit
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float MLLN=1.0;//Million

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   totPct, //Percentage earned of total sales
            totSales, //total sales
            profit; //profit generated

    //Initial Variables
    totPct=0.58;//58% of total profit
    totSales=8.6*MLLN;
    
    //Map/Process Inputs to Outputs
    profit=totSales*totPct;
    
    //Display Outputs
    cout<<"Total Percentage = "<<totPct<<"%"<<endl;
    cout<<"Total Sales = $"<<totSales/MLLN<<" Million"<<endl;
    cout<<"Profit Generated = $"<<profit/MLLN<<" Million"<<endl;
    
    //Exit program!
    return 0;
}