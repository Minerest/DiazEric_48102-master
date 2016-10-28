/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on September 7, 2016, 6:46 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int int1, int2, add, mult;
    cout << "input 2 numbers to add and multiply!\n";
    cout << "first number?\n";
    cin >> int1;
    cout <<  "The second number?\n";
    cin >> int2;
    
    add = int1 + int2;
    mult = int1 * int2;
    cout << "Adding the two numbers results in \n";
    cout << add;
    cout << "\n";
    cout << "Multiplying the two numbers results in \n";
    cout << mult;
    
    //"drop off a key, Christian Perez within the next 4 hours. Just keep it t the gate"
    
            
    return 0;
}

