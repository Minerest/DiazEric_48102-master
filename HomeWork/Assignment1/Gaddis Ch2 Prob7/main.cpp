/*
 *
 * 860 feet @ Riverside
 * 1.5mm per year
 * How high will it rise after 5, 7, 10 years
 * 
 */

/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: To calculate when homeowners in Riverside will have 
 * beachfront property.
 * Created on September 13, 2016, 11:53 AM
 */

#include <iostream>

using namespace std;

const float conversion = 304.8; //    304.8mm per foot
const float convMMtoM = 1000;
/*
 * 
 */
int main(int argc, char** argv) {

    float rate = 1.5; // sea level rise per year in mm per year;
    int nyear1 = 5, nyear2 = 7, nyear3= 10;
    float rise1, rise2, rise3;
    int tot2Riv; // total years until sea hits Riverside
    float rivElev = 860; // riverside elevation in feet
    
    
    rise1= rate*nyear1;
    rise2= rate*nyear2;
    rise3= rate*nyear3;
    
    tot2Riv=rivElev/rate*conversion;
    
    // displays
    
    cout<<"The rate of sea level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nyear1<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nyear2<<" years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nyear3<<" years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<"At this rate, Riverside won't have beach front property for ";
    cout<<tot2Riv<<" years"<<endl;
    cout<<"This rise equates to "<<tot2Riv*rate/convMMtoM<<" meters"<<endl;
    return 0;
}

