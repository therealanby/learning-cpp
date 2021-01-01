#include<string>
#include<iostream>
using namespace std;

int main(){
    //game menu 
    int choice;
    do{
        cout << "0. Quit\n1. Play\n";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "lets play\n";
                break;
            case 0:
                cout << "goodbye\n";
                break;
        }
    }while(choice != 0);

}