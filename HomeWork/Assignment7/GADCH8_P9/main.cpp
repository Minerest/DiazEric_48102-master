/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on December 2, 2016, 1:59 AM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int selS(int [], int );
int bubS(int [], int );

int main(int argc, char** argv) {
    
    int SIZE = 20, bubArr[SIZE] = {0}, selArr[SIZE] = {0}, randN, n2p;
    int bCnt = 0, selCnt = 0;
    srand(time(0));
    for (int i = 0; i < SIZE; i++){
        randN = rand()%25;
        bubArr[i] = randN;
        selArr[i] = randN;
    }

    n2p = rand()%SIZE;
    bCnt = bubS(bubArr, SIZE);
    selCnt = selS(selArr, SIZE);
    cout<<"bubble sort array: ";
    for (int iz = 0; iz < SIZE; iz++){
        cout<<bubArr[iz]<<" ";
    }
    cout<<endl<<"selection sort array: ";
    for (int x = 0; x < SIZE ; x++){
        cout<<selArr[x]<<" ";
    }

    cout<<endl;
    cout<<"Let's keep track of the amount of operations each sorting function makes"<<endl;
    cout<<"2 identical arrays were made and 2 types of sorting functions were used to"
            " sort the arrays and keep track of the count"<<endl;
    cout<<"The bubble sort took "<<bCnt<<" amount of swaps to sort the array"<<endl;
    cout<<"The selection sort took "<<selCnt<<" amount of swaps to sort the array"<<endl;
            
    
    return 0;
}

int selS(int arr[], int size){
    int temp,cnt=0;
    for (int i = 0; i < size; i++) {
        for (int x = 0; x < size; x++) {
            if (arr[i] < arr[x]){   
                cnt++;
                temp = arr[x];
                arr[x] = arr[i];
                arr[i] = temp;
                
            }//close If
        }//close inner for
    }//close outer for
    return cnt;
}

int bubS(int arr[], int size){
    int cnt = 0, i = 0;
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
        }
    }while(flag);
    return cnt;
    
}
