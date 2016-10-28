/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 22, 2016, 11:54 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float ozToTon;
    ozToTon = 35273.92; // 35k_oz/1ton
    float tonToOz = 1/*ton*//35273.92/*oz*/;
    float cerealWeight;
    float numBoxes;
    bool answ;
    int again;
    
    answ = true;
    
    while (answ){
        cout << "What's the weight of that cereal in oz's?"<<endl;
        cin>> cerealWeight;
        cout << "You threw in "<<cerealWeight<<" oz's."<<endl;

        numBoxes = ozToTon / cerealWeight;
        cout<<"You'd need "<<numBoxes<<" boxes of cereal to have a ton of cereal"<<endl;
        cout<<"again? '0' for no or '1' for yes"<<endl;
        cin>>again;
        if (again == 1){
            answ = true;
        }
        else{
            answ = false;
        }
        
    }
    
        
    return 0;
}


