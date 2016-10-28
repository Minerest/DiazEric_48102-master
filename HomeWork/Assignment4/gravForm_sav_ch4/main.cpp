/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 15, 2016, 6:35 AM
 */


#include <iostream>  

using namespace std;  


//Global Constants
float GRAVITY=6.673e-8f;  //Universal Gravity Constant cm^3/g/sec^2
float CNKGGRM=1000;       //Conversion from KG to Grams
float CNSGGRM=14593.9;    //Conversion from Slugs to Grams
float CNKMMET=1000;       //Conversion from Km to Meters
float CNMETCM=100;        //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;//Conversion from Dynes to Pounds
float CNSGLBS=32.174f;    //Conversion from slugs to lbs which oddly acceleration of gravity in ft/sec^2


int main(int argc, char** argv) {
    //Declaration of Variables
    float msEarth=5.972e24;//Google lookup -> Kilograms
    float wIn;              //Weight Input in slugs
    float rdEarth=6371.0f; //Google radius of the earth km
    float weight;          //Force of attraction from Physics
    bool boo = true;
    char in;
    while (boo){

        cout<<"We're here to find out the force between 2 masses"<<endl;
        cout<<"How many slugs does the first mass weight?"<<endl;

        cin>>wIn;

        //Conversion of inputs
        msEarth*=CNKGGRM;      //Convert mass of the earth to grams
        wIn*=CNSGGRM;       //Convert weight to grams
        rdEarth*=CNKMMET*CNMETCM;//Convert the radius of the earth to centimeters

        //Process values -> Map inputs to Outputs
        weight=GRAVITY*wIn*msEarth/rdEarth/rdEarth;//Weak force attraction due to Gravity
        weight*=CNDYNLB;      //Convert dynes to pounds

        //Display Output
        cout<<"According to the Weak Force of Gravity the person weighs ~"<<weight<<"lbs"<<endl;
        cout<<"again?[y/n]"<<endl;
        cin>> boo;
        if (in == 'n' || in == 'N'){
            boo = false;
        }
    }
    return 0;
}
