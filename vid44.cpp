#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void play_game(){
    int random = rand() % 251;
    int guess;
    while(true){
        cout << "guess: ";
        cin >> guess;
        if(guess > random){
            cout << "too high" << "\n";
        }else if(guess < random){
            cout << "too low" << "\n";
        }else{
            cout << "correct" << "\n";
            break;
        }
    }
}

int main(){
    //game menu 
    srand(time(NULL));
    int choice;
    do{
        cout << "0. Quit\n1. Play\n";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "lets play\n";
                play_game();
                break;
            case 0:
                cout << "goodbye\n";
                break;
        }
    }while(choice != 0);
}