/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on March 12, 2018, 8:00 PM
 * Purpose: Entering information and putting it in a story
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    string name, age, city, college, prof, animal, petname;

    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Please enter name: ";
    getline(cin, name);
    cout<<"Please enter age: ";
    getline(cin, age);
    cout<<"Please enter name of a city: ";
    getline(cin, city);
    cout<<"Please enter name of a college: ";
    getline(cin, college);
    cout<<"Please enter a profession: ";
    getline(cin, prof);
    cout<<"Please enter a type of animal: ";
    getline(cin, animal);
    cout<<"Please enter a pet name: ";
    getline(cin, petname);
    
    cout<<"---------------------------------------------------------------\n";
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to college at "<<college<<"."<<endl;
    cout<<name<<" graduated and went to work as a "<<prof<<". "<<"Then, "<<name<<endl;
    cout<<"adopted a(n) "<<animal<<" named "<<petname<<". "<<"They both lived happily ever after! "<<endl;

    //Exit program!
    return 0;
}