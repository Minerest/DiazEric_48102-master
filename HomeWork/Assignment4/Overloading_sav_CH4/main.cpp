/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 15, 2016, 7:09 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int abs (int i);
double abs (int a, long b, float c, double d);

int main(int argc, char** argv) {
    int z = -4;
    cout<<"abs(z) when int z = -4: ";
    abs(z);
    cout<<endl;
    
    int x = 10;
    long y = -34.234134;
    float j = -1.2;
    double k = 43434343.43;
    
    
    cout<<"abs(x,y,j,k) where variables are of different data types:";
    cout<<"x="<<x<<" y="<<y<<" j="<<j<<" k="<<k<<endl;
            
    abs(x,y,j,k);
    cout<<endl;
    return 0;
}


int abs (int i){
    if (i<0){
        i*=-1;
    }
    cout<<i;
}
    
double abs (int a, long b, float c, double d){
    float numArr[] = {a, b, c, d};
    for (int j = 0; j <= 3; j++){
        if (numArr[j] < 0){
                numArr[j]*=-1;
        }
        cout<<numArr[j]<<", ";
    }
} 

