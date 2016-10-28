

/* 
 * File:   main.cpp
 * Author: ERic Diaz
 *
 *  Mean/Average = (x1+x2+x3+x4+etc...)/#x's
 * 
 * 
 * Created on September 13, 2016, 12:27 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int x1, x2, x3, x4, x5; //Input values
    float avg, stdev;
    
    // inputs
    cout<< "This program calculates the mean and standard deviation"<<endl;
    cout<<"Input 5 values, please"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    avg = (x1+x2+x3+x4+x5)/5;
    stdev = pow(((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x3-avg)+(x4-avg)
            *(x4-avg)+(x5-avg)*(x5-avg))/4,0.5);
    
    
    cout<<"Input Values = "<<x1<<", "<<x2<<", "<<x3<<", "<<x4<<", "<<x5<<endl;
    cout<<"The mean is = " <<avg<<endl;
    cout<<"The Standard Deviation = "<<stdev<<endl;
    
    return 0;
}

