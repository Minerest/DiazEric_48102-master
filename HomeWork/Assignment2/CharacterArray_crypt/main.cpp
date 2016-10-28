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
    char halp[SIZE];
    char answer[SIZE];
    char Key = 'M';
    cout<<"String to encrypt?"<<endl;
    cin>> halp;
    cout<<"String: "<<halp<<endl;
    char encrypt[SIZE];

    for (int i = 0; i<strlen(halp); i++){
        
        encrypt[i] = halp[i] ^ Key;
  
    }
    encrypt[strlen(halp)]='\0';
    cout<<"encryption: "<<encrypt<<endl<<"For Loop: ";
    
    for (int k = 0; k<strlen(encrypt); k++){
        answer[k] = encrypt[k] ^ Key;
        //cout<<answer[k];
    }
    answer[strlen(halp)]='\0';
    cout<<answer<<endl;
       
    return 0;
}

