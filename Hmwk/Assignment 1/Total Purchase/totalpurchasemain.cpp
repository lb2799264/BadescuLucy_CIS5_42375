/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3rd, 2018, 4:18 PM
 * Purpose:  Calculate the total of a purchase
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   prcIt1, //Price of Item 1
            prcIt2, //Price of Item 2
            prcIt3, //Price of Item 3
            prcIt4, //Price of Item 4
            prcIt5, //Price of Item 5
            subTot, //Total before tax
            taxPct, //Tax percentage of sub total
            taxAmt, //Amount to be paid in taxes
            purchTot; //Purchase total
            
    //Initial Variables
    prcIt1=15.95f;//$15.95
    prcIt2=24.95f;//$24.95
    prcIt3=6.95f;//$6.95
    prcIt4=12.95f;//$12.95
    prcIt5=3.95f;//%3.95
    taxPct=0.07f;//7% of sub total
    
    //Map/Process Inputs to Outputs
    subTot=prcIt1+prcIt2+prcIt3+prcIt4+prcIt5;
    taxAmt=subTot*taxPct;
    purchTot=subTot+taxAmt;
    
    //Display Outputs
    cout<<"Price of Item 1 = $"<<prcIt1<<endl;
    cout<<"Price of Item 2 = $"<<prcIt2<<endl;
    cout<<"Price of Item 3 = $"<<prcIt3<<endl;
    cout<<"Price of Item 4 = $"<<prcIt4<<endl;
    cout<<"Price of Item 5 = $"<<prcIt5<<endl;
    cout<<"Sub Total= $"<<subTot<<endl;
    cout<<"tax percentage = "<<taxPct<<"%"<<endl;
    cout<<"Tax Amount = $"<<taxAmt<<endl;
    cout<<"Purchase Total = $"<<purchTot<<endl;
     
    //Exit program!
    return 0;
}