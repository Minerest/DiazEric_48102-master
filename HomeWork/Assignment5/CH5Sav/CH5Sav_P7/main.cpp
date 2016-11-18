/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ericd
 */

#include <iostream>
#include <cmath>

using namespace std;

void calPer (float, float, float, float &, float &);    //Calculates area and perimeter.
bool triChk (float, float, float);  //Checks for valid trianlges, returns boolean


int main(int argc, char** argv) {
    float ar, peri, sid1, sid2, sid3;
    
    cout<<"Ok, lets try to calculate the area of a triangle!"<<endl;
    cout<<"I'm going to check the validity of the triangle and ";
    cout<<"I'm going to give you the area. Lets start with the 3 sides."<<endl<<"Whats the first one?"<<endl;
    cin>>sid1;
    cout<<"Side 2?"<<endl;
    cin>>sid2;
    cout<<"side 3?"<<endl;
    cin>>sid3;
            
    
    
    calPer (sid1, sid2, sid3, ar, peri);
    cout<<"Area is "<<ar<<endl;
    cout<<"And the perimeter is "<<peri<<endl;
    
    
    
    
    return 0;
}

bool triChk (float a, float b, float c){
    if (a+b <= c){
        return false;
    }
    else if (b + c <= a){
        return false;
    }
    else if (a + c <= b){
        return false;
    }
    else return true;
}

void calPer (float s1, float s2, float s3, float &area, float &per){
    float semi;
    bool boo;
    boo = triChk(s1, s2, s3);

    while (s1 < 0 || s2 < 0 || s3 < 0 || !boo){
        cout<<"Whoa whoa whoa, somethings up here. Let's try having some valid inputs!"
                <<endl;
        cout<<"Lets start with the first side."<<endl;
        cin>>s1;
        cout<<"How about the second one?"<<endl;
        cin>>s2;
        cout<<"Last but not least, side number 3"<<endl;
        cin>>s3;
        boo = triChk(s1, s2, s3);

    }
    
    per = s1+s2+s3;
    
    semi = per/2;
    
    area = sqrt(semi * (semi - s1)*(semi - s2) * (semi - s3));
    
    
}