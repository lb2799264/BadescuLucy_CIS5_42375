/* 
 * File:   main.cpp
 * Author: Lucy Badescu
 * Created on April 19th, 2018, 4:42 PM
 * Purpose: Blackjack/21
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

//Execution Begins Here!

int main() {
    //Declare Variables
    char    choice,//character entered by player
            y, Y;//to hold yes
    string  name;//player name
    int   pts1, pts2, pts3, pts4,//to hold the points accumulated by player
          pPts1, pPts2, pPts3, pPts4,//to hold the program's score
          cd1, cd2, cd3, cd4, cd5,//to hold the player card values
          pCd1, pCd2, pCd3, pCd4;//to hold the program card values

    //Initial Variables
    const int MX_PTS=21;//to hold max score
    const int MIN_CD=2;//to hold minimum card points
    const int MX_CD=11;//to hold max card points
    unsigned seed=time(0);
    
    //Map/Process Inputs to Outputs
    srand(seed);
    //Display Outputs   
    cout<<"Welcome to Blackjack on C++, please enter your name: ";
    getline(cin,name);
    cout<<"Hello "<<name<<" I will give you a quick overview of the game.\n";
    cout<<"The purpose of the game is to get as close to 21 as possible. \n";
    cout<<"It will be you against the program. Because we do not have picture\n";
    cout<<"cards, the program will generate random numbers from 2 to 11. \n";
    cout<<"If at anytime you wish to stop playing, you may Quit the game\n";
    cout<<"by entering 'n' (or any other key). Good luck! \n";
    cout<<"-----------------------------------------------------------------\n";  
    do{ 
        cout<<"You will receive two cards and the program will receive one\n";
        cout<<"Your Cards / Program / Your Pts / Program Pts"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cd1=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
        cd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
        pCd1=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
        pts1=cd1+cd2;
        pPts1=pCd1;
        pPts1=static_cast<float>(pCd1);
        cout<<setw(5)<<cd1<<setw(5)<<cd2<<setw(10)<<pCd1<<setw(10)<<pts1;
        cout<<setw(5)<<pPts1<<endl;
        if (pts1==MX_PTS)
        {
            cout<<"The program will reveal it's second card.\n";
            pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
            pPts2=pCd1+pCd2;
            cout<<"The program has: "<<setw(5)<<pPts2<<endl;
            if (pPts2==MX_PTS)
            {
                cout<<"You have tied, try again? (y/n): ";
                cin>>choice;
            }
            else
            {
                cout<<"BLACKJACK! Congratulations "<<name<<" you have won!\n";
                cout<<"Would you like to try again? (y/n): ";
                cin>>choice;
            }
        }
        else if (pPts1==10 || pPts1==11)
        {
            cout<<"The program will reveal it's second card.\n";
            pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
            pPts2=pCd1+pCd2;
            cout<<"Program Cards: "<<setw(3)<<pCd1<<setw(2)<<pCd2<<setw(2)<<endl;
            cout<<"Points: "<<setw(3)<<pPts2<<endl;
            if (pPts2==MX_PTS)
            {
                cout<<"The program wins. Try again? (y/n): ";
                cin>>choice;
            }
            if (pPts2<MX_PTS)
            {
                if (pPts2>pts1)
                {
                    cout<<"The program wins. Try again? (y/n): ";
                    cin>>choice;
                }
                else
                {
                    cout<<"Congratulations, "<<name<<" you win, would you like";
                    cout<<" to play again?: ";
                    cin>>choice;
                }
            }
        }
        else
        {
            cout<<"Would you like to stand or hit? (s for stand, h for hit): ";
            cin>>choice;
            char h,s;//player optional input
            switch (choice){
                case 'h':
                case 'H':{
                    cout<<"1.The program will give you another card.\n";
                    cout<<"Your Cards / Program / Your Pts / Program Pts\n";
                    cout<<"-----------------------------------------------\n";
                    cd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                    pts2=cd1+cd2+cd3;
                    cout<<setw(5)<<cd1<<setw(5)<<cd2<<setw(5)<<cd3<<setw(10);
                    cout<<pCd1<<setw(10)<<pts2<<setw(10)<<pPts1<<endl;
                    if(pts2==MX_PTS)
                    {
                        cout<<"BLACKJACK! You have won the round!\n"; 
                        cout<<" Would you like to play again? (y/n): ";
                        cin>>choice;
                    }
                    else if (pts2>MX_PTS)
                    {
                        cout<<"BUSTED! You lose. Try again? (y/n): ";
                        cin>>choice;
                    }  
                    else
                    {
                        cout<<"Would you like to stand or hit? (s/h): ";
                        cin>>choice;
                        switch (choice){
                            case 'h':
                            case 'H':{
                                cd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                pts3=cd1+cd2+cd3+cd4;
                                cout<<"2.Player Cards: "<<setw(3)<<cd1<<setw(2);
                                cout<<cd2<<setw(2)<<cd3<<setw(2)<<cd4<<endl;
                                cout<<"Points: "<<setw(3)<<pts3<<endl;
                                if(pts3==MX_PTS)
                                {
                                    cout<<"BLACKJACK! Congratulations you win "; 
                                    cout<<"Play again? (y/n): ";
                                }
                                else if (pts3>MX_PTS)
                                {
                                    cout<<"BUSTED! You lose. Try again? (y/n): ";
                                    cin>>choice;
                                }
                                else 
                                {
                                    cout<<"Would you like to stand or hit? (s/h): ";
                                    cin>>choice;
                                    switch (choice){
                                        case 'h':
                                        case 'H':{
                                            cd5=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                            pts4=cd1+cd2+cd3+cd4+cd5;
                                            cout<<"3.Player Cards: "<<setw(3)<<cd1;
                                            cout<<setw(2)<<cd2<<setw(2)<<cd3;
                                            cout<<setw(2)<<cd4<<setw(2)<<cd5<<endl;
                                            cout<<"Points: "<<setw(3)<<pts4<<endl;
                                            if(pts4==MX_PTS)
                                            {
                                                cout<<"BLACKJACK! Congratulations";
                                                cout<< name<<" you have won the"; 
                                                cout<<" round! Would you like to "; 
                                                cout<<"play again? (y/n): ";
                                                cin>>choice;
                                            }
                                            else if (pts4>MX_PTS)
                                            {
                                                cout<<"BUSTED! You lose.";
                                                cout<<"Try again? (y/n): ";
                                                cin>>choice;                                           
                                            }
                                        }
                                        case 's':
                                        case 'S':{
                                            cout<<"3.The program receives another";
                                            cout<<" card.\n";
                                            pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                            pPts2=pCd1+pCd2;
                                            cout<<"Program cards: "<<setw(3);
                                            cout<<pCd1<<setw(2)<<pCd2<<endl;
                                            cout<<"Points: "<<setw(3)<<pPts2<<endl;
                                            if (pPts2<=16)
                                            {
                                                cout<<"3A.The program receives";
                                                cout<<" another card.\n";
                                                pCd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                                pPts3=pCd1+pCd2+pCd3;
                                                cout<<"Program cards: ";
                                                cout<<setw(3)<<pCd1<<setw(2)<<pCd2;
                                                cout<<setw(2)<<pCd3<<endl;
                                                cout<<"Points: "<<setw(3)<<pPts3;
                                                cout<<endl;
                                                if(pPts3<=16)
                                                {
                                                    cout<<"3B.The program receives";
                                                    cout<<" another card.\n";
                                                    pCd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                                    pPts4=pCd1+pCd2+pCd3+pCd4;
                                                    cout<<"Program cards: "<<endl;
                                                    cout<<setw(3)<<pCd1;
                                                    cout<<setw(2)<<pCd2;
                                                    cout<<setw(2)<<pCd3;
                                                    cout<<setw(2)<<pCd4<<endl;
                                                    cout<<"Points: ";
                                                    cout<<setw(3)<<pPts4<<endl;
                                                    if(pPts4>MX_PTS)
                                                    {
                                                        cout<<"Congratulations";
                                                        cout<<" you win! Play";
                                                        cout<<" again? : ";
                                                        cin>>choice;  
                                                    }
                                                    else 
                                                    {
                                                        cout<<"Player Points: ";
                                                        cout<<setw(3)<<pts4<<endl;
                                                        cout<<"Program Points: ";
                                                        cout<<setw(3)<<pPts4<<endl;
                                                        if (pts4>pPts4)
                                                        {
                                                            cout<<"Winner! Play";
                                                            cout<<" again? ";
                                                            cin>>choice;
                                                        }
                                                        else
                                                        {
                                                            cout<<"You lose. Play";
                                                            cout<<"again? ";
                                                            cin>>choice;
                                                        }
                                                    }
                                                }
                                                else if (pPts3>MX_PTS)
                                                { 
                                                    cout<<"Congratulations you ";
                                                    cout<<"win! Try again? (y/n): ";
                                                    cin>>choice;
                                                }
                                                else
                                                {
                                                    cout<<"Player points: ";
                                                    cout<<setw(3)<<pts3<<endl;
                                                    cout<<"Program Points: ";
                                                    cout<<setw(3)<<pPts3<<endl;
                                                    if (pts3>pPts3)
                                                    {
                                                        cout<<"Congratulations ";
                                                        cout<<name<<" you win! ";
                                                        cout<<"Play again? (y/n): ";
                                                        cin>>choice;
                                                    }
                                                    else
                                                    {
                                                        cout<<"You lose, play";
                                                        cout<<" again? (y/n): ";
                                                        cin>>choice;
                                                    }    
                                                }
                                            }
                                            else if (pPts2>MX_PTS)
                                            { 
                                                cout<<"Congratulations you win!";
                                                cout<<" Play again? (y/n): ";
                                                cin>>choice;
                                            }
                                            else
                                            {
                                                cout<<"Player points: "<<setw(3);
                                                cout<<pts3<<endl;
                                                cout<<"Program Points: "<<setw(3);
                                                cout<<pPts2<<endl;
                                                if (pts3>pPts2)
                                                {
                                                    cout<<"Congratulations ";
                                                    cout<<name<<" you win!";
                                                    cout<<" Play again?: ";
                                                    cin>>choice;
                                                }
                                                else
                                                {
                                                    cout<<"You lose, play again? ";
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
                            case 's':
                            case 'S':{
                                cout<<"2.The program receives another card.\n";
                                pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                pPts2=pCd1+pCd2;
                                cout<<"Program cards: "<<setw(3)<<pCd1;
                                cout<<setw(2)<<pCd2<<endl;
                                cout<<"Points: "<<setw(3)<<pPts2<<endl;
                                if (pPts2<=16)
                                {
                                    cout<<"2A.The program receives another card.\n";
                                    pCd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                    pPts3=pCd1+pCd2+pCd3;
                                    cout<<"Program cards: "<<setw(3)<<pCd1;
                                    cout<<setw(2)<<pCd2<<setw(2)<<pCd3<<endl;
                                    cout<<"Points: "<<setw(3)<<pPts3<<endl;
                                    if(pPts3<=16)
                                    {
                                        cout<<"2B.The program receives another card.\n";
                                        pCd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                                        pPts4=pCd1+pCd2+pCd3+pCd4;
                                        cout<<"Program cards: "<<setw(3)<<pCd1;
                                        cout<<setw(2)<<pCd2<<setw(2)<<pCd3<<setw(2);
                                        cout<<pCd4<<endl;
                                        cout<<"Points: "<<setw(3)<<pPts4<<endl;
                                        if(pPts4>MX_PTS)
                                        {
                                            cout<<"Congratulations you win! ";
                                            cout<<"Play again? (y/n): ";
                                            cin>>choice;  
                                        }
                                        else 
                                        {
                                            cout<<"Program Points: "<<setw(4);
                                            cout<<pPts4<<endl;
                                            cout<<"Player Points: "<<setw(5);
                                            cout<<pts2<<endl;
                                            if (pts2>pPts4)
                                            {
                                                cout<<"Congrats! You win! ";
                                                cout<<"Play again? (y/n): ";
                                                cin>>choice;
                                            }
                                            else
                                            {
                                                cout<<"You lose. Play again? ";
                                                cin>>choice;
                                            }
                                        }
                                    }
                                    else if (pPts3>MX_PTS)
                                    {  
                                        cout<<"Congratulations you win! Try again? : ";
                                        cin>>choice;
                                    }
                                    else
                                    {
                                        cout<<"Player points: "<<setw(3)<<pts2<<endl;
                                        cout<<"Program Points: "<<setw(3)<<pPts3<<endl;
                                        if (pts2>pPts3)
                                        {
                                            cout<<"Congratulations "<<name;
                                            cout<<" you win! Play again? : ";
                                            cin>>choice;
                                        }
                                        else if (pts2==pPts3)
                                        {
                                            cout<<"Tie, try again? ";
                                            cin>>choice;
                                        }
                                        else
                                        {
                                            cout<<"You lose. Play again? : ";
                                            cin>>choice;
                                        }    
                                    }
                                }
                                else if (pPts2>MX_PTS)
                                { 
                                    cout<<"Congratulations you win! Try again? (y/n): ";
                                    cin>>choice;
                                }
                                else
                                {
                                    cout<<"Player points: "<<setw(3)<<pts2<<endl;
                                    cout<<"Program Points: "<<setw(3)<<pPts2<<endl;
                                    if (pts2>pPts2)
                                    {
                                        cout<<"Congratulations "<<name<<" you win!";
                                        cout<<" Play again? (y/n): ";
                                        cin>>choice;
                                    }
                                    else
                                    {
                                        cout<<"You lose, play again? (y/q): ";
                                        cin>>choice;
                                    }    
                                }
                            }
                            break;
                        }
                    } 
                }break;
                case 's':
                case 'S':{
                    cout<<"1.The program receives another card.\n";
                    pCd2=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                    pPts2=pCd1+pCd2;
                    cout<<"Program cards: "<<setw(3)<<pCd1<<setw(2)<<pCd2<<endl;
                    cout<<"Points: "<<setw(3)<<pPts2<<endl;
                    if (pPts2<=16)
                    {
                        cout<<"1A.The program receives another card.\n";
                        pCd3=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                        pPts3=pCd1+pCd2+pCd3;
                        cout<<"Program cards: "<<setw(3)<<pCd1<<setw(2);
                        cout<<pCd2<<setw(2)<<pCd3<<endl;
                        cout<<"Points: "<<setw(3)<<pPts3<<endl;
                        if(pPts3<=16)
                        {
                            cout<<"1B.The program receives another card.\n";
                            pCd4=(rand()%(MX_CD-MIN_CD+1))+MIN_CD;
                            pPts4=pCd1+pCd2+pCd3+pCd4;
                            cout<<"Program cards: "<<setw(3)<<pCd1<<setw(2);
                            cout<<pCd2<<setw(2)<<pCd3<<setw(2)<<pCd4<<endl;
                            cout<<"Points: "<<setw(3)<<pPts4<<endl;
                            if(pPts4>MX_PTS)
                            {
                                cout<<"Congratulations you win! Try again?";
                                cout<<" (y/n): ";
                                cin>>choice;  
                            }
                            else
                            {
                                cout<<"Program Points: "<<setw(4)<<pPts4<<endl;
                                cout<<"Player Points: "<<setw(5)<<pts1<<endl;
                                if (pts1>pPts4)
                                {
                                    cout<<"Congrats, you win! Play again? ";
                                    cin>>choice;
                                }
                                else if (pts1==pPts4)
                                {
                                    cout<<"It's a tie, try again? ";
                                    cin>>choice;        
                                }
                                else
                                {
                                    cout<<"You lose, try again? ";
                                    cin>>choice;        
                                }
                            }
                        } 
                        else if (pPts3>MX_PTS)
                        { 
                            cout<<"Congratulations you win! Try again? (y/n): ";
                            cin>>choice;
                        }
                        else
                        {
                            cout<<"Player points: "<<setw(5)<<pts1<<endl;
                            cout<<"Program Points: "<<setw(4)<<pPts3<<endl;
                            if (pts1>pPts3)
                            {
                                cout<<"Congratulations "<<name<<" you win!";
                                cout<<" play again? (y/n): ";
                                cin>>choice;
                            }
                            else
                            {
                                cout<<"You lose, play again?(y/n): ";
                                cin>>choice;
                            }    
                        }
                    }
                    else if (pPts2>MX_PTS)
                    { 
                        cout<<"Congratulations you win! Try again? (y/n): ";
                        cin>>choice;
                    }
                    else
                    {
                        cout<<"Player points: "<<setw(5)<<pts1<<endl;
                        cout<<"Program Points: "<<setw(4)<<pPts2<<endl;
                        if (pts1>pPts2)
                        {
                            cout<<"Congratulations "<<name<<" you have won!";
                            cout<<" would you like to play again? (y/n): ";
                            cin>>choice;
                        }
                        else
                        {
                            cout<<"You lose, play again? (y/n): ";
                            cin>>choice;
                        }     
                    }    
                }
                break;
            }
        }          
    }while (choice=='y' || choice=='Y');
    
    //Exit program!
    return 0;
}