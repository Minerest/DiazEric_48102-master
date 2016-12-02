/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on December 1, 2016, 1:39 AM
 */

#include <iostream>
#include <string>

using namespace std;

void swap(string [], int);
void disp(string[], int);

int main(int argc, char** argv) {
    
    
    const int NUM_NAMES = 20; 
    string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim", 
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                                "Taylor, Terri", "Johnson, Jill", 
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                                "James, Jean", "Weaver, Jim", "Pore, Bob", 
                                "Rutherford, Greg", "Javens, Renee", 
                                "Harrison, Rose", "Setzer, Cathy", 
                                "Pike, Gordon", "Holland, Beth" }; 
 
    
    swap(names,NUM_NAMES);
    disp(names, NUM_NAMES);
    
    
    return 0;
}

void swap(string arr[], int size){
    string temp;
    for (int i = 0; i < size; i++) {
        for (int x = 0; x < size; x++) {
            if (arr[i] < arr[x]){   //no xor operator, but I cant believe this works!
                temp = arr[x];
                arr[x] = arr[i];
                arr[i] = temp;
                
            }//close If
        }//close inner for
    }//close outer for
}//end

void disp(string arr[], int size){
    for (int i = 0; i < size; i++) {
         cout<<arr[i]<<" || ";
         if (i%12 == 0 && i!=0){
             cout<<endl;
         }

    }

}

