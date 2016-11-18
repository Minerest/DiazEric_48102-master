
/* 
 * File:   main.cpp
 * Author: Eric Diaz
 *Write a program that lets the user enter the total rainfall for each of 12 months into
an array of double s. The program should calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.
Input Validation: Do not accept negative numbers for monthly rainfall figures.
 * 
 */

#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;
float avg (int arr[], int);

int main(int argc, char** argv) {

    float average;
    int cho,totM=12, mArr[totM], max = 0, min = 100;
    int maxM, minM; // which month the max/min falls under
    cout<<"Welcome to the rainfall calculator"<<endl;
    cout<<"Press 1 if you want to enter the rainfall for the 12 months yourself."<<endl;
    cout<<"Enter any other number if you want the rainfall array randomly generated for you"<<endl;
    cin>>cho;
    if (cho == 1){
        cout<<"You really don't want to input all 12 values"<<endl;
        cout<<"I'll just do it for you..."<<endl;        
    }
    srand(time(0));
    cout<<"Rainfall for ";
    for (int i=0; i < totM; i++){
        mArr[i] = rand()%25;
        cout<<"month "<<i<<">"<<mArr[i]<<", ";
        if (mArr[i] > max){
            maxM=i;
            max = mArr[i];
        }
        if (mArr[i] < min){
            minM = i;
            min = mArr[i];
        }
                
    }
    cout<<endl;
    average = avg (mArr, totM);
    
    cout<<"The month with the most amound of rainfall is month "<< maxM<<" with "<<max<<" inches of rain"<<endl;
    cout<<"The month with the least amount of rain is month "<<minM<<" with "<<min<<" inches of rain"<<endl;
    cout<<"And the average yearly rainfall is "<<fixed<<showpoint<<setprecision(3)<<average<<" amount of inches"<<endl;
    
    
    
    
    return 0;
}

float avg(int arr[], int tot){
    float add=0;
    for (int i = 0; i < tot; i++){
        add+= arr[i];
    }
    add/=tot;
    return add;
}