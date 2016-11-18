/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, char** argv) {
    int SIZE = 34, count = 0, a;
    float med = 0;
    int arr[SIZE] = {0};
    
    ifstream p3dat;
    p3dat.open("p3.dat");
    
    cout<<"Ok, we're going to find the median from a list of numbers from the file p3.dat"<<endl;
    cin>>a;
    p3dat>>arr[0];
    count++;
    for(int i = 0; i < SIZE-1; i++){
        p3dat>>arr[i];

        if(arr[i] == 0){
            break;
        }     
        cout<<arr[i]<<" ";
        count++;



    }
    if (count % 2 == 0){
        med = ((float)arr[count/2]+arr[count/2+1])/2;
    }
    else{
        med = arr[count/2+1];
    }
    
    cout<<"The median from p3.dat is "<<med<<endl;
    return 0;
}

