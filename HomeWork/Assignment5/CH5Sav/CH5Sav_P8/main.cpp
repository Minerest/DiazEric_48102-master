/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>

using namespace std;

//  Did not understand the book instructions of what to do. Wrote a program that instead
//calculates the amount of change you'd receive given a number between 0 & 100.
// ie if the input is 26, you'd get 1 quarter and a penny etc.

void nOfCoins(int);

int main(int argc, char** argv) {
    bool rep = true;
    char c;
        
    while (rep){
        int change;
        cout<<"Hi!"<<endl;
        cout<<"Lets see the different denominations of change you'd get given the ";
        cout<<"amount of change given"<<endl;
        cout<<"Please give me a number between 0 and 100"<<endl;
        cin>>change;
        while (change <= 0 || change >= 100){
            
            cout<<"Whoops! Please give me a number between 0 and 100"<<endl;
            cin>>change;
        }
        cout<<"You entered "<<change<<" cents!"<<endl;
        nOfCoins(change);
        cout<<"To quit, press z!"<<endl;
        cin>>c;
        if (c == 'z'){
            rep = false;
        }
    }
    return 0;
}


void nOfCoins(int tot){
    int Q=0, D=0, P=0; //Quarters, dimes and pennies.
    while (tot >= 25){
        Q++;
        tot -= 25;
        
    }
    while (tot >= 10){
        D++;
        tot -= 10;
    }
    while (tot >= 1){
        P++;
        tot--;
    }
    
    cout<<"Given the amount of cents as the input, you have "<<Q<<" quarters, "<<D;
    cout<<" dimes, and "<<P<<" pennies!";
    
    
    
}