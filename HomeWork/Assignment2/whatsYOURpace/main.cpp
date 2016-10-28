/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eric Diaz;
 *
 * Created on September 22, 2016, 12:22 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float mph, minPMile, minPHr;
    minPHr = 60; //seconds in an minute
    cout<<"What's your speed in mph?"<<endl;
    cin>>mph;
    minPMile = mph / minPHr;
    cout<<"You are running "<<minPMile<<" miles per minute!"<<endl;    
    
    return 0;
}

