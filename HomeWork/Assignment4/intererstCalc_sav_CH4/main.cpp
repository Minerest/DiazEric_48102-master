/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 15, 2016, 6:06 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
// Calculates new balance for next month
float balCalc (float bal, float rate);


int main(int argc, char** argv) {
    // months
    unsigned int mnths;
//initial balance,interestRate, Interest To Pay, dynamic balance
    float iBal, rate, itp, dBal;
    bool boo = true;
    char in;
    while (boo){
    
        cout<<"Let's calculate how much interest you're going to be paying if";
        cout<<"you don't make any payments for however many months"<<endl;
        cout<<"How many months do you want to put your loan off?"<<endl;
        cin>> mnths;

        cout<<"How much money do you owe?"<<endl;
        cin>>iBal;

        cout<<"And finally, what's your APR? [e.g. 23.2% = 23.2]"<<endl;
        cin>>rate;
        rate /= 100; // convert to decimal
        rate /= 12; // convert to monthly interest
        dBal = iBal; 


        for (int i = 1; i <= mnths; i++){
            dBal = balCalc (dBal, rate);
            if (i%4 == 0){
                cout<<"After "<<i<<" months, you owe $"<<fixed<<showpoint<<setprecision(2)<<dBal<<endl;
            }
        }

        itp = dBal - iBal;
        cout<<"Because you put off paying your bills for "<<mnths<<" months,"<<endl;
        cout<<"you're going to be paying $"<<fixed<<showpoint<<setprecision(2)<<itp;
        cout<<"!"<<endl;
        
        cout<<"Do you want to try again? [y/n]"<<endl;
        cin>>in;
        if (in == 'n'){
            boo = false;
        }
               
    }
    
    return 0;
}

float balCalc (float bal, float rate){
    float newBal;
    newBal = bal * (1+rate);
    return newBal;
    
}

