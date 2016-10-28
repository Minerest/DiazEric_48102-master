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

// estimates inflation
float estInfl (float cur, float perc);

int main(int argc, char** argv) {
    bool boo = true;
    char in;
    float pr1, pr2, per, est1, est2;
    while (boo){
        cout<<"Let's study the amount of inflation that occurred last year"<<endl;
        cout<<"What was the price of a new honda civic from last year?"<<endl;
        cin>>pr1;

        cout<<"Sheesh! How about this years model?"<<endl;
        cin>>pr2;

        per = infl (pr1, pr2);

        cout<<"Approximate rate of inflation is ~";
        cout<<fixed<<showpoint<<setprecision(2)<<per;
        cout<<"%!"<<endl;
        
        est1 = estInfl(pr2, per);
        
        
        cout<<"The approximate price of next years model will be around $";
        cout<<fixed<<showpoint<<setprecision(2)<<est1<<endl;
//Did I just pass a function into a function?
                                //      ||
                                //      \/
        est2 = estInfl(est1, infl(pr2, est1));
        cout<<"And the price for the model the year after that will be around $";
        cout<<fixed<<showpoint<<setprecision(2)<<est2<<endl;
        
        
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
float estInfl (float cur, float perc){
    float estCst;
    
    estCst = cur*(1+perc);
    return estCst;
    
    
}

