/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 15, 2016, 4:57 AM
 */

#include <iostream>
#include <iomanip> // setprecision 
using namespace std;

/*
 * 
 */
// calculates inflation
float infl (float yr1, float yr2);

int main(int argc, char** argv) {
    bool boo = true;
    char in;
    float pr1, pr2, per;
    while (boo){
        cout<<"Let's study the amount of inflation that occurred last year"<<endl;
        cout<<"What was the price of a new honda civic from last year?"<<endl;
        cin>>pr1;

        cout<<"Sheesh! How about this years model?"<<endl;
        cin>>pr2;

        per = infl (pr1, pr2);

        cout<<"Approximate rate of inflation is ";
        cout<<fixed<<showpoint<<setprecision(3)<<per;
        cout<<"%!"<<endl;
        cout<<"Try another car? [y/n]"<<endl;
        
        cin>>in;
        if (in =='n'){
            boo = false;
        }
   
    } 
    
    
    return 0;
}

float infl (float yr1, float yr2){
    
    float per;
    
    per = (yr2-yr1)/yr1;
    
    return per;
    
    
}

