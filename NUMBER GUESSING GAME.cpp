/*                          TASK 2
                      NUMBER GUESSING GAME
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/
#include<iostream>
using namespace std;
#include<time.h>
int main()
{
    int number, guess;
    int guesscount = 1;
    srand(time(0));
    
    number = rand()%100+1;
    
    cout<<"**guess the number between 1 to 100 **\n\n";
    cout<<"guess the number enter :";
    cin>>guess;
    cout<<"\n";
    
    do{
      if (guess < number ){
        cout<<"guess number "<<guess <<" is to low ";
        cout<<"enter again :";
        cin >>guess;
        cout<<"\n";
      }
      else if (guess > number ){
        cout<<"guess number"<<guess<<" is to high ";
        cout<<"enter again :";
        cin >>guess;
        cout<<endl;
      }
      else if(guess == number ){
       cout<<"correct guess\n";
        cout<<"guess count "<<guesscount;
        break;
      }
      guesscount++;
    }while(1);
    
    return 0;
}