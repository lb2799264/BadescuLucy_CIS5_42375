/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 26, 2018, 4:14 AM
 * Purpose: Calculate students grades
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main() {
    //Declare Variables
    const int STUDENTS=5;//
    string name[STUDENTS];//to hold the students names;
    char grade[STUDENTS];//to hold letter grades
    int score[STUDENTS][4];//to hold test scores
    float total;//to hold test score totals
    float avgScr;//to hold average test score
    
    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<setprecision(1)<<fixed;
    for (int count=0;count<STUDENTS;count++)
    {
        cout<<"Enter student name: ";
        cin>>name[count];
    }
    cout<<endl;
    for (int count=0;count<STUDENTS;count++)
    {
        for (int scr=0;scr<4;scr++)
        {
            cout<<name[count];
            cout<<" score #"<<(scr+1)<<": ";
            cin>>score[count][scr]; 
            while (score[count][scr]<0||score[count][scr]>100)
            {
                cout<<"Invalid, please enter a valid score: ";
                cin>>score[count][scr];
            }
            total=0;
            for (int scr=0;scr<4;scr++)
            {
                total+=score[count][scr];
                avgScr=total/4;
            }   
        }
        cout<<name[count]<<"'s average= "<<avgScr<<endl;
        if (avgScr>=90&&avgScr<=100)
            cout<<name[count]<<"'s grade= A"<<endl;
        if (avgScr>=80&&avgScr<=89)
            cout<<name[count]<<"'s grade= B"<<endl;
        if (avgScr>=70&&avgScr<=79)
            cout<<name[count]<<"'s grade= C"<<endl;
        if (avgScr>=60&&avgScr<=69)
            cout<<name[count]<<"'s grade= D"<<endl;
        if (avgScr<59)
            cout<<name[count]<<"'s grade= F"<<endl;
        cout<<endl;
    }
         

    //Exit program!
    return 0;
}
