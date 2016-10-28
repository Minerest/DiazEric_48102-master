/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eric Diaz
 * pg 52/67
 * Part 3
 * Created on September 7, 2016, 5:54 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int numPods, peasPer, total;
    cout << "Hello! \n";
    cout << "Press return after entering a number.\n";
    
    cout << "enter the number of pods:\n";
    cin >> numPods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peasPer;
    
    total = numPods / peasPer;
    cout << "If you have ";
    cout << numPods;
    cout << " pea pods \n";
    cout << "and ";
    cout << peasPer;
    cout << " peas in each pod, then \n";
    cout << "you have ";
    cout << total;
    cout << " peas in all the pods. \n";
    cout << "Good-bye!\n";
    
    return 0;
}

