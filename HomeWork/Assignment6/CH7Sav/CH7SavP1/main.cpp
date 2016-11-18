
/* 
 * p469
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool firstLast2(int arr[], int);
int main(int argc, char** argv) {

    int x, Size = 10, FLArr[Size];
    bool cond;
    for (int i = 0; i < Size; i++){
        srand(time(0)*(i+23));  //genereate a new random seed to pull numbers from every loop
        x = rand()%10+1;        //Pick a number between 1 and 10.
        FLArr[i] = x;
        cout<<FLArr[i]<<" ";
    }
    cout<<endl;
    cond = firstLast2(FLArr, Size);
    if (cond){
        cout<<"There's a 2 in either the first or last position!"<<endl;
    }
    else{
        cout<<"There is no 2 in either the first or last position!"<<endl;
    }
    
    
    return 0;
}

bool firstLast2 (int arr[], int num){
    if (arr[0] == 2 || arr[num] == 2){
        cout<<"True"<<endl;
        return true;
    }
    else{
        cout<<"Faslse"<<endl;
        return false;
    }
    
}