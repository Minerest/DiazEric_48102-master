/* 
 * File:   main.cpp
 * Author: Eric Diaz
 *
 */

#include <iostream>
#include <ctime>


using namespace std;

int main(int argc, char** argv) {
                                
    int n, SIZE = 200, nArr[SIZE], bigArr[SIZE], count = 0;
    
    cout<<"Let's see how many numbers is larger than your input"<<endl;
    cout<<"I'm going to create an array with a bunch of random numbers smaller than 100"<<endl;
    cout<<"You're going to input a number to see which and however many numbers are greater than that"<<endl;
    cin>>n;
    srand(time(0));
    
    for (int i = 0; i < SIZE; i++){
        nArr[i] = rand()%100;
        if (nArr[i]>n){
            bigArr[count] = nArr[i];
            count++;
        }
    }

    cout<<"There are "<<count<<" numbers bigger than your input, "<<n<<endl;
    cout<<"The numbers are ";
    for (int j =0; j < count; j++){
        cout<<bigArr[j]<<", ";
        if (j%15 == 0){
            cout<<endl;
        }
        
    }
    
    return 0;
}

