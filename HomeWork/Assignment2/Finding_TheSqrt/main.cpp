/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 20, 2016, 11:19 AM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

const float  MAXRAND=pow(2,31)-1;    // max signed pos value for int.

/*
 * 
 */
int main(int argc, char** argv) {

    srand(static_cast<unsigned int>(time(0)));
    short cnt = 0;
    float n, guess, r;  
    float scale, shift;    //Variables
    // float random number between 10-100;
    scale = 1120;
    shift = 54;
    
    n = rand()/MAXRAND*scale+shift;
    guess = n/2;

    //display initialization
    cout<<"Number to find sq Rt of = "<<n;
    cout<<endl<<"The initial guess = "<<guess<<endl;
    // first pass
    r = n/guess;
    guess =(guess+r)/2;
    cnt++;
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    
    cout<<"pass "<<cnt<<"[r, guess] = "<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    // second pass
    r = n/guess;
    guess =(guess+r)/2;
    cnt++;
    cout<<"pass "<<cnt<<"[r, guess] = "<<r<<", "<<guess<<"]"<<endl;
   
    
    // third pass
    r = n/guess;
    guess =(guess+r)/2;
    cnt++;
    cout<<"pass "<<cnt<<"[r, guess] = "<<r<<", "<<guess<<"]";
         // first pass
    r = n/guess;
    guess =(guess+r)/2;
    cnt++;
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    
    cout<<"pass "<<cnt<<"[r, guess] = "<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    // second pass
    r = n/guess;
    guess =(guess+r)/2;
    cnt++;
    cout<<"pass "<<cnt<<"[r, guess] = "<<r<<", "<<guess<<"]"<<endl;
   
    
    // third pass
    r = n/guess;
    guess =(guess+r)/2;
    cnt++;
    cout<<"pass "<<cnt<<"[r, guess] = "<<r<<", "<<guess<<"]";
         
    // first pass
    r = n/guess;
    guess =(guess+r)/2;
    cnt++;
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    
    cout<<"pass "<<cnt<<"[r, guess] = "<<setw(7)<<r<<", "<<setw(7)<<guess<<"]"<<endl;
    
    
    cout<<"The sqrt of "<<n<<" is equal to "<<sqrt(n)<<endl;
    cout<<time(0);
    
    return 0;
}

