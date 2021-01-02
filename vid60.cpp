#include<iostream>
#include <fstream>

using std::ofstream;

int main(){

    std::string filename;
    std::cin >> filename;
    //ofstream file (filename.c_str()) //to have file name from input
    ofstream file;//instance of ofstream(output stream)
    file.open("vid60_text.txt");//this is how to open the file stream 
    //shorter way: ofstream file("vid60.txt");

    //.open("name.txt", std::ios::app); to append to the file instead of replacing everything each time

    file << "this is a text file";

    std::cout << file.is_open(); //check if file is opened. 1 for success, 0 for failure
    //set file to read-only to see false
    file.close();//this will be done automatically but sometimes you need to close it earlier
}//this program will generate the txt file if it doesn't exist