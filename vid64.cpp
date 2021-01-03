#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<fstream>
using namespace std;

//desing pattern
//function calls to organize things
//lol. already have a save score method. 

//easier to test code when you have code in functions
//tests are just if statements to see if the code outputs the expected output

void print_array(vector<int> array){
    for(int i = 0;i<array.size();i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void update_score(vector<int> array, int count){
    ifstream innput("vid62_text.txt");
    int curr;
    innput >> curr;
    
    if(count<curr){
        ofstream ouutput("vid62_text.txt");
        ouutput << count << "\n";
        for(int i:array){
            ouutput << i << "\n";
        }
    }
}

void show_hi_score(){
    ifstream input("vid62_text.txt");
    int i;
    while(input >> i){
        cout << i << " ";
    }
    cout << "\n";
}

void play_game(){
    vector<int> guesses;
    int random = rand() % 251;
    int guess;
    int count = 0;

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
        count ++;
    }
    print_array(guesses);
    update_score(guesses, count);
    show_hi_score();
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