/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 10, 2016, 2:39 AM
 */

#include <iostream>

using namespace std;

/*
 *  I have no idea what's going on. Major bug on input. 
 */
int main(int argc, char** argv) {

    int days, amt, total;
    int ima;
    cout<<"Hi! Please enter the weight of crud you wish to start with in pounds"<<endl;   
    cin>>ima;
    
    cout<<"Ok, you entered "<<amt<<" pounds. How long do you want to incubate?"<<endl;
    cin>>days;
    amt = 0;
    // crunch some numbers
    for (int i = 0; i <= days; i++){
        
        if (i % 5 == 0 && i != 0){
            
            total = ima+amt;
            ima = amt;
            amt = total;
            
            
            
                    
        }
                   cout<<"total:"<<total<<" "<<i<<" ima: "<<ima<<endl;

    }
    
    return 0;
}

