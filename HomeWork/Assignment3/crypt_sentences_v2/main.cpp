#include <iostream>// basic i/o
#include <string> // string functions
#include <string.h>//strlen function
using namespace std;


//          ENCRYPTION! Now with less memory usage.

/*
 *          Bug report
 * 
 *      Currently, short strings produce some unknown characters in the output
 *          Not sure what's going on
 * 
 *      long strings [longer than 80 characters?] also produce random characters
 *      towards the end of the string. 
 *          Maybe it has something to do with the null terminator?
 * 
 */


int main(int argc, char** argv) {

    string stur;            //create string
    getline (cin, stur);    //get input
    //cout<<stur<<endl;     // test input
    string::iterator it;    // create iterator
    int i = 0;              // initialize counter
    char Key ='I';
    char cryptArr[80];
                // Loop through the input string
    for (it = stur.begin(); it < stur.end(); it++, i++){
       // cout<< *it; Test the letters in the iteration
        cryptArr[i] = *it;              // shove it an array
       
      /*  if (it == stur.end()){ Tried adding a null terminator to solve a bug
            cryptArr[i+1] ='\0';    no cigar.
        }*/
        
        cryptArr[i] = cryptArr[i] ^ Key; // encrypt the array
        
        
        
        cout<<cryptArr[i];               // test the encrypted array
              
    }
  
    cout<<endl;
    
    for (int j = 0; j<i; j++){  // i is the length of the crypted array
                                // open sesame]
        cryptArr[j] = cryptArr[j] ^ Key;
      //  cout<<cryptArr[j];
    }
    
    cout<<cryptArr;
    
    return 0;
}

