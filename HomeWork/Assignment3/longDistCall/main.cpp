/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 9, 2016, 10:03 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int day, time, timeIn;
    char L1, L2;
    float rate, cost;
    cout<<"Welcome to telecomms Inc, let's calculate your rates for a given day"<<endl;
    cout<<"OK, let's start with what day you're going to be calling on"<<endl;
    cout<<"enter the first 2 letters of the day"<<endl;
    cin>>L1>>L2;
    
    // while loop validates input;
    while ((L1 != 'S'|| L1 != 's' || L1 != 'M' || L1 != 'm'|| L1 !='T'|| L1 !='t'|| L1 !='W'|| L1 !='w'|| L1 !='F'|| L1 !='f')
           && (L2 != 'o' || L2 != 'u'|| L2 != 'e'|| L2 != 'h'|| L2 != 'r'|| L2 != 'a')){
            
        
        cout<<"Invalid input, please try again"<<endl;
        cin>>L1>>L2;
    }
            
    
    cout<<L1<<L2;
    
    return 0;
}

