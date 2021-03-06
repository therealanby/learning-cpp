#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

void print_array(vector<int> array){
    for(int i = 0;i<array.size();i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void play_game(){
    vector<int> guesses;
    int random = rand() % 251;
    int guess;
    while(true){
        cout << "guess: ";
        cin >> guess;
        cin.clear();
        cin.ignore(100000,'\n');
        guesses.push_back(guess);
        if(guess > random){
            cout << "too high" << "\n";
        }else if(guess < random){
            cout << "too low" << "\n";
        }else{
            cout << "correct" << "\n";
            break;
        }
    }
    print_array(guesses);
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