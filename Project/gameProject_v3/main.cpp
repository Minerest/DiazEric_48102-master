#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void xMarksTheSpot ();  // animation function
void clrScn();          // more aesthetics.


int main(int argc, char** argv) {
    int moves, level = 0, mt;   //Empty[mt] is just a place holder.
    bool round, load = false, game = true;
    char pmov, vari;  
    ifstream dim;
    string dimS, crsStr;
    ofstream gameSave;
    cout<<"Welcome to the maze runner simulation game"<<endl;
    cout<<"The goal is to reach the exit at the end of the maze to advance to";
    cout<<"the next level."<<endl;
    cout<<"The exit is labeled as the 'A' character."<<endl;
    cout<<"There are teleportation devices throughout the map.";
    cout<<"Those are labeled with the 'T' character."<<endl;
    cout<<"You move with the WASD keys, follow the path around the map to win the game"<<endl;
    cout<<"You can save the game after you begin by pressing 'p'"<<endl;
    cout<<"You can also load a game by pressing 'p' right now"<<endl;
    cout<<"press any key to continue"<<endl;
    
    cin>>vari;
    if (vari == 'p'){
        dim.open("player.dat");
        load = true;
        
    }
    
    do{         //game cycles through all the levels
        round = true;
        int prow = 0, pcol = 0, rows = 0, cols = 0, trow = 0, tcol = 0, moves = 0; //reset variables every loop.
        if (!load){
            level++;        //increment the level.
        
            switch (level){     //pick a level
                case 1:
                    dim.open("map.dat");

                    break;
                case 2:
                    dim.open("map2.dat");
                    break;
                case 3:
                    dim.open("map3.dat");
                    break;
                case 4:
                    game = false;
                    round = false;


                default:
                    cout<<"What is going on???"<<endl;
                    break;
            }
            dim>>rows>>cols>>trow>>tcol>>mt>>prow>>pcol;   // initialize variables  
        }
        else{
            dim>>rows>>cols>>trow>>tcol>>level>>prow>>pcol;//dependent on map.
        }
        
        load = false;

        while (round){                                  // cycles through a level
            
            moves++;                        
                              
            dim.clear();
            dim.seekg(0, ios::beg);            //Read the files from the beginning every time it loops
            for (int i=0; i <= rows; i++){
                getline(dim, dimS);

                if (i == prow && dimS[pcol-1] == '.'){ //replaces the path ['.'] with the player
                    dimS[pcol-1] = 'O';

                }

                cout<<dimS<<endl;   //outputs the line
            }
            cin>>pmov;
            clrScn();               //cleans everything up.
            dim.clear();        
            dim.seekg(0, ios::beg);     //set marker to re-read the file for switch;
            switch (pmov){  // switch statement to check for the different player moves
                case 'w':   // AND to make sure player moves are valid.
                    prow-=1;
                    if (prow <= 0){
                        cout<<"Sorry, invalid move!"<<endl;
                        prow+=1;
                        break;
                    }

                    for (int z = 0; z < rows; z++){
                        getline(dim, crsStr);
                        if (z == prow && crsStr[pcol-1] == 'x'){
                            cout<<"Sorry, invalid move!"<<endl;
                            prow+=1;
                            break;  
                        }
                    }
                    break;

                case 'a':
                    pcol -= 1;
                    if (pcol <= 0){
                        cout<<"sorry, invalid move"<<endl;
                        pcol+=1;
                    }
                    for (int z = 0; z < rows; z++){
                        getline(dim, crsStr);
                        if (z == prow && crsStr[pcol-1] == 'x'){
                            cout<<"Sorry, invalid move!"<<endl;
                            pcol+=1;
                            break;  
                        }
                    }
                    break;

                case 's':                
                    prow += 1;
                    if (prow > rows){
                        cout<<"sorry, invalid move!"<<endl;
                        prow-=1;
                    }
                    for (int z = 0; z < rows; z++){
                        getline(dim, crsStr);
                        if (z == prow && crsStr[pcol-1] == 'x'){
                            cout<<"Sorry, invalid move!"<<endl;
                            prow-=1;
                            break;  
                        }
                    }
                    break;

                case 'd':
                    pcol += 1;
                    if (prow > cols){
                        cout<<"sorry, invalid move!"<<endl;
                        pcol-=1;
                    }
                    for (int z = 0; z < rows; z++){
                        getline(dim, crsStr);
                        if (z == prow && crsStr[pcol-1] == 'x'){
                            cout<<"Sorry, invalid move!"<<endl;
                            pcol-=1;
                            break;  
                        }
                    }
                    
                    break;
                case 'z':       // key to end the game at will
                    game = false;
                    round = false;
                    break;
                case 'p':       //key to save the game.
                    dim.clear();
                    dim.seekg(0, ios::beg);                    
                    gameSave.open("player.dat");
                    gameSave<<rows<<" "<<cols<<" "<<trow<<" "<<tcol<<" "<<level<<" "<<prow<<" "<<pcol<<"\n";
                    getline(dim, dimS);
                    dimS = "";
                    for (int x = 0; x < rows; x++){
                        getline(dim, dimS);
                        gameSave << dimS<<"\n"; //writes to the last save file.
                                
                        
                    }
                    gameSave.clear();
                    gameSave.close();
                    break;
                    

                default:
                    cout<<"FATAL ERROR"<<endl;
                    break;
            }
            crsStr = "";    //reset crash string.
            dim.clear();
            dim.seekg(0, ios::beg); 
            for (int z = 0; z < rows; z++){         //Checks to see if player is on a 
                getline(dim, crsStr);               // teleporter or the end gate 'A'
                if (z == prow && crsStr[pcol-1] == 'T'){
                    prow = trow;        //Sends player to the teleporter location
                    pcol = tcol;
                    xMarksTheSpot ();   // teleporter animation ripped straight from the
                    break;              // MIDTERM changed slightly.
                }
                else if (z == prow && crsStr[pcol-1] == 'A'){   //end gate
                    round = false;      //ends the round
                    char endC;
                    cout<<"You have finished the map in "<<moves<<"moves!"<<endl;
                    cout<<"Next level? press n/N to exit, any other key to continue";
                    cin>>endC;
                    if(endC == 'n' || endC == 'N'){
                         game = false;
                    }
                    xMarksTheSpot();
                    break; //no use reading the entire file if they win...
                }// end if
            }//close for      
            
        }//Close Round
        dim.clear();
        dim.close();
    }while(game);
}//Close Main       

void xMarksTheSpot (){
    int width = 126;
    int num = 0;
    char sp1 = 33;
    char sp2 = 126;
    for (int p = 0; p<150; p++){
        
        if (p%3 == 0){
            for (int i = 0; i <= width; i++){
                for (int j = 1; j <= width; j++){

                    if (j == sp1){

                        cout<<sp1;
                    }
                    else if (j == sp2) {
                        cout<<sp2;
                    }
                    else if (j % 8 == 0){       //Spacing is just right for my sized screen
                        cout<<" ";
                    }

                }

                sp1+=1;
                sp2-=1;
                if (sp1 == 125){    //Make sure I'm only printing out readable characters
                    sp1 = 33;
                }
                if (sp2 == 33){
                    sp2 = 125;
                }
            }// close outermost forloop
        }
    }
    clrScn();    
}
void clrScn(){
    for (int j = 0; j < 30; j++){
        cout<<endl;
    }
}
