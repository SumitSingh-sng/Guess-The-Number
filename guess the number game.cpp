#include<cstdlib>
#include<iostream>
using namespace std;

int main(){
    cout<<"GUESS THE NUMBER GAME!!!"<<endl;
    int tar,guess;
    char choice;
    do{
    tar = rand()%100;
    cout<<"The computer has decided a number."<<endl;
    while(guess!=tar){
        cout<<"Enter your Guess : ";
        cin>>guess;
        if(guess > tar){
            cout<<"You guessed too high!!"<<endl;
        }
        else if(guess < tar){
            cout<<"You guessed too low!!"<<endl;
        }
        else{
            cout<<"Congratulations!!! You have guessed the right number."<<endl;
        }
    }
    cout<<"Do you want to play again??(Y/N)"<<endl;
    cin>>choice;
    if(choice == 'N' || choice == 'n'){
        cout<<"Thank you for playing the game."<<endl;
    }
    }while(choice == 'y' || choice == 'Y');
}