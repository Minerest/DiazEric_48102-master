/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 9, 2016, 9:45 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int cel;        // celsius
    int fconv = 0; // conversion formula
    for (cel = 100; cel != fconv; cel--){
        fconv = ((9*cel)/5) + 32;

        if (cel == fconv){
            cout<<"Hey! Celsius and Farenheight are the same at "<<cel<<" degrees!"<<endl;
            break;
        }

     
        
    }
    
    
    return 0;
}

