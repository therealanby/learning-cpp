#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file("vid61_text.txt");
    //if the file doesn't exist, the stream opening will fail

    string input;
    while(file >> input){
        cout << input;
    }
    //string s = file.get();//get single token(separated by a space)
    //string s; file.getLine(file, s);//how to get line

}