/* 
  File:   main.cpp
  Author: Lucy Badescu
  Created on May 27, 2018, 8:00 PM
  Purpose:  Modification to Account Validation
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void selectionSort(int [],int);
void showArray(const int [], int);
int biSearchList(const int[], int, int);

//Execution Begins Here!

int main() {
    //Declare Variables
    const int SIZE= 18;
    int test[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                      8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                      1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int accNum;//to hold account number entered by user
    int result;

    //Initial Variables

    //Map/Process Inputs to Outputs

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

    //Exit program!
    return 0;
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