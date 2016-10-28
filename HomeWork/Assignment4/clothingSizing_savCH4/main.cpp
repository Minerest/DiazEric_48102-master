/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 17, 2016, 2:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
float hatCalc(float weight, float height);
float waistCalc(float weight, float age);
float jktCalc(float height, float weight, float age);
int main(int argc, char** argv) {
    char cho;
    bool boo = true;
    
    float height, weight, age, hat, jkt, waist;
  
    while (boo){

        cout<<"Let's start by getting your height [in Inches]"<<endl;
        cin>>height;
        cout<<"How about your weight?[in Pounds}"<<endl;
        cin>>weight;
        cout<<"How about your age?[in years]"<<endl;
        cin>>age;

        hat = hatCalc (weight, height);
        cout<<"You're approximate hat size is "<<hat<<"."<<endl;
        waist = waistCalc(weight, age);

        cout<<"Your approximate waist size is "<<waist<<"."<<endl;
        jkt = jktCalc (height, weight, age);

        cout<<"Your jacket size is approximately "<<jkt<<"."<<endl;

        cout<<"Try again?[y/n]"<<endl;
        cin>>cho;
        
        if (cho == 'n'){
            boo = false;
        }
    }

    return 0;
}

float hatCalc (float weight, float height){
    float hatSize;
    hatSize = weight/height * 2.9;
    return hatSize;
}

float jktCalc (float height, float weight, float age){
    
    float jktSize;
    jktSize = height*weight / 288;
    float jktAdder = 0;
    if (age > 39){
        for (int i = age-40; i < age; i+=10){
            jktAdder += 1/8;
        }
        
    }
    jktSize += jktAdder;
    return jktSize;
    
}

float waistCalc (float weight, float age){
    float waist = weight/5.7;
    float waistAdd = 0;
    for (int i = 0; i<age-29; i+=2){
        waistAdd+= 1/10;
    }
    waist += waistAdd;
    return waist;
}