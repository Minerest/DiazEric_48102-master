 /* 
 * File:   main.cpp
 * Author: ericd
 * Purpose: 
 *      To create a game where the player has to navigate a maze and pass through
 *      A series of levels to win the game.
 *          Eventually, I'd like to create a dynamically created map with a random chance
 *      per level to win the game. With the dynamically created map, I'd also
 *      like the player vision to be limited to about 20% of the entire grid
 *      for added difficulty.
 *      
 * 
 *     
  *         sequential
  *         branching (if, if/else)
  *         repetition (for, do/while)
  * 
  * 
 * 
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool crashCheck();  //Checks if player collides with any object in the map.

int xMarksTheSpot ();//little animation function.

                    //Checks the size of the map by getting the first line of the map.dat file.
                    //Will most likely update this in the next version.
void inputSwitch();
void clrScn();      // clears the output screen to only show one map at a time.
void dimChecker();// Checks for player input.
bool endMsg(int);       
string mapCheck ();  //prints out map with the player character.
string mapOpener(); //switch case statement based on the level
void sMsg();        //displays message about rules etc.










int prow, pcol, rows, cols, trow, tcol;
int moves, level = 0;

bool round = true, game = true;
char pmov;


int main(int argc, char** argv) {

    sMsg();
    
    while(game){ 
        // LOOP UNTIL PLAYER IS DONE
        level++;
        dimChecker();     //At the beginning of the game, check the size of the map.
        moves = 0;
            cout<<rows<<" "<<cols<<" "<<prow<<" "<<pcol<<" "<<trow<<" "<<tcol<<endl;
    char tester;
    cin>>tester;
        while (round){

            moves++; 
            mapCheck();     //prints out the map right before the stop point.
            cin>>pmov;      //Wait for player input.
            clrScn();       //Make it look pretty.

            if (pmov != 'z'){   //Check if player wants to quit
            inputSwitch();   //really sorry about this. Originally made the game with global variables
            }                                                                                   //
            else{
                
                game = false;
                break;
            }           //close if/else
        }                //close level loop    
        round = true;
    }                   //close game loop
    cout<<endl;
      
    return 0;
}



void inputSwitch(){
    switch (pmov){  // switch statement to check for the different player moves
            case 'w':
                prow-=1;
                //(int &level, int rs, int &pr, int &pc, int trow, int tcol, bool &game, bool &round, int moves)
                if (prow <= 0 || crashCheck()){  //Checks to insure player is making a valid move.
                    cout<<"Sorry, invalid move!"<<endl;
                    prow+=1;                
                }
                break;
                
            case 'a':
                pcol -= 1;
                
                if (pcol <= 0 || crashCheck()){
                    cout<<"Sorry, invalid move!"<<endl;
                    pcol+=1;
                }
                break;

            case 's':                
                prow += 1;
                cout<<prow<<endl;
                if (prow > rows || crashCheck()){
                    cout<<"Sorry, invalid move!"<<endl;
                    prow-=1;  
                }
                break;
                
            case 'd':
                pcol += 1;   
                
                if (pcol > cols|| crashCheck()){
                    cout<<"Sorry, invalid move!"<<endl;
                    pcol -=1;
                }
              
                
                break;
               
            default:
                cout<<"FATAL ERROR"<<endl;
                break;
    }
    
}

void dimChecker(){
    ifstream dim;
    string dimS;
 
    switch (level){
        case 1:
            dim.open("map.dat");
            
            break;
        case 2:
            dim.open("map2.dat");
            break;
        case 3:
            dim.open("map3.dat");
            break;

            
        default:
            cout<<"What is going on???"<<endl;
            break;
    }
    dim>>rows>>cols>>prow>>pcol>>trow>>tcol;              //rows>>cols>>prow>>pcol>>trow>>tcol;
    getline(dim, dimS);
    dim.clear();
    dim.close();
}


void clrScn(){
    for (int j = 0; j < 30; j++){
        cout<<endl;
    }
}

string mapCheck (){ // prints out the map, line by line.
    string line;       
    ifstream in;
    ofstream out;
    switch (level){
         case 1:

             in.open("map.dat");

            break;
        case 2:
            in.open("map2.dat");

            break;
        case 3:

            in.open("map3.dat");
            break;
        

        default:
            cout<<"Something is up"<<endl;
            break;
            
    }
    
    out.open("player.dat");
    for (int i=0; i <= rows; i++){
        getline(in, line);
        
        if (i == prow && line[pcol-1] == '.'){
            line[pcol-1] = 'O';

        }

        cout<<line<<endl;
        out<<line;
    }
    in.clear();
    in.close();
    
    return line;

}

bool crashCheck(){
    string xChk;
    ifstream chk;
    switch (level){
         case 1:

             chk.open("map.dat");

            break;
        case 2:
            chk.open("map2.dat");

            break;
        case 3:

            chk.open("map3.dat");
            break;


        default:
            round = false;
            game = false;
    }        
    for (int z = 0; z <= rows; z++){
        getline(chk, xChk);
        if (z == prow && xChk[pcol-1] == 'x'){  //collision is made
            chk.clear();
            chk.close();
            return true;
        }
        else if (z == prow && xChk[pcol-1] == 'T'){
            xMarksTheSpot();
            prow = trow;
            pcol = tcol;
        }
        
        else if (z == prow && xChk[pcol-1] == 'A'){
            round = false;
            
            cout<<"Hey you win!"<<endl;
            if (endMsg(moves)){
                
                game = false;
                
            }
            else{
                round = false;
            }
            
        }
        
    }           //close for loop
    chk.clear();
    chk.close();
    return false;
}


bool endMsg(int mv){
    bool end;
    char endC;
    cout<<"You have finished the map in "<<mv<<"moves!"<<endl;
    cout<<"Next level? press n/N to exit, any other key to continue";
    cin>>endC;
    if(endC == 'n' || endC == 'N'){
        return true;
    }
    else return false;
}

void sMsg(){
    char vari;
    cout<<"Welcome to the maze runner simulation game"<<endl;
    cout<<"The goal is to reach the exit at the end of the maze to advance to";
    cout<<"the next level."<<endl;
    cout<<"The exit is labeled as the 'A' character."<<endl;
    cout<<"There are teleportation devices throughout the map.";
    cout<<"Those are labeled with the 'T' character."<<endl;
    cout<<"You move with the WASD keys, follow the path around the map to win the game"<<endl;
    cout<<"press any key to continue"<<endl;
    cin>>vari;
    
    
}

int xMarksTheSpot (){
    int width = 126;
    int usrIn = width;
    int num = 0;
    char sp1 = 33;
    char sp2 = 126;
    do{
        for (int i = 0; i <= width; i++){
            for (int j = 1; j <= width; j++){

                if (j == sp1){

                    cout<<sp1;
                }
                else if (j == sp2) {
                    cout<<sp2;
                }
                else{
                    cout<<" ";
                }

            }

            sp1+=1;
            sp2-=1;
            if (sp1 == 125){
                sp1 = 33;
            }
            if (sp2 == 33){
                sp2 = 125;
            }
            usrIn--;

        }
        num++;
    } while (num < 5);
    clrScn();
    
}


