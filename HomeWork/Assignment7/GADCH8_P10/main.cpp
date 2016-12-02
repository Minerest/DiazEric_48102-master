/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on December 2, 2016, 2:57 AM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void selS(int [], int );
void bubS(int [], int );
int main(int argc, char** argv) {

    char in;
    int SIZE = 8, bArr[SIZE] = {0}, sArr[SIZE] = {0};
    srand(time(0));
    for (int i = 0; i < SIZE; i++){
        int n = rand()%25;
        bArr[i] = n;
        sArr[i] = n;
    }
    
    cout<<endl<<"selection sort array: ";
    selS(sArr, SIZE);
    cout<<endl<<endl<<endl;
    cout<<"press any key to display the bubble sort array";
    cin>>in;

    bubS(bArr,SIZE);
    
    return 0;
}
void selS(int arr[], int size){
    int temp,cnt=0;
    for (int i = 0; i < size; i++) {
        for (int x = 0; x < size; x++) {
            if (arr[i] < arr[x]){   
                cnt++;
                temp = arr[x];
                arr[x] = arr[i];
                arr[i] = temp;
                
            }//close If
            for (int z = 0; z < size; z++){
                cout<<arr[z]<<" ";
            }
            cout<<endl;
        }//close inner for
    }//close outer for
}

void bubS(int arr[], int size){
    int cnt = 0;
    bool flag = true;
    do{
        flag = false;
        for (int c = 0; c < (size-1); c++){
            if (arr[c] > arr[c+1]){
                cnt++;
                arr[c] = arr[c]^arr[c+1];
                arr[c+1] = arr[c]^arr[c+1];
                arr[c] = arr[c]^arr[c+1];
                flag = true;
            }
            for (int i = 0; i < size; i++){
                cout<<arr[i]<<" ";
                        
            }
            cout<<endl;
        }
    }while(flag);    
}
