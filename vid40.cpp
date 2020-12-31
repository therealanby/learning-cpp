#include <iostream>

using namespace std;

int main(){
    string text = "hello, welcome to this place of code. A place of text and random words that make up statements and stuff. blah blah blabh...";
    for(int i = 0;i<text.size();i++){
        if(text[i]=='e'){
            continue;
        }
        if(text[i]=='.'){
            break;
        }
        cout<<text[i];
    }
    //break: jump out of loop
    //continue: jumps to next iteration(ignores code after continue during the iteration in which continue is reached)
    
}