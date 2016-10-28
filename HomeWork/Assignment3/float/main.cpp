/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 8, 2016, 5:07 AM
 */

#include <iostream>
#include <cmath>    //pi

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float weight;
    float rad;
    float water = 62.4; // lb/ft^3
    float vol;
    cout<<"Let's check if the ball floats!"<<endl;
    cout<<"Enter how much the ball weighs[in pounds]"<<endl;
    cin>>weight;
    cout<<"ok! You entered "<<weight<<". What's the radius of the ball? [in feet]"<<endl;
    cin>>rad;
    cout<<"cool! you entered "<<rad<<"ft."<<endl;
    
    //crunching numbers
    vol = (4/3) * M_PI * rad * rad * rad;
    
    if (vol * water <= weight){
        cout<<"Oh hey! It floats!"<<endl;
        cout<<"vol*water ="<<vol*water
    }
    else {
        cout<<"Oh nope, it doesn't float!";
        cout<< "The weight of the ball is "<<weight<<" and it needs to displace";
         cout<< vol*water;
               
    }
    
    
    return 0;
}

