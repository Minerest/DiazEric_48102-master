/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* adfadfad
 * File:   main.cpp
 * Author: Eric Diaz
 * Op 1 and Op 2 savitch 9th edition chapter one
 * 
 * purpose: add subtract multiply mod;
 * 
 * results for 
 * Created on September 13, 2016, 10:39 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int op1, op2;
    cout<<"input 2 integer values to add, subtract, multiply divide and mod."<<endl;
    cin>>op1>>op2;
    
    // display results;
    cout<<op1+op2<<"="<<op1<<"+"<<op2<<endl;
    cout<<op1-op2<<"="<<op1<<"-"<<op2<<endl;
    cout<<op1*op2<<"="<<op1<<"*"<<op2<<endl;
    cout<<op1/op2<<"="<<op1<<"/"<<op2<<endl;
    cout<<op1%op2<<"="<<op1<<"%"<<op2<<endl;
    
    return 0;
}

