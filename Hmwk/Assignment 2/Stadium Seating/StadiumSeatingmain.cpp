/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 11, 2018, 5:57 PM
 * Purpose: Calculate income generated based on tickets sold
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    int     tickets;
    double  ClassASold, ClassBSold, ClassCSold, total, 
            ClassA, ClassB, ClassC,//Cost of tickets
            ClassAtot, ClassBtot, ClassCtot;//Total tickets sold in each class
    
            
    //Initial Variables
    ClassA=15;
    ClassB=12;
    ClassC=9;
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    //Get the tickets that were sold in each class.
    cout << "How many tickets were sold in Class A? ";
    cin >> ClassASold;
    cout << "How many tickets were sold in Class B? ";
    cin >> ClassBSold;
    cout << "How many tickets were sold in Class C? ";
    cin >> ClassCSold;
    
    //Calculate the total sales.
    ClassAtot=ClassA*ClassASold;
    ClassBtot=ClassB*ClassBSold;
    ClassCtot=ClassC*ClassCSold;
    total = ClassAtot + ClassBtot + ClassCtot;
    
    //Display the sales figures.
    cout<<"\n sales figures\n";
    cout<<"----------------\n";
    cout<<setprecision(2) <<fixed;
    cout<<"Class A: $" <<setw(8)<<ClassAtot<<endl;
    cout<<"Class B: $" <<setw(8)<<ClassBtot<<endl;
    cout<<"Class C: $" <<setw(8)<<ClassCtot<<endl;
    cout<<"Total: $" <<setw(10)<<total<<endl;

    //Exit program!
    return 0;
}