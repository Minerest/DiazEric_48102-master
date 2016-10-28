//Practice problem 7;
#include <iostream>

using namespace std;

    float G=6.673e-8f;          //cm^3/g/sec^2 GRAVITY
    float CNKgGRM = 10*10*10;
    float CNSGG = 14593.9;      // conversion from slugs to grams;
    float CNKm2M = 1000;
    float CNM2cm = 100;
    float CNDYNlb = 2.24809e-6;
    
int main(int argc, char** argv) {

    float plntMass = 5.972e24; //in KG
    float mrkMass = 6.0f;          // in slugs
    float r = 6371.0f;             //radius of earth in KM
    float weight;
    
    //converserions of inputs
    plntMass *= CNKgGRM;           //convert mass to grams
    mrkMass *= CNSGG;              //convert mark to grams
    r *= CNKm2M*CNM2cm;             // convert to cm
    
    weight = G*mrkMass*plntMass/r/r;
    weight *= CNDYNlb;
    cout<<weight;
    
    return 0;
}

