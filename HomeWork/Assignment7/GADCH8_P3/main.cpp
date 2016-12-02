// LOTTERY NUMBERS BINARY SEARCH
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
 *  I was going to have a win week where I'd create a second copy of the yearly lottery
 *  numbers in the order they were generated and display the counter after a linear
 * search but I don't think the point is to do 2 searches in 1 problem unless I'm 
 * not thinking of something.
 */

int search(int[], int, int);   //inputs array, size, and numToSearch
void swap(int [], int);            //inputs 2 numbers and swaps their place
void disp(int[], int);               //displays the array

int main(int argc, char** argv) {
    int WEEKS = 52, NUMS = 10,winwk=0, yrLot[WEEKS], numPos, 
        guesses[NUMS] = {13579,  26791,  26792,  33445,  55555,
                        62483,  77777,  79422,  85647, 93121};
    bool win = false;
    srand(time(0));
    for (int i = 0; i < WEEKS; i++) {
         yrLot[i] = rand()%100000;  //fills out the lottery winning numbers for the year
         while(yrLot[i] <= 9999){//make sure all numbers are 5 digits
             yrLot[i] = rand()%100000;
         };
    }
    //yrLot[32] = 13579;        //FORCE A WINNING LOTTERY for science of course

    swap(yrLot, WEEKS);
    
    for (int i = 0; i < NUMS; i++) {
        numPos = search(yrLot, WEEKS, guesses[i]);
        if (numPos != -1){
            win = true;
            break;
        }
    }

    
    if (win){
        cout<<"I can't believe it, you won the lottery!!"<<endl;
        cout<<"Here's the list of the yearly lottery numbers"<<endl;
        disp(yrLot, WEEKS);
       
    }
    else{
        cout<<"Sorry, you never won the lottery."<<endl;
        cout<<"The winning lottery numbers for the year are as follows:"<<endl;
        disp(yrLot, WEEKS);

    }
    
    return 0;
}

int search(int arr[], int size, int numSrch){
    int beg = 0, end = size-1, mid, posi = -1;
    do{
        mid = (end+beg)/2;
        if (arr[mid] == numSrch){
           return posi = mid;
        }
        else if (arr[mid] > numSrch){
            end = mid-1;
        }
        else{
            beg = mid+1;
        }
    }while(beg<=end);
    return posi;
}

void swap(int arr[], int size){    
    for (int i = 0; i < size; i++) {
        for (int x = 0; x < size; x++) {
            if (arr[i] < arr[x]){
                arr[i] = arr[i]^arr[x];
                arr[x] = arr[i]^arr[x];
                arr[i] = arr[i]^arr[x];
            }//close If
        }//close inner for
    }//close outer for
}//end

void disp(int arr[], int size){
    for (int i = 0; i < size; i++) {
         cout<<arr[i]<<" ";
         if (i%12 == 0 && i!=0){
             cout<<endl;
         }

    }

}
