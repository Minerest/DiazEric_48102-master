/* 
   File:   main
   Author: Eric Diaz
   Created on October 6h, 2016, 12:02 PM

 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random number generator
#include <ctime>      //Time
#include <string>     // string functions
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    char comp;    //Computers choice
    char usrInpt;      //Our rock/paper/scissors
    string usrOut;
    string compOut;
    
    bool again = true;
    char choice;
    while (again){
        //Input Computer values
        comp=rand()%4+80;
        while(comp=='Q'){       //Generate new random letter
            comp=rand()%4+80;
        }
            // convert the single character into a relevant string
        if (comp == 80){
            compOut = "Paper";
        }
        else if (comp == 82){
            compOut = "Rock";
        }
        else{
            compOut = "Scissors";
        }

        //Input our rock,paper,scissors
        cout<<"Input your choice R-Rock,P-Paper,S-Scissors"<<endl;
        cin>>usrInpt;
        switch(usrInpt){
            case 'r':
            case 'R':usrInpt='R';
            usrOut = "Rock";
                break;

            case 's':
            case 'S':usrInpt='S';
            usrOut = "Scissors";
                break;

            default: usrInpt='P';
            usrOut = "Paper";
                break;
        }

        //Display Output
        cout<<"The computer generate a "<<compOut<<endl;
        cout<<"The player type in a    "<<usrOut<<endl;

        //Determine the winer and display
        if(comp==usrInpt){
            cout<<"You both tied each other"<<endl;
        }else if(comp=='P'){
            if(usrInpt=='S')cout<<"The player wins"<<endl;
            else cout<<"The computer wins"<<endl;
        }else if(comp=='S'){
            if(usrInpt=='R')cout<<"The player wins"<<endl;
            else cout<<"The computer wins"<<endl;
        }else{
            if(usrInpt=='P')cout<<"The player wins"<<endl;
            else cout<<"The computer wins"<<endl;
        }
        cout<<"Again? Enter Y or N"<<endl;
        cin>>choice;
        if (choice == 110 || choice == 78){
            again = false;
            cout<<"Hope you had fun!";
        }
                
    }
        //Exit Program
    return 0;
}