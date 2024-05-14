/*.                   TASK 3
                 TIC-TAC-TOE GAME

-->>  Build a simple cons ole-based Tic-Tac-Toe game that
   allows two players to play against each other

- Game Board: Create a 3x3 grid as the game board.
- Players: Assign"X"and "O" to two players.
- Display Board: Show the current state of the board.
- Player Input: Prompt the current player to enter their move.
- Update Board: Update the game board with the player's move.
- Check for Win: Check if the current player has won.
- Check for Draw: Determine if the game is a draw.
- Switch Players: Alternate turns between"X"and "O"players.
- Display Result: Show the result of the game (win, draw, or ongoing).
- Play Again: Ask if the players want to play another game.*/

#include<iostream>
using namespace std;
#include<conio.h>
char num[10]= {'0','1','2','3','4','5','6','7','8','9'};
void bord();
int chekwin();
int main () {
    int player=2,choice,i;
    char mark;

  do {
        bord();
        if(player%2==0) {
            player=1;
        } else {
            player=2;
        }
        cout<<"player ["<<player<<"] your turn :";
        cin>>choice;
        
        if(player==1){
          mark ='X';
        }else{
           mark='0';
        }
          // here chekin player enter insert correct number or not.       
        if(choice==1 && num[1]=='1'){
          num[1]=mark;
        }else if(choice==2 && num[2]=='2'){
          num[2]=mark;
        }else if(choice==3 && num[3]=='3'){
          num[3]=mark;
        }else if(choice==4 && num[4]=='4'){
          num[4]=mark;
        }else if(choice==5 && num[5]=='5'){
          num[5]=mark;
        }else if(choice ==6 && num[6]=='6'){
         num[6]=mark;
        }else if(choice==7 && num[7]=='7'){
          num[7]=mark;
        }else if(choice==8 && num[8]=='8'){
          num[8]=mark;
        }else if(choice==9 && num[9]=='9'){
          num[9]=mark;
        }else
        
        // if player enter worng number .
        cout<<"invailid move/ already enter *pls chek & enter [1 to 9 only .]";    
        player--;
        cin.ignore();       // ignoreing the invailid number form input .
        cin.get();         // for again enter 
    
    
    i=chekwin();
    player++;
    
    
    
   }while(i==-1) ;
   bord();
   if(i==1){
     cout<<"player "<<player<<" WON the match "<<endl;
   }else{
     cout<<"game drow !";
   }
   cin.ignore();
   cin.get();
   
   
    return 0;
}
void bord() {
  clrscr();

    cout<<" [--> TIc TeC  toE GAmE <--] \n\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    cout<<"PLAYER 1->[X]\tPLAYER 2->[0]\n"<<endl;
    // -----structuer of tictec toe-----

    cout<<"     |     |     "<<endl;
    cout<<"  "<<num[1]<<"  |"<<"  "<<num[2]<<"  |"<<"  "<<num[3]<<"      "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"-----------------"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<num[4]<<"  |"<<"  "<<num[5]<<"  |"<<"  "<<num[6]<<"      "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"-----------------"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<num[7]<<"  |"<<"  "<<num[8]<<"  |"<<"  "<<num[9]<<"      "<<endl;
    cout<<"     |     |     "<<endl;

}
int chekwin(){
     // they are condition to chek win!...    
    if (num[1]==num[2] && num[2]==num[3])
      return 1;
     else if(num[4]==num[5] && num[5]==num[6]) 
       return 1;
     else if(num[7]==num[8] && num[8]==num[9])
       return 1;
     else if(num[1]==num[4] && num[4]==num[7])
       return 1;
     else if(num[2]==num[5] && num[5]==num[8])
       return 1;
     else if(num[3]==num[6] && num[6]==num[9])
       return 1;
     else if(num[1]==num[5] && num[5] ==num[9]) 
     return 1;
     else if(num[7]==num[5] && num[5]==num[3])
       return 1;
       // over bord fully with mark['0''X']       
     else if(num[1] !='1' && num[2] !='2' && num[3] !='3' && num[4] !='4' && num[5] !='5' && num[6] !='6' && num[7] !='7' && num[8] !='8' &&num[9] !='9')
       return 0;  
      else{
        return -1;
      } 
}