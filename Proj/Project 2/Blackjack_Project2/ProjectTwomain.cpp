/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on May 30th, 2018, 8:55 PM
 * Purpose: Blackjack/21 (Project 2/Modified)
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand/Srand
#include <ctime>    //Time
#include <fstream>  //File i/o
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void welcome(string); 
void blackJ ();
void loser ();
void tie ();
void busted ();
void winner ();
void sORh ();
//used for mini game
void rules();
int search(const int[], int, int);

//Execution Begins Here!

int main() {
    //Declare Variables
    int    choice;//character entered by player
    string  name;//player name
    int   pts1, pts2, pts3, pts4,//to hold the points accumulated by player
          pPts1, pPts2, pPts3, pPts4,//to hold the program's score
          cd1, cd2, cd3, cd4, cd5,//to hold the player card values
          pCd1, pCd2, pCd3, pCd4;//to hold the program card values
    ofstream opFile;//output file
    //Variables used in Mini Game
    int play;//to hold y or n
    const int NUMB=5;
    int youN[NUMB];
    int val;//to hold value entered by user
    string input[NUMB]={"Number 1", "Number 2", "Number 3", "Number 4",
                      "Number 5"};
    int progN[NUMB] = {55, 23, 89, 10, 99}; 
    int hgst, lowst;//to hold highest and lowest number
    string hNum, lNum;//to hold name of highest and lowest number
    int avgTot;//to hold average for total
    int result;

    //Initial Variables
    const int MX_PTS=21;//to hold max score
    const int MIN_CD=2;//to hold minimum card points
    const int MX_CD=11;//to hold max card points
    unsigned seed=time(0);
    
    //Map/Process Inputs to Outputs
    srand(seed);
    //Display Outputs  
    opFile.open("name.txt");
    cout<<"Welcome to Blackjack on C++, please enter your name: ";
    getline(cin,name);
    opFile<<name<<endl;
    opFile.close();
    welcome(name);
    do{ 
        cout<<endl;
        cout<<"You will receive two cards and the program will receive one\n";
        cd1=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
        cd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
        pCd1=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
        pts1=cd1+cd2;
        pPts1=pCd1;
        pPts1=static_cast<float>(pCd1);
        cout<<"Your Cards: "<<cd1<<setw(5)<<cd2<<"  ";
        cout<<"Points: "<<pts1<<endl;
        cout<<"Program Cards: "<<pPts1<<endl;
        if (pts1==MX_PTS)
        {
            cout<<"The program will reveal it's second card.\n";
            pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
            pPts2=pCd1+pCd2;
            cout<<"The program has: "<<pPts2<<endl;
            if (pPts2==MX_PTS)
            {
                tie ();
                cin>>choice;
            }
            else
            {
                blackJ ();
                cin>>choice;
            }
        }
        else if (pPts1==10 || pPts1==11)
        {
            cout<<"The program will reveal it's second card.\n";
            pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
            pPts2=pCd1+pCd2;
            cout<<"Program Cards: "<<pCd1<<setw(3)<<pCd2<<endl;
            cout<<"Points: "<<pPts2<<endl;
            if (pPts2==MX_PTS)
            {
                loser ();
                cin>>choice;
            }
            if (pPts2<MX_PTS)
            {
                if (pPts2>pts1)
                {
                    loser ();
                    cin>>choice;
                }
                else
                {
                    winner ();
                    cin>>choice;
                }
            }
        }
        else if (pts1>MX_PTS)
        {
            busted();
            cin>>choice;
        }
        else
        {
            sORh();
            cin>>choice;
            switch (choice){
                case 3:{
                    cout<<"1.The program will give you another card.\n";
                    cd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                    pts2=cd1+cd2+cd3;
                    cout<<"Your Cards: "<<cd1<<setw(3)<<cd2<<setw(3)<<cd3<<endl;
                    cout<<"Points: "<<pts2<<endl;
                    cout<<"Program Cards: "<<pCd1<<endl;
                    cout<<"Points: "<<pPts1<<endl; 
                    if(pts2==MX_PTS)
                    {
                        blackJ ();
                        cin>>choice;
                    }   
                    else if (pts2>MX_PTS)
                    {
                        busted ();
                        cin>>choice;       
                    }  
                    else
                    {
                        sORh();
                        cin>>choice;
                        switch (choice){
                            case 3:{
                                cd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                pts3=cd1+cd2+cd3+cd4;
                                cout<<"2.Player Cards: "<<cd1<<setw(3);
                                cout<<cd2<<setw(3)<<cd3<<setw(3)<<cd4<<endl;
                                cout<<"Points: "<<pts3<<endl;
                                if(pts3==MX_PTS)
                                {
                                    blackJ ();
                                    cin>>choice;
                                }
                                else if (pts3>MX_PTS)
                                {
                                    busted ();
                                    cin>>choice;
                                }
                                else 
                                {
                                    sORh();
                                    cin>>choice;
                                    switch (choice){
                                        case 3:{
                                            cd5=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                            pts4=cd1+cd2+cd3+cd4+cd5;
                                            cout<<"3.Player Cards: "<<cd1;
                                            cout<<setw(3)<<cd2<<setw(3)<<cd3;
                                            cout<<setw(3)<<cd4<<setw(3)<<cd5<<endl;
                                            cout<<"Points: "<<pts4<<endl;
                                            if(pts4==MX_PTS)
                                            {
                                                blackJ ();
                                                cin>>choice;
                                            }
                                            else if (pts4>MX_PTS)
                                            {
                                                busted ();     
                                                cin>>choice;
                                            }
                                        }
                                        case 2:{
                                            cout<<"3.The program receives another";
                                            cout<<" card.\n";
                                            pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                            pPts2=pCd1+pCd2;
                                            cout<<"Program cards: "<<pCd1<<setw(3);
                                            cout<<pCd2<<endl;
                                            cout<<"Points: "<<pPts2<<endl;
                                            if (pPts2<=16)
                                            {
                                                cout<<"3A.The program receives";
                                                cout<<" another card.\n";
                                                pCd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                                pPts3=pCd1+pCd2+pCd3;
                                                cout<<"Program cards: "<<pCd1<<setw(3);
                                                cout<<pCd2<<setw(3)<<pCd3<<endl;
                                                cout<<"Points: "<<pPts3<<endl;
                                                if(pPts3<=16)
                                                {
                                                    cout<<"3B.The program receives";
                                                    cout<<" another card.\n";
                                                    pCd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                                    pPts4=pCd1+pCd2+pCd3+pCd4;
                                                    cout<<"Program cards: "<<pCd1;
                                                    cout<<setw(3)<<pCd2<<setw(3);
                                                    cout<<pCd3<<setw(3)<<pCd4<<endl;
                                                    cout<<"Points: "<<pPts4<<endl;
                                                    if(pPts4>MX_PTS)
                                                    {
                                                        winner ();  
                                                        cin>>choice;
                                                    }
                                                    else 
                                                    {
                                                        cout<<"Player Points: ";
                                                        cout<<pts4<<endl;
                                                        cout<<"Program Points: ";
                                                        cout<<pPts4<<endl;
                                                        if (pts4>pPts4)
                                                        {
                                                            winner();
                                                            cin>>choice;
                                                        }
                                                        else if (pts4==pPts4)
                                                        {
                                                            tie();
                                                            cin>>choice;
                                                        }
                                                        else
                                                        {
                                                            loser();
                                                            cin>>choice;
                                                        }
                                                    }
                                                }
                                                else if (pPts3>MX_PTS)
                                                { 
                                                    winner();
                                                    cin>>choice;
                                                }
                                                else
                                                {
                                                    cout<<"Player points: ";
                                                    cout<<pts3<<endl;
                                                    cout<<"Program Points: ";
                                                    cout<<pPts3<<endl;
                                                    if (pts3>pPts3)
                                                    {
                                                        winner();
                                                        cin>>choice;
                                                    }
                                                    else if (pts3==pPts3)
                                                    {
                                                        tie();
                                                        cin>>choice;
                                                    }
                                                    else
                                                    {
                                                        loser();
                                                        cin>>choice;
                                                    }    
                                                }
                                            }
                                            else if (pPts2>MX_PTS)
                                            { 
                                                winner();
                                                cin>>choice;
                                            }
                                            else
                                            {
                                                cout<<"Player points: "<<pts3<<endl;
                                                cout<<"Program Points: "<<pPts2<<endl;
                                                if (pts3>pPts2)
                                                {
                                                    winner();
                                                    cin>>choice;
                                                }
                                                else if (pts3==pPts2)
                                                {
                                                    tie();
                                                    cin>>choice;
                                                }
                                                else
                                                {
                                                    loser();
                                                    cin>>choice;
                                                }    
                                            }
                                        }
                                        break;
                                    }
                                    break;
                                }
                                break;
                            }
                            case 2:{
                                cout<<"2.The program receives another card.\n";
                                pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                pPts2=pCd1+pCd2;
                                cout<<"Program cards: "<<pCd1<<setw(3)<<pCd2<<endl;
                                cout<<"Points: "<<pPts2<<endl;
                                if (pPts2<=16)
                                {
                                    cout<<"2A.The program receives another card.\n";
                                    pCd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                    pPts3=pCd1+pCd2+pCd3;
                                    cout<<"Program cards: "<<pCd1<<setw(3)<<pCd2;
                                    cout<<setw(3)<<pCd3<<endl;
                                    cout<<"Points: "<<pPts3<<endl;
                                    if(pPts3<=16)
                                    {
                                        cout<<"2B.The program receives another card.\n";
                                        pCd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                        pPts4=pCd1+pCd2+pCd3+pCd4;
                                        cout<<"Program cards: "<<pCd1<<setw(3)<<pCd2;
                                        cout<<setw(3)<<pCd3<<setw(3)<<pCd4<<endl;
                                        cout<<"Points: "<<pPts4<<endl;
                                        if(pPts4>MX_PTS)
                                        {
                                            winner(); 
                                            cin>>choice;
                                        }
                                        else 
                                        {
                                            cout<<"Program Points: "<<pPts4<<endl;
                                            cout<<"Player Points: "<<pts2<<endl;
                                            if (pts2>pPts4)
                                            {
                                                winner();
                                                cin>>choice;
                                            }
                                            else if (pts2==pPts4)
                                            {
                                                tie();
                                                cin>>choice;
                                            }
                                            else
                                            {
                                                loser();
                                                cin>>choice;
                                            }
                                        }
                                    }
                                    else if (pPts3>MX_PTS)
                                    {  
                                        winner();
                                        cin>>choice;
                                    }
                                    else
                                    {
                                        cout<<"Player points: "<<pts2<<endl;
                                        cout<<"Program Points: "<<pPts3<<endl;
                                        if (pts2>pPts3)
                                        {
                                            winner();
                                            cin>>choice;
                                        }
                                        else if (pts2==pPts3)
                                        {
                                            tie();
                                            cin>>choice;
                                        }
                                        else
                                        {
                                            loser();
                                            cin>>choice;
                                        }    
                                    }
                                }
                                else if (pPts2>MX_PTS)
                                { 
                                    winner();
                                    cin>>choice;
                                }
                                else
                                {
                                    cout<<"Player points: "<<pts2<<endl;
                                    cout<<"Program Points: "<<pPts2<<endl;
                                    if (pts2>pPts2)
                                    {
                                        winner();
                                        cin>>choice;
                                    }
                                    else if(pts2==pPts2)
                                    {
                                        tie();
                                        cin>>choice;
                                    }
                                    else
                                    {
                                        loser();
                                        cin>>choice;
                                    }    
                                }
                            }
                            break;
                        }
                    } 
                }break;
                case 2:{
                    cout<<"1.The program receives another card.\n";
                    pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                    pPts2=pCd1+pCd2;
                    cout<<"Program cards: "<<pCd1<<setw(3)<<pCd2<<endl;
                    cout<<"Points: "<<pPts2<<endl;
                    if (pPts2<=16)
                    {
                        cout<<"1A.The program receives another card.\n";
                        pCd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                        pPts3=pCd1+pCd2+pCd3;
                        cout<<"Program cards: "<<pCd1<<setw(3)<<pCd2<<setw(3);
                        cout<<pCd3<<endl;
                        cout<<"Points: "<<pPts3<<endl;
                        if(pPts3<=16)
                        {
                            cout<<"1B.The program receives another card.\n";
                            pCd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                            pPts4=pCd1+pCd2+pCd3+pCd4;
                            cout<<"Program cards: "<<pCd1<<setw(3)<<pCd2<<setw(3);
                            cout<<pCd3<<setw(3)<<pCd4<<endl;
                            cout<<"Points: "<<pPts4<<endl;
                            if(pPts4>MX_PTS)
                            {
                                winner(); 
                                cin>>choice;
                            }
                            else
                            {
                                cout<<"Program Points: "<<pPts4<<endl;
                                cout<<"Player Points: "<<pts1<<endl;
                                if (pts1>pPts4)
                                {
                                    winner();
                                    cin>>choice;
                                }
                                else if (pts1==pPts4)
                                {
                                    tie();  
                                    cin>>choice;
                                }
                                else
                                {
                                    loser(); 
                                    cin>>choice;
                                }
                            }
                        } 
                        else if (pPts3>MX_PTS)
                        { 
                            winner();
                            cin>>choice;
                        }
                        else
                        {
                            cout<<"Player points: "<<pts1<<endl;
                            cout<<"Program Points: "<<pPts3<<endl;
                            if (pts1>pPts3)
                            {
                                winner();
                                cin>>choice;
                            }
                            else if (pts1==pPts3)
                            {
                                tie();
                                cin>>choice;
                            }
                            else
                            {
                                loser();
                                cin>>choice;
                            }    
                        }
                    }
                    else if (pPts2>MX_PTS)
                    { 
                        winner();
                        cin>>choice;
                    }
                    else
                    {
                        cout<<"Player points: "<<pts1<<endl;
                        cout<<"Program Points: "<<pPts2<<endl;
                        if (pts1>pPts2)
                        {
                            winner();
                            cin>>choice;
                        }
                        else if (pts1==pPts2)
                        {
                            tie();
                            cin>>choice;
                        }
                        else
                        {
                            loser();
                            cin>>choice;
                        }     
                    }    
                }
                break;
            }
        }
        while (choice<1||choice>4)
        {
            cout<<"Please enter a valid choice (1-4): ";
            cin>>choice;
        }
        if (choice==4)
        {
            cout<<"Thank you for playing! Please come back again."<<endl;
        }
    }while (choice==1);
    //end of blackjack
    //bonus mini game
    cout<<endl;
    cout<<"BONUS Mini Game!";
    rules();
    do{
        int num;   
        cout<<"Enter 5 different numbers.\n";
        for (int count=0; count<NUMB;count++)
        {
            cout<<input[count]<<": ";
            cin>>youN[count];
            while (youN[count]<0)
            {
                cout<<"Please enter a positive value: ";
                cin>>youN[count];
            }
        }
        int tot=0;
        for (int count = 0; count<NUMB;count++)
        {
            tot+=youN[count];
        }
        cout<<"The total of your numbers added is: "<<tot<<endl;
        avgTot=tot/NUMB;
        cout<<"The average is: "<<avgTot<<endl;
        hgst=youN[0];
        for (int count=1;count<NUMB;count++)
        {
            if (youN[count] > hgst)
            {
                hNum =input[count];
                hgst = youN[count];
            } 
        }
        cout<<"The largest number is: "<<hNum<<endl;
        lowst=youN[0];
        for (int count=1;count<NUMB;count++)
        {
            if (youN[count] < lowst)
            {
                lNum=input[count];
                lowst = youN[count];
            }
        }
        cout<<"The lowest number is: "<<lNum<<endl;
        cout<<endl;
        result=search(progN, NUMB, val);
        if (result==-1)
            cout<<"Not a match.\n";
        else
            cout<<"Match!\n";
        cout<<"Play again? (1=yes -1=no): ";
        cin>>play;
        if (play==-1)
        {
            cout<<"Thank you for playing!"<<endl;
        }
        
    }while (play==1);
    
    //Exit program!
    return 0;
}
void welcome(string name)
{
    cout<<endl;
    cout<<"Hello "<<name<<" I will give you a quick overview of the game.\n";
    cout<<"The purpose of the game is to get as close to 21 as possible. \n";
    cout<<"It will be you against the program. Because we do not have picture\n";
    cout<<"cards, the program will generate random numbers from 2 to 11. \n";
    cout<<"If at anytime you wish to stop playing, you may Quit the game\n";
    cout<<"by entering 4. Good luck! \n";
}
void blackJ ()
{
    string name;
    char choice;
    ifstream inFile;//input file
    inFile.open("name.txt");
    
    inFile>>name;
    cout<<"BLACKJACK! Congratulations "<<name<<" you have won!\n";
    cout<<"Would you like to try again? (1=yes/4=quit): ";
    inFile.close();
}
void loser ()
{
    string name;
    char choice;
    ifstream inFile;//input file
    inFile.open("name.txt");
    
    inFile>>name;
    cout<<"Sorry "<<name<<", the program wins. Try again? (1=yes/4=quit): ";
    inFile.close();
}
void tie ()
{
    string name;
    char choice;
    ifstream inFile;//input file
    inFile.open("name.txt");
    
    inFile>>name;
    cout<<name<<" you have tied, try again?(1=yes/4=quit): ";
    inFile.close();

}
void busted ()
{
    string name;
    char choice;
    ifstream inFile;//input file
    inFile.open("name.txt");
    
    inFile>>name;
    cout<<"BUSTED! "<<name<<", you lose.\n";
    cout<<"Would you like to play again? (1=yes/4=quit): ";
    inFile.close();
}
void winner ()
{
    string name;
    char choice;
    ifstream inFile;//input file
    inFile.open("name.txt");
    
    inFile>>name;
    cout<<"Congratulations "<<name<<", you have won!\n";
    cout<<"Would you like to play again? (1=yes/4=quit): ";
    inFile.close();
}
void sORh ()
{
    cout<<"Would you like to Stand(2) or Hit(3)?: ";
}
void rules ()
{
    string name;
    ifstream inFile;//input file
    inFile.open("name.txt");
    
    inFile>>name;
    cout<<endl;
    cout<<"We will now play a simple numbers game. You will enter 5 numbers\n";
    cout<<"and I will give you the average, their total, the smallest and \n";
    cout<<"largest of your numbers. You will then enter another number to see \n";
    cout<<"if it matches one of 5 numbers in our data base. (Hint: if you \n";
    cout<<"want to try to make a match, enter values between 1-100). Alright \n";
    cout<<name<<" we will now begin."<<endl;
    cout<<endl;
    inFile.close();
}
int search(const int progN[], int NUMB, int val)
{
    int index = 0;
    int pos=-1;
    bool found=false;
    
    cout<<"Enter a number between 1-100: ";
    cin>>val;
    while (index<NUMB && !found)
    {
        if (progN[index]==val)
        {
            found=true;
            pos=index;
        }
        index++;
    }
    return pos;
}