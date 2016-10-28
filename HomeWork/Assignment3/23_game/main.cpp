/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 10, 2016, 3:11 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int pieces = 23; // amt left
    int play;   // player move
    int comp;   // computer move
    bool last;
    
    cout<<"ok let's play 23!"<<endl;
    while (pieces > 0){
        cout<<"How many pieces do you want to take?"<<endl;
        cout<<"There are "<<pieces<< " left"<<endl;
        cin>>play;
        while (play > 3 || play <= 0 || play > pieces){
            if (play > pieces){
                cout<<"grabbed too many!"<<endl;
            }
            else{
                cout<<"please pick 1, 2 or 3"<<endl;
                
            }
            cin>>play;
        }
        pieces -= play;
        last = true;
        if (pieces > 0){
            if (pieces == 1){
                last = true;
                cout<<"Computer took the last piece"<<endl;
                break;
            }
            if (pieces >= 1 && pieces <= 3){
                comp = pieces -1;
            }
            else{
                            
                comp = 4 - play;
                pieces -= comp;
                
            }
            cout<<"The computer took "<<comp<<" out"<<endl;
        }
        last = false;

       
    }
        if (last){
            cout<<"congrats! You win!"<<endl;
            
        }
        else{
            cout<<"congrats! you lost!"<<endl;
        }
    return 0;
}

