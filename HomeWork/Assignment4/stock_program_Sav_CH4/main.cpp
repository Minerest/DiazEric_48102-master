/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 15, 2016, 4:24 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

float shareCalc(int denom, int numi, int whol);
    

int main(int argc, char** argv) {

    float total;
    unsigned int shMon, top, bot, shares;
    bool boo = true;
    char rep;
    while (boo){
        cout<<"Hey, let's calculate your stock!"<<endl;
        cout<<"How many shares do you own?"<<endl;
        cin>>shares;
        
        cout<<"Cool, you have "<<shares<<"shares! What's the whole dollar price of the shares?"<<endl;
        cin>>shMon;
        
        cout<<"How about the fraction portion? [enter the numerator and then enter the denominator"<<endl;
        cin>>top;
        cin>>bot;
        
        cout<<"You entered "<<shMon<<" and "<<top<<"/"<<bot<<"dollars."<<endl;

        total = shareCalc(bot, top, shMon);
        total *= shares;
        cout<<"Your shares are worth "<<total<<"$, you must be the top 1%!"<<endl;
        cout<<"Want to try again? y/n"<<endl;
        
        cin>> rep;
        if (rep == 'n'){
            boo = false;
        }
        
        
    }
            
    
    
    return 0;
}

float shareCalc(int denom, int numi, int whol){
    float total;
    total = whol + static_cast <float>(numi)/denom;
    return total;
    
    
}

