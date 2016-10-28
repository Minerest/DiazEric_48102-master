/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 27, 2016, 11:20 AM
 */

#include <iostream>
#include <string.h>
using namespace std;

/*
 * 
 */
int main(void) {

    int SIZE=80;
    string halp;
    string answer;
    char Key = 'M';
    cout<<"String to encrypt?"<<endl;
    cin>> halp;
    cout<<"String: "<<halp<<endl;
    string encrypt;

    cout<<"Encryption: ";
    for (int i = 0; i<halp.length(); i++){
        encrypt+= static_cast<char>(halp[i] ^ Key);
    }
    cout<<encrypt<<endl;
    
    cout<<"Unencrypted: ";
    for (int k = 0; k<halp.length(); k++){
        answer +=static_cast<char>(encrypt[k] ^ Key);
    }
    cout<<answer<<endl;
       
    return 0;
}

