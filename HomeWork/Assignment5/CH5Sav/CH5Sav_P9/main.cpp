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
#include <cmath>    //pow


using namespace std;
/*********************************************************
 Looks like there is a typo in the book's equation. 
 The Equation given is 
    13.12 + .6215 * t - 11.37 * pow(v, 0.16) + 0.3965 * t * pow(v, 0.016);
 However, multiple sources cite                                      || different decimal values
    13.12 + .6215 * t - 11.37 * pow(v, 0.16) + 0.3965 * t * pow(v, 0.16);
 
 
  
  
 Given these changes, I still can't get the wind chill factor from my program to match 
 other websites that claim to give the wind chill factor index.
 
 
 * I've also seen a couple of other websites listing a different formula to calculate
 * the wind chill index so this may be the core issue I'm having. 
 
 *********************************************************/


float cWChill(float, float);  //takes the temp and wind speed, outputs wind chill index

int main(int argc, char** argv) {
    
    float wChill, v;
    float temp;
    bool rep = true;
    char c;
    do {
        cout<<"Welcome to the windchill index simulator"<<endl;
        cout<<"The windchill index only works when the temperature is below 10 degrees C"
                <<endl;
        cout<<"Keep in mind, the coldest place on Earth at ground level reaches about -90 degrees C in "<<endl;
        cout<<"Antartica recorded by the Soviet Vostok Station"<<endl;
        cout<<"Please enter the approximate temperature"<<endl;
        cin>>temp;
        
        while (temp >= 10 || temp <=-90){
            cout<<"Sorry the temperature you entered falls outside of the valid range"<<endl;
            cout<<"Please enter a number between -90 and 10"<<endl;
            cin>>temp;
        }
        
        cout<<"Cool! You entered a chilly temp of "<<temp<<" degrees!"<<endl;
        cout<<"Now, the wind chill index depends on the velocity of the wind"<<endl;
        cout<<"What is the speed of  the wind outside in meters per second?"<<endl;
        cin>>v;
        
        wChill = cWChill(temp, v);
        
        cout<<"The wind chill index for the temperature of "<<temp<<" and the velocity of "<<endl;
        cout<<v<<" is "<<wChill<<" degrees C"<<endl;
        
        cout<<"Press 'z' to quit the program, else press any key to repeat"<<endl;
        cin>>c;
        
        if (c == 'z'){
            rep = false;
        }
        
    }while(rep);
    
    return 0;
}

float cWChill(float t, float v){    //equation taken from the book.
    float wCh;
    wCh = 13.12 + (.6215 * t) - (11.37 * pow(v, 0.16)) + (0.3965 * t * pow(v, 0.16));
    /*wCh = 13.12;      //At first I thought I was messing up the order of operations
    wCh += .6215 * t;   // but both ways of calculating equal the same result
    wCh -= 11.37 * pow(v, 0.16);
    wCh += (0.3965 * t * pow(v, 0.16));*/
    
    return wCh;
    
}

