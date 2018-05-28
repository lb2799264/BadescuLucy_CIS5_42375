/* 
  File:   main.cpp
  Author: Lucy Badescu
  Created on May 27, 2018, 3:25 PM
  Purpose:  Assignment 6 Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <string>//for strings
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
int showValue(int);
int searchList(const int[], int, int);
int searchList2(const int[], int, int);
int biSearchList(const int[], int, int);
int biSearchList2(const int[], int, int);
void selectionSort(int [], int);
void showArray(const int [], int);

//Executable code begins here!!!

int main(int argc, char** argv) {
    //Declare Variables
    char choice;

    //Loop on the menu
    do {
        cout << "End of program.\n";
        cout<<endl;
        //Input values
        cout << "Choose from the list" << endl;
        cout << "Type 1 for Ch7 Problem 1" << endl;
        cout << "Type 2 for Ch7 Problem 4" << endl;
        cout << "Type 3 for Ch7 Problem 12" << endl;
        cout << "Type 4 for Ch7 Problem 2" << endl;
        cout << "Type 5 for Ch7 Problem 5" << endl;
        cout << "Type 6 for Ch7 Problem 14" << endl;
        cout << "Type 7 for Ch8 Problem 1" << endl;
        cout << "Type 8 for Ch8 Problem 2" << endl;
        cout << "Type 9 for Ch8 Problem 3" << endl;
        cout << "Type 10 for Ch8 Problem 4"<< endl;
        cout << "Type any other character to exit" << endl;
        cin>>choice;
        cout<<endl;

        //Switch to determine the Problem
        switch (choice) {
            case '1':
            {
                cout << "Largest/Smallest Array Values" << endl;
                const int VALUES=10;
                int val[VALUES];
                int hgst;//to hold highest value
                int lowst;//to hold lowest value

                //Initial Variables
                hgst=val[0];

                //Display Outputs
                cout<<"Enter 10 different values and I will\n";
                cout<<"output the largest and smallest.\n";
                for (int count=0;count<VALUES;count++)
                {
                    cout<<"value: ";
                    cin>>val[count];
                }
                    for (int count=0;count<VALUES;count++)
                    {
                        if (val[count] > hgst)
                            hgst = val[count];
                    }
                cout<<"The highest value is: "<<hgst<<endl;
                lowst=val[0];
                for (int count=0;count<VALUES;count++)
                {
                    if (val[count] < lowst)
                        lowst = val[count];
                }
                cout<<"The lowest value is: "<<lowst<<endl;
                break;
                cout<<endl;
            }
            case '2':
            {
                cout << "Larger than n." << endl;
                const int SIZE=100000;//size of the array
                int nVal;//value of n
                int vals[SIZE];
                int count=0;
                int num;//number to be entered by user

                //Display Outputs
                cout<<"Please enter the value of 'n': ";
                cin>>nVal;
                cout<<"Enter a number or -1 to stop: ";
                cin>>num;
                while (num!=-1&&count<SIZE)
                {
                    count++;
                    vals[count-1]=num;
                    cout<<"Enter a number or -1 to stop: ";
                    cin>>num;
                }
                cout<<endl;
                cout<<"Values greather than n: ";
                for (int index=0;index<count;index++)
                {
                    if (vals[index]>nVal)
                    {
                        showValue(vals[index]);
                    }  
                }
                cout<<endl;
                break;     
            }
            case '3':
            {
                cout << "Grade Book." << endl;
                const int STUDENTS=5;//
                string name[STUDENTS];//to hold the students names;
                char grade[STUDENTS];//to hold letter grades
                int score[STUDENTS][4];//to hold test scores
                float total;//to hold test score totals
                float avgScr;//to hold average test score

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
                break;
                cout<<endl;
            }
            case '4':
            {
                cout << "Rainfall Statistics." << endl;
                const int RAIN = 12; //number of months
                string month[RAIN]= {"January", "February", "March", "April", 
                                     "May", "June", "July", "August", "September", 
                                     "October", "November", "December"}; 
                float totRain[RAIN];//total monthly rain
                float anRain;//to hold total annual rain
                float avgRain;//to hold average rain
                float lowst;//to hold month with lowest rain
                string lMnth;//month with lowest rain
                float hgst;//to hold month with most rain
                string hMnth;//month with most rain
                         
                //Initial Variables
                hgst=totRain[0];

                //Display Outputs
                cout<<"Enter the total annual rainfall for each month.\n";
                for (int count=0; count<RAIN;count++)
                {
                    cout<<month[count]<<": ";
                    cin>>totRain[count];
                    while (totRain[count]<0)
                    {
                        cout<<"Please enter a positive value: ";
                        cin>>totRain[count];
                    }
                }
                anRain=0;
                for (int count = 0; count<RAIN;count++)
                {
                    anRain+=totRain[count];
                }
                cout<<setprecision(2)<<fixed;
                cout<<"Total rainfall for the year is: "<<anRain<<endl;
                avgRain=anRain/RAIN;
                cout<<"The average rainfall is: "<<avgRain<<endl;
                for (int count=1;count<RAIN;count++)
                {
                    if (totRain[count] > hgst)
                    {
                        hMnth =month[count];
                        hgst = totRain[count];
                    }  
                }
                cout<<"The month with the most rain is: "<<hMnth<<endl;
                lowst=totRain[0];
                for (int count=1;count<RAIN;count++)
                {
                    if (totRain[count] < lowst)
                    {
                        lMnth=month[count];
                        lowst = totRain[count];
                    }
                }
                cout<<"The month with the least rain is: "<<lMnth<<endl;
                break;
                cout<<endl;
            }
            case '5':
            {
                cout << "Monkkey Business." << endl;
                const int MONKEYS = 3;//number of monkeys
                const int WEEK = 5;//week
                float monkFd [MONKEYS][WEEK];//to hold food eaten by each monkey in a week
                float avgFd;//to hold average food eaten by all the monkeys
                float least;//least food eaten
                float most;//to hold most food eaten

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
                break;
            }
            case '6':
            {
                cout << "Lottery Application" << endl;
                const int NUMBERS = 5;//Number of numbers 
                const int MX_VL=9;
                int loto[NUMBERS];//to hold lottery numbers
                int user[NUMBERS];//to hold the player's numbers
                unsigned seed =time(0);
                srand(seed);
                bool match = true;
                int count =0;

                //Display Outputs
                for (int num=0;num<NUMBERS;num++)
                {
                    cout<<"Please enter a number (0-9): ";
                    cin>>user[num];
                }
                for (int num=0;num<NUMBERS;num++)
                {
                    loto[num]=1+rand()%MX_VL;
                }
                cout<<endl;
                cout<<"Your numbers: ";
                for (int num=0;num<NUMBERS;num++)
                {
                    cout<<user[num]<<" ";
                }
                cout<<endl;
                cout<<"Lottery #s: ";
                for (int num=0;num<NUMBERS;num++)
                {
                    cout<<loto[num]<<" ";
                }
                cout<<endl;
                while (match && count<NUMBERS)
                {
                    if (loto[count] != user[count])
                        match = false;
                    count++;
                }
                if (match)
                    cout<<"Grand Prize Winner.\n";
                else 
                    cout<<"Not a Winner.\n";
                break;
                cout<<endl;
            }
            case '7':
            {
                cout << "Charge Account Validation." << endl;
                const int SIZE= 18;
                int test[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                      8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                      1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
                int accNum;//to hold account number entered by user
                int result;

                //Display Outputs
                result=searchList(test, SIZE, accNum);
                if (result==-1)
                    cout<<"Invalid Number.\n";
                else
                    cout<<"Number is Valid.\n";
                cout<<endl;
                break;
            }
            case '8':
            {
                cout << "Lottery Winner" << endl;
                const int SIZE= 10;
                int test[SIZE] = {13579, 26791, 26792, 33445, 55555,
                                 62483, 77777, 79422, 85647, 93121};
                int winner;//to hold winner number entered by user
                int result;

                //Display Outputs
                result=searchList2(test, SIZE, winner);
                if (result==-1)
                    cout<<"Not a Winner.\n";
                else
                    cout<<"Winner.\n";
                cout<<endl;
                break;
            }
            case '9':
            {
                cout << "Lottery Winner Modification." << endl;
                const int SIZE= 10;
                int test[SIZE] = {13579, 26791, 26792, 33445, 55555,
                                 62483, 77777, 79422, 85647, 93121};
                int winner;//to hold winner number entered by user
                int result;

                //Display Outputs
                cout<<"Enter 5 Digit Winning Number: ";
                cin>>winner;
                result=biSearchList2(test, SIZE, winner);
                if (result==-1)
                    cout<<"Not a Winner.\n";
                else
                    cout<<"Winner.\n";
                cout<<endl;
                break;
            }
            case '10':
            {
                cout << "Charge Account Validation Modification" << endl;
                const int SIZE= 18;
                int test[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                      8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                      1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
                int accNum;//to hold account number entered by user
                int result;

                //Display Outputs
                selectionSort(test,SIZE);
                cout<<"The sorted values are\n";
                showArray(test, SIZE); 
                cout<<"Enter 7 Digit Charge Account Number: ";
                cin>>accNum;
                result=biSearchList(test, SIZE, accNum);
                if (result==-1)
                    cout<<"Invalid Number.\n";
                else
                    cout<<"Number is Valid.\n";
                cout<<endl;
                break;
            }
            default:
                cout << "You are exiting the program" << endl;
        }
    } while (choice >= '1' && choice <= '10');

    //Exit stage right!
    return 0;
}
int showValue(int vals)
{
    cout<<vals<<" ";
}
int searchList(const int test[], int SIZE, int accNum)
{
    int index = 0;
    int pos=-1;
    bool found=false;
    
    cout<<"Enter 7 Digit Charge Account Number: ";
    cin>>accNum;
    while (index<SIZE && !found)
    {
        if (test[index]==accNum)
        {
            found=true;
            pos=index;
        }
        index++;
    }
    return pos;
}
int searchList2(const int test[], int SIZE, int winner)
{
    int index = 0;
    int pos=-1;
    bool found=false;
    
    cout<<"Enter 5 Digit Winning Number: ";
    cin>>winner;
    while (index<SIZE && !found)
    {
        if (test[index]==winner)
        {
            found=true;
            pos=index;
        }
        index++;
    }
    return pos;
}
int biSearchList2(const int test[], int SIZE, int winner)
{
    int first = 0;
    int last= SIZE-1;
    int mid;
    int pos=-1;
    bool found=false;
    
    while (!found&&first<=last)
    {
        mid=(first+last)/2;
        if (test[mid]==winner)
        {
            found=true;
            pos=mid;
        }
        else if (test[mid]>winner)
            last=mid-1;
        else
            first=mid+1;
    }
    return pos;
}
void selectionSort (int test[], int SIZE)
{
    int stScn, minIn, minVl;
    
    for (stScn=0; stScn<(SIZE-1); stScn++)
    {
        minIn = stScn;
        minVl = test[stScn];
        for (int index = stScn+1; index<SIZE;index++)
        {
            if (test[index]<minVl)
            {
                minVl=test[index];
                minIn=index;
            }
        }
        test[minIn]=test[stScn];
        test[stScn]=minVl;
    }
}
void showArray(const int test[], int SIZE)
{
    for (int count =0;count<SIZE;count++)
        cout<<test[count]<<" ";
    cout<<endl;
}
int biSearchList(const int test[], int SIZE, int accNum)
{
    int first = 0;
    int last= SIZE-1;
    int mid;
    int pos=-1;
    bool found=false;

    while (!found&&first<=last)
    {
        mid=(first+last)/2;
        if (test[mid]==accNum)
        {
            found=true;
            pos=mid;
        }
        else if (test[mid]>accNum)
            last=mid-1;
        else
            first=mid+1;
    }
    return pos;
}