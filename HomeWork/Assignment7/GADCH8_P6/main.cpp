/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on December 1, 2016, 1:54 AM
 */

#include <iostream>
#include <string>

using namespace std;

void swap(string [], int);
void disp(string[], int);
int search(string[], int, string);

int main(int argc, char** argv) {
    
    int testN;  
    string inp1, sTest = "Harrison, Rose";
    const int NUM_NAMES = 20; 
    string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim", 
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                                "Taylor, Terri", "Johnson, Jill", 
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                                "James, Jean", "Weaver, Jim", "Pore, Bob", 
                                "Rutherford, Greg", "Javens, Renee", 
                                "Harrison, Rose", "Setzer, Cathy", 
                                "Pike, Gordon", "Holland, Beth" }; 
 
    
    swap(names,NUM_NAMES);
    disp(names, NUM_NAMES);
    
    cout<<"Enter a name you'd like to search for"<<endl;
    cout<<"Please enter in [Last_Name, First_Name] format"<<endl;
    getline(cin,inp1);
    testN = search(names,NUM_NAMES, inp1); 
    if (testN == -1){
        cout<<"Sorry, couldn't find who you're looking for"<<endl;
    }
    else{
        cout<<"Cool! The name was found!"<<endl;
    }
       testN = search(names,NUM_NAMES, sTest); 
       cout<<"This is test code"<<endl;
    if (testN == -1){
        cout<<"Sorry, couldn't find who you're looking for"<<endl;
    }
    else{
        cout<<"Cool! The name was found!"<<endl;
    }
    
    return 0;
}

void swap(string arr[], int size){
    string temp;
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

void disp(string arr[], int size){
    for (int i = 0; i < size; i++) {
         cout<<arr[i]<<" || ";
         if (i%12 == 0 && i!=0){
             cout<<endl;
         }

    }

}

int search(string arr[], int size, string numSrch){
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
