// LOTTERY NUMBERS
/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on November 30, 2016, 12:31 AM
 */

#include <iostream>
#include <ctime> //rand Seed
#include <cstdlib> //srand

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int WEEKS = 52, NUMS = 10,winwk, yrLot[WEEKS],
        guesses[NUMS] = {13579,  26791,  26792,  33445,  55555,
                        62483,  77777,  79422,  85647, 93121};
    bool win = false;
    srand(time(0));
    for (int i = 0; i < WEEKS; i++) {
         yrLot[i] = rand()%100000;  //fills out the lottery winning numbers for the year
         while(yrLot[i] <= 9999){
             yrLot[i] = rand()%100000;
         };
    }
    //yrLot[32] = 13579;        FORCE A WINNING LOTTERY for science of course

    for (int week = 0; week < WEEKS; week++) {
        for (int i = 0; i < NUMS; i++){
            if (guesses[i] == yrLot[week]){
                win = true;
                winwk = week;
            }
        }
    }
    if (win){
        cout<<"I can't believe it, you won the lottery on week "<<winwk<<"!"<<endl;
       
    }
    else{
        cout<<"Sorry, you never won the lottery."<<endl;
        cout<<"The winning lottery numbers for the year are as follows"<<endl;
        for (int x = 0; x < WEEKS; x++) {
             cout<<yrLot[x]<<" ";
             if (x%15 == 0 && x!=0){
                 cout<<endl;
             }

        }

    }
    
    return 0;
}

