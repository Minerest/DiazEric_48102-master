/*
 CHARGE ACCOUNT VALIDATION
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on November 30, 2016, 12:02 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int SIZE = 18, //18 card numbers on file
        usrIn;  
    bool crdChk, ag = true;
    char in;
    int valid[SIZE] = { 5658845,  4520125,  7895122,  8777541,  8451277,  1302850, 
                    8080152,  4562555,  5552012,  5050552,  7825877,  1250255, 
                    1005231,  6545231,  3852085,  7576651,  7881200,  4581002};
    do{
        cout<<"Thanks for filling up your cart, please enter a valid card number to continue"<<endl;
        cin>>usrIn;
        for (int i = 0; i < SIZE; i++){
            if (valid[i] == usrIn){
                crdChk = true;
                break;
            }
            else{
                crdChk = false;
            }
        }
        if (crdChk){
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

