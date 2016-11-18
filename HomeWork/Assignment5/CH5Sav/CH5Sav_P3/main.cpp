/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on November 9, 2016, 2:37 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

float toFeet(int, int);
void visOut(float);         
float METCNV = .3048;   // .3048 meters per foot;

int main(int argc, char** argv) {
    bool rep = true;
    char c;
    int meters, cm;
    float stVar;
    do{
        
        cout<<"I need to know how many meters we're converting to feet"<<endl;
        cin>>meters;
        cout<<"And how many centimeters to add to that?"<<endl;
        cin>>cm;
        while (cm >= 100 || cm <= 0 || meters <= 0){//input check...
        cout<<"bad inputs! Try again!"<<endl;
        cout<<"How many meters?"<<endl;
        cin>>meters;
        cout<<"How many centimeters?"<<endl;
        cin>>cm;
        }
        stVar = toFeet(meters, cm);
        visOut(stVar);
        cout<<"do-over?Press 'z' to quit"<<endl;
        cin>>c;
        if (c == 'z'){
        rep = false;
        }
    }while(rep);
    

    return 0;
}

float toFeet(int m, int cm){
    float m2ft = m+(float)cm/100;
    m2ft *= 1/METCNV;
    return m2ft;
    
}
void visOut(float toOut){
    cout<<"You converted your input to "<<toOut<<"!"<<endl;
}