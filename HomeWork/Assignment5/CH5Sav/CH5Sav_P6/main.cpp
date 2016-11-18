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

float KgOzConv(float);
void outFunc(float);

float LBKGCNV = 2.2046; //2.2046 pounds per kg
float OZLBCNV = 16.0f; // 16 oz's per pound.

int main(int argc, char** argv) {

    bool rep = true;
    float lbs, kgs;
    char c;
    do{
        cout<<"Let's calculate the conversion from KG to Lb"<<endl;
        cout<<"How many kilograms of material do you have?"<<endl;
        cin>>kgs;
        while (kgs<0){
            cout<<"bad input, kgs?"<<endl;
            cin>>kgs;
        }
    
        lbs = KgOzConv(kgs);
        outFunc(lbs);
        cout<<"Press z to quit, else press anykey to repeat"<<endl;
        cin>>c;
        if (c == 'z'){
            rep = false;
        }
    }while(rep);
    return 0;
}

float KgOzConv(float kg){
    float lbs;
    lbs = kg*LBKGCNV;
    return lbs;
    
}


void outFunc(float out){
    cout<<"You converted the the kilograms to "<<out<<" pounds!"<<endl;
}