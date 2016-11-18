/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */

float calcAv (float,float,float,float); //takes 4 values and finds the mean.
float preSig (float, int);              // values to add before dividing by how many.
float calcStDev (int, int, int, int, int);   //calls preSig and calcAv and returns standard deviation.
int main(int argc, char** argv) {
    bool rep = true;
    int s1, s2, s3, s4, terms;
    terms = 4;
    char c;
    do{
        cout<<"Pick the 4 integers you want to find the standard deviation of!"<<endl;
        cin>>s1>>s2>>s3>>s4;
        
        float output = calcStDev(s1, s2, s3, s4, terms);
        cout<<"The standard dev of "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" is "<<output;
        cout<<endl;
        
        
        cout<<"Repeat? Press z to quit"<<endl;
        cin>>c;
        if (c == 'z'){
            rep = false;
        }
    }while (rep);
    cout<<"test are checked for accuracy against https://www.easycalculation.com/statistics/standard-deviation.php"<<endl;
    cout<<"known stDev values of 15, 1, 43, and 2 is 16.94661"<<endl;;
    cout<<"The function gives us "<<calcStDev(15,1,43,2, terms);
  
    
    return 0;
}

float calcStDev (int x1, int x2, int x3, int x4, int amtTerms){
    int numArr [4] = {x1, x2, x3, x4};
    float avg = calcAv ((float)x1, (float)x2, (float)x3, (float)x4);
    float ans = 0;
    
    for (int i = 0; i < amtTerms; i++){
        ans += preSig (avg, numArr[i]);
    }
    ans = ans/amtTerms;
    ans =  sqrt(ans);
    return ans;}


float calcAv (float n1, float n2, float n3, float n4){  //using 4 floats to prevent 
    float av;                                           //dropping a decimal.
    
    av = (n1+n2+n3+n4)/4;
    cout<<"The average of the 4 inputs is "<<av<<endl;
    return av;
    
}

float preSig (float ave, int Si){   //Repeat for the amount of terms(4) in the assignment.(S1 - ave)^2 + (S2 - ave)^2...
    float val;
    val = (Si - ave)*(Si - ave);
    return val;
    
}