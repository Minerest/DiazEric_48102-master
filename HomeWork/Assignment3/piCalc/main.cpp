/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 11, 2016, 3:30 AM
 */

#include <iostream>
#include <math.h> //pow
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout<<"Ok, let's calculate pi!"<<endl;
    cout<<"How far do you want to go?"<<endl;
    int n;
    cin>>n;
    float pi = 4.f;
    float dec= 0.f;
    int power;
    cout<<"The actual fractions: ";
    for (int i=0; i < n; i++){
       
        power = pow (-1, i);        // pick whether it's positive or negative

        dec += (power / (2*i + 1)); // add the fraction
        if (i!= n-1){
            cout<<"("<<power<<"/"<<(2*i) + 1<<")"<<"+";  // check if the fraction is correct
        }
        else{
            cout<<"("<<power<<"/"<<(2*i) + 1<<")"<<endl;
        }

        
    }
    
    // for some reason adding the fractions only outputs 1?
     cout<<"added fractions: "<<dec<<endl;
    pi = pi * dec;  // following the formula
    cout<<"Pi = "<<pi<<endl;       // outputting pi;
    
    return 0;
}

