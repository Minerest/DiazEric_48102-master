/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int finder(int[], int, int);
int main(int argc, char** argv) {
    
    int SIZE = 10, min=551, place,counter = 0, arr[SIZE] = {0}, pick;
    bool ag = true;
    char c;
    srand(time(0));
    while (ag){
        cout<<"Pick a number to search for"<<endl;
        cin>>pick;
        cout<<"unsorted array!"<<endl;
        for (int i = 0; i < SIZE; i++){ //Fills the array with random numbers.
            arr[i] = rand()%20;    //up to 150.
            cout<<arr[i]<<", ";
        }

        for (int x = 0; x < SIZE; x++){ //main loop
            for (int z = x+1; z < SIZE; z++){   //does the entire loop for every increment
                if (arr[x]>arr[z]){         //swaps the numbers for ordered list
                    arr[x] = arr[x]^arr[z];
                    arr[z] = arr[x]^arr[z];
                    arr[x] = arr[x]^arr[z];
                    cout<<endl<<"x: "<<x<<" z:"<<z<<endl;   // prints out every swap so you can see which numbers swap every loop.
                    for (int test = 0; test < SIZE; test++){
                        cout<<arr[test]<<", ";
                    }
                    cout<<endl;
                }
            }

        }


        cout<<endl<<"Sorted array!"<<endl;
        for (int y = 0; y < SIZE; y++){
            cout<<"["<<y<<"]"<<arr[y]<<", ";
        }
        cout<<endl;
        int out = finder(arr, SIZE, pick);  // calls the finder function and sets the return value to the int 'out'
        if (out ==-1){
            cout<<"The number you are looking for is not found!"<<endl;
        }
        else{
            cout<<"The number you are looking for is located at position "<<out<<endl;
            cout<<arr[out]<<endl;
        }
        cout<<out;
        cin>>c;
        if (c == 'z'){
            ag = false;
        }
    }
    return 0;
}

int finder(int ar[], int n, int val){   //inputs are the array, SIZE, and pick [The number you're looking for]
    int start = 0, end = n-1;   // end is n-1 because the index starts at 0, not 1
    cout<<endl<<"val:"<<val<<endl;
    while (end>=start){     // Professor had a minor bug in this line of code that caused the search to fail when val was in the array
        int cut = (start+end)/2;        //Like the guessing game, this cuts the range to search for by half every loop until val is found
        cout<<cut<<endl;                //prints out where the next search is
        
        if (ar[cut] == val){            // returns the placement of where the searched value is
            return cut;
        }
        else if (ar[cut]<val){          // searches the larger half of cut
            start = cut+1;
        }
        else {                          // searches the smaller half of cut
            end = cut-1;
        }
    }
    return -1;                          // if all else fails, return negative 1.
    
    
}