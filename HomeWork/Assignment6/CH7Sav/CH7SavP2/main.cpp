/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;


int count2s(int arr[],int num);

int main(int argc, char** argv) {
   
    int x, Size = 30, FLArr[Size], twos = 0;
    for (int i = 0; i < Size; i++){
        srand(time(0)*(i+23*i));  //genereate a new random seed to pull numbers from every loop
        x = rand()%10+1;        //Pick a number between 1 and 10.
        FLArr[i] = x;
        cout<<FLArr[i]<<" ";
    }
    twos = count2s(FLArr, Size);
    cout<<"There are "<<twos<<" 2's in the randomly generated array"<<endl;
    
    return 0;
}


int count2s(int arr[], int num){
    int count = 0;
    for (int j = 0; j < num; j++){
        if (arr[j] == 2){
            count++;
        }
    }
    cout<<count<<endl;
    return count;
}