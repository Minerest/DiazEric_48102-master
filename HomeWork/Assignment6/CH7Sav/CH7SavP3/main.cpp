
/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void swapFrontBack(int &, int&);

int main(int argc, char** argv) {
    
    int x, SZ = 40, FLArr[SZ], tot=0;
    cout<<"How many numbers would you like to input? [1-40]";
    cin>>tot;
    while (tot <1 || tot > 40){
        cout<<"Try again, pick a number between 1 and 40"<<endl;
        cin>>tot;
    }
    srand(time(0)*(23));
    for (int i = 0; i < tot; i++){

        x = rand()%10+1;        //Pick a number between 1 and 10.
        FLArr[i] = x;
        cout<<FLArr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The first position is "<<FLArr[0]<<" and the last position is "<<FLArr[tot-1];
    swapFrontBack (FLArr[0], FLArr[tot-1]);
    cout<<"After swapping them, First is "<<FLArr[0]<<"And the last is "<<FLArr[tot-1];
            
    
    
    return 0;
}


void swapFrontBack (int& n1, int& n2){
    
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
        
}