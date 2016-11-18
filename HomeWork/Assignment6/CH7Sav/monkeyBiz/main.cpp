
/* 
 * File:   main.cpp
 * Author: Eric Diaz
 *
 */

#include <iostream>

using namespace std;
const int rows = 3, cols = 5;   //yes yes globals... but in this case, it's ok?
float calav (int arr[rows][cols], int r, int c);

int main(int argc, char** argv) {
    float av;
    int fdA[rows][cols];
    cout<<"Ok, we need to keep track of how much our monkeys are eating!"<<endl;
    cout<<"I wrote a program to help us 5 days out of the week for each of our monkeys"<<endl;
            
    for (int i = 0; i < rows; i++){
        cout<<"Enter the amount of food monkey "<<i+1<<" ate on day";
        for (int j = 0; j < cols; j++){
            cout<<j+1<<" ";
            cin>>fdA[i][j];
            while (fdA[i][j] < 0){
                cout<<"Please try again and enter a positive number"<<endl;
                cin>>fdA[i][j];
            }
        }
    }
    
    av = calav(fdA, rows, cols);
    cout<<"Average food eaten by all monkeys is "<<av<<" pounds of food per day"<<endl;
            
    
    return 0;
}

float calav (int arr[rows][cols], int r, int c){
    float avg = 0;
    int count= 0;
    for (int z = 0; z < r; z++){
        for (int y = 0; y < c; y++){
            avg+=arr[z][y];
            count++;
        }
    }
    avg/=count;
    return avg;
          
}

