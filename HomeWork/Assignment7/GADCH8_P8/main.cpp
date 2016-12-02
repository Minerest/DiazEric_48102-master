/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void swap(int [], int);
void disp(int [], int);
int binSearch(int [], int , int );
int linSearch(int [], int, int);

int main(int argc, char** argv) {
    srand(time(0));
    int SIZE = 20, numArr[SIZE] = {0}, binCnt = 0, linCnt = 0,num2s=rand()%SIZE;
    for (int i = 0; i < SIZE; i++){
        numArr[i] = rand()%100;

    }
    cout<<"Hi! Lets see how many operations each search completes before finding the number"<<endl;
    cout<<"A random number will be selected from a randomly generated array"<<endl;
    cout<<"The values returned will be how many counts each loop makes"<<endl;
    
    disp(numArr, SIZE);cout<<endl;
    swap(numArr, SIZE);
    disp(numArr,SIZE);cout<<endl;
    binCnt = binSearch(numArr,SIZE,numArr[num2s]);
    linCnt = linSearch(numArr,SIZE,numArr[num2s]);
    cout<<"The number we're searching for is "<<num2s<<endl;
    cout<<"The binary search made "<<binCnt<<" operations before number was found"<<endl;
    cout<<"The linear search made "<<linCnt<<" operations before number was found"<<endl;
    
    
    
}    

void swap(int arr[], int size){
    int temp;
    for (int i = 0; i < size; i++) {
        for (int x = 0; x < size; x++) {
            if (arr[i] < arr[x]){   
                temp = arr[x];
                arr[x] = arr[i];
                arr[i] = temp;
                
            }//close If
        }//close inner for
    }//close outer for
}//end

void disp(int arr[], int size){
    for (int i = 0; i < size; i++) {
         cout<<arr[i]<<", ";
         if (i%21 == 0 && i!=0){
             cout<<endl;
         }

    }

}
int linSearch(int arr[], int size, int numSrch){
    for (int x = 0; x < size; x++){
        if (arr[x] == numSrch){
            return x;
        }
    }
    return -1;
}
int binSearch(int arr[], int size, int numSrch){
    int beg = 0, end = size-1, mid, posi = -1, cnt = 0;
    do{
        cnt++;
        mid = (end+beg)/2;
        if (arr[mid] == numSrch){
           return cnt;
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