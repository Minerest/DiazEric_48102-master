/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on November 9, 2016, 2:50 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int ftCNVFunc();//MAIN function to convert feet to meters.
int metCNVFunc();//MAIN function to convert meters to feet.
void visOut(float);
float toFeet(int, int);
float toMetric(int, int); //Takes feet then inches as input, outputs in meters.





float METCNV = .3048;   // .3048 meters per foot;

int main(int argc, char** argv) {
    int choice;
    bool rep = true;
    do{        
    cout<<"Do you want to convert feet to meters? Press 1"<<endl;
    cout<<"Else, press 2 if you want to convert meters to feet"<<endl;
    cout<<"Any other input will terminate the program"<<endl;
    cin>>choice;

    switch(choice){
        case 1: 
            ftCNVFunc();
            break;
        case 2:
            metCNVFunc();
            break;
        default:
            rep = false;
            break;
    }
    }while (rep);

    return 0;
}

int metCNVFunc(){
    bool rep = true;
    char c;
    int feet, inches;
    float metVar;
    do{
        cout<<"I need to know how many feet we're converting to meters"<<endl;
        cin>>feet;
        cout<<"And how many inches to add to that?"<<endl;
        cin>>inches;
        while (inches >= 12 || inches <= 0 || feet <= 0){//input check...
            cout<<"bad inputs! Try again!"<<endl;
            cout<<"How many feet?"<<endl;
            cin>>feet;
            cout<<"How many inches?"<<endl;
            cin>>inches;
        }
        metVar = toMetric(feet, inches);
        visOut(metVar);
        cout<<"do-over?Press 'z' to quit"<<endl;
        cin>>c;
        if (c == 'z'){
            rep = false;
        }
    }while(rep);
    
    
    return 0;
}
int ftCNVFunc(){
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

float toMetric(int ft, int in){ //function for conversions
    float ft2m = ft+(float)in/12;
    ft2m *= METCNV;
    cout<<ft2m<<endl;
    
    return ft2m;

}

void visOut(float toOut){
    cout<<"You converted your input to "<<toOut<<"!"<<endl;
}
