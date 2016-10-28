/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 15, 2016, 7:40 AM
 */
#include <iostream>

using namespace std;

/*
 * 
 */

double max (double a, double b);
float max (double c, double d, double e);

int main() {
    
    
    
    float q,w,e;
    cout<<"pick 2 or 3 numbers and I'll give you the biggest one!"<<endl;
    int choice;
    
    cout<<"how many numbers do you want to input?"<<endl;
    cin>>choice;
    while (choice != 3 || choice != 2){
        cout<<"only pick either 2 or 3"<<endl;
                
    }
    if (choice == 2){
        cout<<"Enter 1 number, press enter, and then enter the second number"<<endl;
        cin>>q>>e;
        max (q, e);
    }
    else{
        cout<<"enter a number, press enter. rinse and repeat"<<endl;
        cin>>q>>w>>e;
        max (q,w,e);
                
    }
      
    
    
    return 0;
}

double max (double a, double b){
    if (a > b){
        cout<<a;
        return a;
    }
    else{
        cout<<b;
        return b;
    }
}

float max (double c, double d, double e){
    double largest;
    largest = c;
    if (d>c){
        largest = d;
    }
    else if (e > c){
        largest = e;
    }
    cout<<largest;
    return largest;
}