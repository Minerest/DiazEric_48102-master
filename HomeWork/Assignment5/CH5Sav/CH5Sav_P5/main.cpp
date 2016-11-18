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

/*
 * 
 */
float ozKgConv(int, int);
void outFunc(float);


float LBKGCNV = 2.2046; //2.2046 pounds per kg
float OZLBCNV = 16.0f; // 16 oz's per pound.

int main(int argc, char** argv) {
    int lbs, oz;
    bool rep = true;
    char c;
    float toOut;
    
    do {
    
        cout<<"Alright, so let's calculate the conversion from lb to KG"<<endl;
        cout<<"How many pounds of material do you have?"<<endl;
        cin>>lbs;
        cout<<"Cool, and how about the oz'?"<<endl;
        cin>>oz;
        
        while (oz >= 16 || lbs < 0 || oz < 0){
            cout<<"bad input!"<<endl;
            cout<<"Pounds?"<<endl;
            cin>>lbs;
            cout<<"oz?"<<endl;
            cin>>oz;
        }
        
        toOut = ozKgConv(lbs, oz);
        outFunc(toOut);
        
        cout<<"Press z to quit."<<endl;
        cin>>c;
        if (c == 'z'){
            rep = false;
        }
    }while (rep);
    
    
    
    return 0;
}

float ozKgConv(int lb, int oz){
    float KG;
    lb += (float)oz/OZLBCNV;
    KG = lb*LBKGCNV;
    return KG;
}
void outFunc(float out){
    cout<<"You converted the the pounds to "<<out<<" Kilograms!"<<endl;
}
