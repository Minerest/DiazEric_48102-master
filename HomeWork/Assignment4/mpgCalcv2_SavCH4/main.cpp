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
// takes input of liters and outputs miles per gallon
float mpgCal (float litr, float dis);


int main(int argc, char** argv) {
    char in;
    bool boo = true;
    while (boo){
        float mpg1, miles1, lit1, mpg2, miles2, lit2;
        
        cout<<"Ok, let's compare 2 cars to see who gets the better milage!"<<endl;
        cout<<"Ok, let's calculate mpg, first enter how far you drove in miles."<<endl;
        cin>> miles1;
        
        cout<<"Cool, you entered "<<miles1<<" miles! Now enter fuel consumption in liters"<<endl;
        cin>>lit1;
        
        mpg1 = mpgCal (lit1, miles1);
        cout<<"Awesome! You're getting "<<mpg1<<"miles per gallon in the first car!"<<endl;
        cout<<"Let's it for another car!"<<endl;
        cout<<"enter how far you drove in miles."<<endl;
        cin>>miles2;
        
        cout<<"Cool, you entered "<<miles2<<" miles! Now enter fuel consumption in liters"<<endl;
        cin>>lit2;
        mpg2 = mpgCal (lit2, miles2);
        if (mpg1 > mpg2){
            cout<<"Hey! The first car is getting the better mileage."<<endl;
        }
        else if (mpg2 > mpg1){
            cout<<"Oh hey, the second car is getting better mpg"<<endl;
        }
        else{
            cout<<"Whoa whoa whoa!!! We have a tie!!!"<<endl;
        }
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

