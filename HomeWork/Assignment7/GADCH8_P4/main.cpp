/*
 CHARGE ACCOUNT VALIDATION V2
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on November 30, 2016, 12:02 AM
 */
#include <vector>
#include <iostream>

using namespace std;

/*
 * 
 */
int search(int arr[], int size, int numSrch);

//So I did the selection sort for problem 1 and decided to revisit a sorting algorithm
// I did when I took your Javascript class. I came a pretty far way.
void sorting(int[],int);

int main(int argc, char** argv) {
    int SIZE = 18, //18 card numbers on file
        usrIn, sNum;  
    bool crdChk, ag = true;
    char in;
    int valid[SIZE] = { 5658845,  4520125,  7895122,  8777541,  8451277,  1302850, 
                    8080152,  4562555,  5552012,  5050552,  7825877,  1250255, 
                    1005231,  6545231,  3852085,  7576651,  7881200,  4581002};
                    
    for (int i = 0; i < SIZE; i++){
        sorting(valid,SIZE);
    }    


    do{
        cout<<"Thanks for filling up your cart, please enter a valid card number to continue"<<endl;
        cin>>usrIn;
        sNum = search(valid, SIZE, usrIn);
        if (sNum!=-1){
            cout<<"Thank you for making your purchase, a charge of $299 will show up on your account shortly"<<endl;
            cout<<"Your bottle of the finest craft soda should arrive at your house no later than 2 weeks from now."<<endl;
            ag = false;
        }
        else{
            cout<<"Couldn't find your card on file, perhaps a type? press 'z' to quit"<<endl;
            cin>>in;
            if (in == 'z'){
                ag = false;
            }
        }
    }while(ag);
    cout<<"GOODBYE!"<<endl;
    return 0;
}
int search(int arr[], int size, int numSrch){
    int beg = 0, end = size-1, mid, posi = -1;
    bool flag = true;
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

void sorting(int array[], int size){
    int placeHolder;
    for (int num = 0; num < size; num++){
    if (array[num] > array[num+1]){
            placeHolder = array[num]; // set placeholder
            array[num] = array[num+1]; // Move object down a spot
            array[num+1] = placeHolder; // set original (arr[num] up a spot
        }
    }
}

