/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eric Diaz
 * pg 52/67
 *
 * Created on September 7, 2016, 5:54 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int L, W, total;
    cout << "Hello! \n";
    cout << "Let's measure your fence! Press return after entering a number.\n";
    
    cout << "enter the width:\n";
    cin >> W;
    
    cout << "Enter the length:\n";
    cin >> L;
    
    total = W*2 + 2*L;
    cout << "If the area is ";
    cout << W;
    cout << " feet wide \n";
    cout << "and ";
    cout << L;
    cout << " feet long, \n";
    cout << "you need ";
    cout << total;
    cout << " feet of fence to close off the area.\n";
    cout << "Good-bye!\n";
    
    return 0;
}

