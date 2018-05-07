/* 
  File:   main.cpp
  Author: Lucy Badescu
  Created on May 6, 2018, 7:24 PM
  Purpose:  Homework Assignment 5 Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath> // for math
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
float stockProfit(float, float, float, float, float);
float presentValue(float, float);
float futureValue(float, float, float);
float celsius(float);
float fallingDistance(float);
float kinEnergy(float, float);
int coinToss();
void calculateRetail(float, float);
float popSize(float, float, float, float);

//Executable code begins here!!!

int main(int argc, char** argv) {
    //Declare Variables
    char choice;

    //Loop on the menu
    do {
        cout << "End of program.\n";
        //Input values
        cout << "Choose from the list" << endl;
        cout << "Type 1 for Stock Profit problem." << endl;
        cout << "Type 2 for Present Value problem." << endl;
        cout << "Type 3 for Future Value problem." << endl;
        cout << "Type 4 for Celsius Temperature Table." << endl;
        cout << "Type 5 for Falling Distance Table." << endl;
        cout << "Type 6 for Kinetic Energy problem." << endl;
        cout << "Type 7 for Coin Toss problem." << endl;
        cout << "Type 8 for Markups problem." << endl;
        cout << "Type 9 for Population problem."<<endl;
        cout << "Type any other character to exit" << endl;
        cin>>choice;

        //Switch to determine the Problem
        switch (choice) {
            case '1':
            {
                //Declare Variables
                float   ns,//number of shares
                        sp,//sale price per share
                        pc,//purchase commission paid
                        sc,//sale commission paid
                        pp;//purchase price per share
                //Display Outputs
                cout<<"This program calculates stock profits(+)/(loses(-))\n";
                cout<<"Enter #of Shares, purchase price per share, purchase commission\n";
                cout<<"paid, sale price per share, and the sale commission paid: ";
                cin>>ns>>pp>>pc>>sp>>sc;
                stockProfit(ns, pp, pc, sp, sc);
            }
            break;
            case '2':
            {
                float   preVal,//to hold present value (p)
                        fuVal,//to hold future value(f)            
                        anRate,//to hold annual interest rate (r)
                        numYrs;//to hold # of years money will be left in account (n)
                //Display Outputs
                cout<<"This program calculates present value for a future value of $10,000\n";
                do 
                {
                    cout<<"Enter annual interest rate, and number of years money\n";
                    cout<<"will be left in account. Enter 0 to exit: ";
                    cin>>anRate>>numYrs;
                    presentValue(anRate, numYrs);
                
                }while (anRate!=0 && numYrs!=0);
                break;
            }
            case '3':
            {
                //Declare Variables
                float   preVal,//to hold present value of account(p)
                        fuVal,//to hold future value(f)            
                        mthRate,//to hold monthly interest rate (i)
                        numMths;//to hold # of months (t)
                //Display Outputs
                cout<<"This program calculates future value of an account\n";
                do 
                {
                    cout<<"Enter account present value, monthly interest rate, and the\n";
                    cout<<"number of months money will be left in account. Enter 0s to exit: ";
                    cin>>preVal>>mthRate>>numMths;
                    futureValue(preVal, mthRate, numMths);
                
                }while (preVal!=0 || mthRate!=0 || numMths!=0);
                break;
            }
            case '4':
            {
                //Declare Variables
                float fah;//to hold temp in Fahrenheit
                float c;//to hold temp in celsius
                //Display Outputs
                cout<<"Fahrenheit to Celsius Table\n";
                cout<<"  Fahrenheit     Celsius\n";
                cout<<"--------------------------------\n";
                for (fah=1; fah <=20; fah++)
                {
                    celsius(fah);
                }
                break;
            }
            case '5':
            {
                //Declare Variables
                float g;
                float time;
                //Display Outputs
                cout<<"  Falling Distance Table\n";
                cout<<"  Time           Distance\n";
                cout<<"--------------------------------\n";
                for (time=1; time <=10; time++)
                {
                    cout<<setw(5)<<time<<"s";
                    fallingDistance(time);
                }
                break;
            }
            case '6':
            {
                //Declare Variables
                float mass;//to hold mass
                float vel;//to hold velocity
                //Display Outputs
                cout<<"Please enter the following information: \n";
                kinEnergy(mass, vel);
                break;
            }
            case '7':
            {
                int choice;//to hold player choice
                unsigned seed = time(0);
                srand(seed);
                //Display Outputs
                cout<<"Heads = 1, Tails = 2\n";
                cout<<"Times the coin will be tossed: ";
                cin>>choice;
                for (int toss=1;toss<=choice;toss++ )
                {
                    coinToss();
                }
                break;
            }
            case '8':
            {
                //Declare Variables
                float   cost,//to hold wholesale cost
                        conPer,//to hold converted percentage value
                        mkPer;//to hold mark up percentage
                //Display Outputs
                cout<<"Please enter products wholesale cost and mark up percentage: ";
                cin>>cost>>mkPer;
                while (cost < 0 || mkPer <0)
                {
                    cout<<"Invalid input, please enter a positive value.\n";
                    cin>>cost>>mkPer;
                }
                calculateRetail(cost, mkPer);
                break; 
            }
            case '9':
            {
                //Declare Variables
                float   stSize,//to hold population starting size (p)
                        anBth,//to hold annual birth rate (B)
                        anDth,//to hold annual death rate (D)
                        numYrs;//to hold number of years to display(in this case 1).
                //Display Outputs
                cout<<"This program calculates population size increase.\n";
                cout<<"Enter starting population size, annual birth rate, annual \n";
                cout<<"death rate and the number of years to display: ";
                cin>>stSize>>anBth>>anDth>>numYrs;
                while (stSize<2 || anBth<0 || anDth<0 || numYrs<1)
                {
                    cout<<"Invalid input please re-enter your values: ";
                    cin>>stSize>>anBth>>anDth>>numYrs;
                }
                popSize(stSize, anBth, anDth, numYrs);
            }
            break;
            default:
                cout << "You are exiting the program" << endl;
        }
    }while (choice >= '1' && choice <= '9');

    //Exit stage right!
    return 0;
}
float stockProfit(float ns, float pp, float pc, float sp, float sc)
{
    float profit= ((ns*sp)-sc)-((ns*pp)+pc);
    cout<<setprecision(2)<<fixed;
    cout<<"Stock profit/loss = $"<<profit<<endl;
    return profit;
}
float presentValue(float anRate, float numYrs)
{
    float fuVal=10000;
    float r=anRate/100;
    float preVal= fuVal/pow((1+r),numYrs);
    cout<<setprecision(2)<<fixed;
    cout<<"Present Value = $"<<preVal<<endl;
    return preVal;
}
float futureValue(float preVal, float mthRate, float numMths)
{
    float i=mthRate/100;
    float fuVal= preVal*(pow((1+i),numMths));
    cout<<setprecision(2)<<fixed;
    cout<<"Future Value = $"<<fuVal<<endl;
    return fuVal;
}
float celsius(float fah)
{
    float c = 0.5555555556*(fah-32);
    cout<<setprecision(1)<<fixed;
    cout<<setw(5)<<fah<<setw(17)<<c<<endl;
    return c;
}
float fallingDistance(float time)
{
    float d = 0.5*(9.8*pow(time, 2));
    cout<<setprecision(1)<<fixed;
    cout<<setw(17)<<d<<"m"<<endl;
    return d;
}
float kinEnergy(float mass, float vel)
{
    cout<<"Object's mass (kg) and velocity (m/s): ";
    cin>>mass>>vel;
    float KE=0.5*(mass*pow(vel,2));
    cout<<setprecision(1)<<fixed;
    cout<<"Kinetic Energy = "<<KE<<" J"<<endl;
    return KE;
}
int coinToss ()
{
    const int MX_VL=1;
    const int MIN_VL=0;
    int t = (rand()%(MX_VL - MIN_VL +1)) + MX_VL;
    cout<<t<<endl; 
}
void calculateRetail(float cost, float mkPer)
{
    float conPer=mkPer/100;
    cout<<setprecision(2)<<fixed;
    cout<<"The retail price is: $"<<((cost*conPer)+cost)<<endl;
}
float popSize(float stSize, float anBth, float anDth, float numYrs)
{
    float B=anBth/100;
    float D=anDth/100;
    float Pop= stSize+(B*stSize)-(D*stSize);
    float newPop=Pop*numYrs;
    cout<<"New Population size: "<<newPop<<endl;
    return newPop;
}