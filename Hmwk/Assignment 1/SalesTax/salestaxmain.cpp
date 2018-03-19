/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 3, 2018, 5:49 PM
 * Purpose:  Calculating total sales tax on a purchase
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
    float   purch, //purchase total pre tax
            stTax, //State sales tax %
            ctyTax,//County Sales Tax %
            stTaxAmt, //Total paid in State sales Tax
            ctyTaxAmt, //Total paid in County sales tax
            saleTaxTot; //Total paid in sales tax

    //Initial Variables
    purch=95;//$95
    stTax=0.04;//4% of purchase
    ctyTax=0.02;//2% of purchase
    
    //Map/Process Inputs to Outputs
    stTaxAmt=purch*stTax;
    ctyTaxAmt=purch*ctyTax;
    saleTaxTot=stTaxAmt+ctyTaxAmt;
    
    //Display Outputs
    cout<<"Purchase Total= $"<<purch<<endl;
    cout<<"State Sales Tax = "<<stTax<<"%"<<endl;
    cout<<"County Sales Tax = "<<ctyTax<<"%"<<endl;
    cout<<"State Sales Tax Amount = $"<<stTaxAmt<<endl;
    cout<<"County Sales Tax Amount = $"<<ctyTaxAmt<<endl;
    cout<<"Total Sales Tax = $"<<saleTaxTot<<endl;
    
    //Exit program!
    return 0;
}