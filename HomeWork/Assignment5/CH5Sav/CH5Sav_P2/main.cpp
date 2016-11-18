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

float toMetric(int, int); //Takes feet then inches as input, outputs in meters.
void visOut(float);
float METCNV = .3048; //.3048 meters per foot.

int main(int argc, char** argv) {   //function for inputs.
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
void visOut(float toOut){   //func for output.
    cout<<"You converted your input to "<<toOut<<"!"<<endl;
}
float toMetric(int ft, int in){ //function for conversions
    float ft2m = ft+(float)in/12;
    ft2m *= METCNV;
    cout<<ft2m<<endl;
    
    return ft2m;

}
