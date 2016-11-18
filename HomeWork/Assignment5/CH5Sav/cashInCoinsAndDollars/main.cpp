/*
 * To cash this license header, choose License Headers in Project Properties.
 * To cash this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>

using namespace std;

void cashOut(float);

int main(int argc, char** argv) {
    bool rep = true;
    char c;
    float cash;
    
    while (rep){
        cout<<"Hi!"<<endl;
        cout<<"Lets see the different denominations of cash you'd get given the ";
        cout<<"amount of cash given"<<endl;
        cout<<"Please give me a number over 100"<<endl;
        cin>>cash;
        while (cash <= 0){
            
            cout<<"Whoops! Please give me a number greater than 0"<<endl;
            cin>>cash;
        }
        cout<<"You entered "<<cash<<" cents!"<<endl;
        cashOut(cash);
        cout<<"To quit, press z!"<<endl;
        cin>>c;
        if (c == 'z'){
            rep = false;
        }
    }
    return 0;
}


void cashOut(float tot){
    int Hun = 0, Fif = 0, Twe = 0, Ten = 0, Fiv = 0, One = 0, Q=0, D=0, P=0; //Quarters, dimes and pennies.
    bool boo = true;
    while (tot >= 100){
        Hun++;
        tot-=100;
    }
    while(tot >= 50){
        Fif++;
        tot-=50;
    }
    while(tot >= 20){
        Twe++;
        tot-=20;
    }
    while(tot>= 10){
        Ten++;
        tot-=10;
    }
    while(tot >= 5){
        Fiv++;
        tot-=5;
    }
    while(tot>=1){
        One++;
        tot--;
    }
    
    while (tot >= .25){
        Q++;
        tot -= .25;
        
    }
    while (tot >= .10){
        D++;
        tot -= .10;
    }
    while (tot >= .01){
        P++;
        tot-=.01;
    }

//int Hun = 0, Fif = 0, Twe = 0, Ten = 0, Fiv = 0, One = 0, Q=0, D=0, P=0; //Quarters, dimes and pennies.

    cout<<"Given the amount of cash as the input, you have "<<Hun<<" 100's, "<<Fif<<" 50's, "<<Twe<<" 20's, ";
    cout<<Ten<<" 10's, "<<Fiv<<" 5's, "<<One<<" singles, "<<Q<<" quarters, "<<D;
    cout<<" dimes, and "<<P<<" pennies!"<<endl;
    
    
    
}
