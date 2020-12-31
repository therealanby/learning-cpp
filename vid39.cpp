#include <iostream>

using namespace std;

int main(){

    int i = 11;
    do{ //do-while will run at least once
        cout << i << " ";
        i++;
    }while(i<10);//check condition after running once

    string word = "dog";
    string guess;
    do{
        cout<<"guess: ";
        cin >> guess;
    }while(guess!=word);
}
