/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 * pg 246
 * Created on October 15, 2016, 3:15 AM
 */

#include <iostream>

using namespace std;

const float L2G = 0.264179; //.26 gallon to 1 liter conversion

float mpgCal (float litr, float dis);


int main(int argc, char** argv) {
    char in;
    bool boo = true;
    while (boo){
        float mpg, miles, lit, gal;
        cout<<"Ok, let's calculate mpg, first enter how far you drove in miles."<<endl;
        cin>> miles;
        cout<<"Cool, you entered "<<miles<<" miles! Now enter fuel consumption in liters"<<endl;
        cin>>lit;
        cout<<"Cool, you drove "<<miles<<" miles!"<<endl;

        mpg = mpgCal (lit, miles);
        cout<<"Awesome! You're getting "<<mpg<<"miles per gallon!"<<endl;
        cout<<"Another calculation? y/n"<<endl;
        cin>>in;
        if ( in == 'n'){
            boo = false;
        }
        else if (in == 'y'){
            boo = true;
        }
        else {
            cout<<"Error!"<<endl;
            boo = false;
        }
    }
    return 0;
}

float mpgCal (float litr, float dis){
    float mpg;
    mpg = dis / (litr * L2G);
    return mpg;
    
}

