/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 8, 2016, 3:54 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(void) {

    int primeArr[100]={0};
    int check;
    int isPrime;
    int counter = 0;

    
    
    for (int isPrime = 3; isPrime < 100; isPrime++){

        for ( check = 2; check< isPrime; check++){

            if (isPrime % check == 0){

                break;
            }
            else if (check == isPrime-1){
                primeArr[counter] = isPrime;
                counter++;
            }

        }
    }

    for (int j = 0; j < counter; j++){
        cout<<primeArr[j]<<" | ";
    }
    
    return 0;
}

