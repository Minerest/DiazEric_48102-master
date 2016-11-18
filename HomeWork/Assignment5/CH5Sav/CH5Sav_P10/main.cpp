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

const float LBKGCONV = 2.2046; //2.2046 KG per pound.
const float OZLBCONV = 16.0f; //16 oz per pound

float calLB(float);
float calOz(float);
int main(int argc, char** argv) {
   
    bool boo = true;
    float kg, pounds, ounces;
    int pound, ounce;
    char c;
    do{

        cout<<"Hi, lets convert kilograms into pounds!"<<endl;
        cout<<"How many KG's do you want to convert?"<<endl;
        cin>>kg;


        while (kg < 0){
            cout<<"Invalid entry, try entering a number above 0!"<<endl;
            cin>>kg;
        }

        pounds = calLB(kg);
        ounces = calOz(pounds);
        pound = pounds;
        cout<<"You have "<<pound<<"pounds and "<<ounces<<" ounces!"<<endl;
        cout<<"Want to quit? Press 'z'"<<endl;
        cin>>c;
        if (c == 'z'){
            boo = false;
        }
    }while(boo);
    return 0;
}

float calLB(float kgs){
    float lb;
    lb = kgs*LBKGCONV;
    return lb;
}

float calOz(float lbs){
    int lb = lbs;
    float oz;
    oz = lbs - lb;  //Just keep the decimal. eg (float)10.5 - (int)10...
    oz*=OZLBCONV;
    return oz;
    
}