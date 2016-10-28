

/* 
 * File:   main.cpp
 * Author: ericd
 *
 * Created on October 8, 2016, 2:10 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    float acBal;        //account balance
    float i1, i2;       //interest rate
    float total;        // total interest
    float min;          // minimum payment
    float pay;          // how much the user pays
    char again;         //loop break
    bool loop = true;   // boolean to check if they want to pay more money
    
    cout<< "How much do you owe at this time? No credit over 50,000 can be issued"<<endl;
    cin>> acBal;
    while (acBal < 0 || acBal >= 50000){
        cout<<"Invalid input, enter an account balance between 0 and 50,000"<<endl;
        cin>> acBal;
        
    }
    cout<<"OK you entered $"<< acBal<<endl;
    /*
 *Write a program to compute the interest due, total amount due, and the minimum payment for a revolving credit account. 
 * The program accepts the account balance as input, then adds on the interest to get the total amount due. 
 * The rate schedules are the following: The interest is 1.5 percent on the first $1,000 and 1 percent on any amount over that. 
 * The minimum payment is the total amount due if that is $10 or less;
 *  otherwise, it is $10 or 10 percent of the total amount owed, whichever is larger. 
 * Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.
 */
    while (loop){           //loop to check for next months payment.
                            // set the minimum payment due.
        if (acBal > 10){

            min = acBal / 10;
        }
        else {

            min = acBal;
        }

        
        
        cout<<"The minimum payment for your balance is "<<fixed<<showpoint<<setprecision(2)<< min<<endl;
        cout<<"How much do you expect to pay?"<<endl;
        cin>>pay;
        
        while (pay < min || pay > acBal){  // check if payment is correct input
            if (pay < min + .009 && pay > min - .009){  // crude rounding
                break;
            }
            else if (pay < min){
                cout<<"Maybe I stuttered? You need to pay at least "<<min<<" or else."<<endl;
            }
            else {
                cout<<"Yo, you only owe $"<<fixed<<showpoint<<setprecision(2)<<acBal<<"..."<<endl;
                        
            }
            cin>>pay;
        }
        
        cout<<"Great! Now that we have your payment of $"<<fixed<<showpoint<<setprecision(2)<<pay<<", we can move on."<<endl;
        
                            // calculate the interest
        acBal -= pay;
        cout<<"Before interest, you have a balance of $"<<fixed<<showpoint<<setprecision(2)<<acBal<<endl;

        if (acBal < 1000){
            i1 = acBal * .015;
            total = i1;
            cout<< "You are going to be charged $"<<fixed<<showpoint<<setprecision(2)<<total;
            cout<<" in interest for this month."<<endl;
        }
        else if (acBal <= 0){
            total = 0;
        }
        else {
            i1 = 1000 * .015;
            i2 = (acBal - 1000) * .01;
            total = i1 + i2;
            cout<<"You are going to be charged $"<<fixed<<showpoint<<setprecision(2)<<total;
            cout<<" in interest for this month."<<endl;
        }
        acBal += total;
        if (total > 0){
            cout<<"You now owe $"<<fixed<<showpoint<<setprecision(2)<<acBal<<"."<<endl;
        }
        else{
            cout<<"Oh sweet! Consider yourself debt free!"<<endl;
            break;
        }
        cout<<"Calculate next month's payment? Enter Y or N"<<endl;
        cin>>again;
        if (again == 110 || again == 78){
            break;
        }

    }
    
    
    return 0;
}