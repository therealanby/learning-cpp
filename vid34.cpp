#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main(){
    //logical and comparison operators
    string stringToGuess = "guesss";
    int num = 10;

    cout << "guess:" << "\n";
    string guess;
    cin >> guess;

    cout << "guess:" << "\n";
    int iGuess;
    cin >> iGuess;
    if(guess==stringToGuess&&num==iGuess){
        cout << "right";
    }else{
        cout << "wrong";
    }
    //comparion stuff
    //== equals, != not equals
    // >, <, >=, <= 

    //logical stuff 
    //&& and, || or, ! not
    

}