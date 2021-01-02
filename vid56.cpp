#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<array>
using namespace std;

void print_array(array<int,251> a, int size){
    for(int i = 0;i<size;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

void play_game(){
    array<int,251> guesses;
    int guess_count = 0;
    int random = rand() % 251;
    int guess;
    while(true){
        cout << "guess: ";
        cin >> guess;
        cin.clear();
        cin.ignore(100000,'\n');
        guesses[guess_count++] = guess;
        if(guess_count>=250){
            cout << "too many guesses\n";
            break;
        }
        if(guess > random){
            cout << "too high" << "\n";
        }else if(guess < random){
            cout << "too low" << "\n";
        }else{
            cout << "correct" << "\n";
            break;
        }
    }
    print_array(guesses, guess_count);
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