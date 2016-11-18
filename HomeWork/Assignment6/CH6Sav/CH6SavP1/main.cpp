//p400


#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout<<"Hi!"<<endl;
    cout<<"I'm going to search a file named 'search.dat' and find the biggest and smallest";
    cout<<" number in by throwing all the numbers into an array."<<endl;
    cout<<"I'll then output the biggest and smallest number for you to see!"<<endl;
    cout<<"1 moment please..."<<endl;
    
    ifstream arrDat;
    int SIZE = 80, big = 0, small = 100;
    int numArr[SIZE] = {0};
    arrDat.open("search.dat");
    for (int i = 0; i < SIZE; i++){
        arrDat>>numArr[i];
        if (numArr[i]>= big){
            big = numArr[i];
        }
        if (numArr[i] <= small && numArr[i] !=0){
            small = numArr[i];
        }
    }
    
    cout<<"The biggest number is "<<big<<endl;
    cout<<"And the smallest number is "<<small<<endl;
    
    return 0;
}

