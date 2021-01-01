#include <iostream>
using namespace std;

int main(){
    const int SIZE = 10;//size variable for later reference when dealing with the array
    int nums[SIZE];
    //values are undefined, meaning that values are random junk
    int count  = 0;//counter to know how many values to print
    for(int i = 0;i< SIZE ; i++){
        if(cin >>nums[i]){//will return false if input is invalid. this way is good for if the user wants to stop inputting values
            count++;
            continue;
        }else{
            break;
        }
        
    }

    for(int i = 0;i<count;i++){
        cout << nums[i] << " ";
    }
    cin.clear();//clears stream
    cin.ignore(10000, '\n'); //amount of characters and what delimiter


}