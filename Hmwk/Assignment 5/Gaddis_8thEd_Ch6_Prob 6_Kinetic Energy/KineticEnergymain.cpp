/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 6, 2018, 3:48 PM
 * Purpose: Calculate Kinetic Energy
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>//for pow function
#include <iomanip>//for setprecision
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float kinEnergy(float, float);

//Execution Begins Here!

int main() {
    //Declare Variables
    float mass;//to hold mass
    float vel;//to hold velocity

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Please enter the following information: \n";
    kinEnergy(mass, vel);

    //Exit program!
    return 0;
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