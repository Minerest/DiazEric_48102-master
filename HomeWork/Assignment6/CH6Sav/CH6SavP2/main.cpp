/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on November 15, 2016, 1:28 AM
 */

#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int SIZE = 30;
    ifstream data;
    data.open("p2.dat");
    float avg = 0;
    int arr[SIZE] = {0};
    for (int i = 0; i < SIZE; i++){
        data>>arr[i];
        cout<<arr[i]<<" ";
        avg+=arr[i];  
    }
  /*  for (int j = 0; j <= SIZE-1; j++){  //SIZE-1 to not count the trailing 0 into the average.
        avg += arr[j];
    }*/
    avg/=SIZE;
    cout<<"the average is "<<avg<<endl;
    
    return 0;
}

