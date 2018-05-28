/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 27, 2018, 1:04 PM
 * Purpose: Track food eaten by a group of monkeys
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
    const int MONKEYS = 3;//number of monkeys
    const int WEEK = 5;//week
    float monkFd [MONKEYS][WEEK];//to hold food eaten by each monkey in a week
    float avgFd;//to hold average food eaten by all the monkeys
    float least;//least food eaten
    float most;//to hold most food eaten
    //Initial Variables

    //Map/Process Inputs to Outputs

    //Display Outputs
    cout<<"Please enter the amount of food eaten by\n";
    for (int monk =0;monk<MONKEYS;monk++)
    {
        for (int wk=0;wk<WEEK;wk++)
        {
            cout<<"Monkey #"<<(monk +1)<<" Day #"<<(wk+1)<<": ";
            cin>>monkFd[monk][wk];
            while (monkFd[monk][wk]<0)
            {
                cout<<"Please enter a positive value: ";
                cin>>monkFd[monk][wk];
            }
            
        }
        cout<<endl;
    }
    cout<<"Total food eaten by monkeys: ";
    cout<<setprecision(1)<<fixed;
    float total=0;
    {
        for (int monk=0;monk<MONKEYS;monk++)
        {
            for (int wk=0;wk<WEEK;wk++)
            {
                total+=monkFd[monk][wk];
                avgFd=total/MONKEYS;
            }
        }
        cout<<total<<endl;
        cout<<"Average food eaten by monkeys: ";
        cout<<avgFd<<endl;             
    }
    cout<<"Most food eaten by any monkey: ";
    most=monkFd[0][0];
    for (int monk=0;monk<MONKEYS;monk++)
    {
        for (int wk=0;wk<WEEK;wk++)
        { 
            if (monkFd[monk][wk]>most)
            {
                cout<<setprecision(1)<<fixed;
                most=monkFd[monk][wk];
                cout<<most<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"Least food eaten by any monkey: ";
    least=monkFd[0][0];
    for (int monk=0;monk<MONKEYS;monk++)
    {
        for (int wk=0;wk<WEEK;wk++)
        { 
            if (monkFd[monk][wk]<least)
            {
                cout<<setprecision(1)<<fixed;
                least=monkFd[monk][wk];
                cout<<least<<" ";
            }
        }
    }
    cout<<endl;
    

    //Exit program!
    return 0;
}
