#include <iostream>

using std::cout;

int main(){
    int age = 13;
    if(age <17){
        cout << "not old enough";
    }else if(age<0){
        cout << "invalid age";
        return -1;//this will exit the main method
    }else{
        cout << "ok";
    }
    cout << "\n" << "done";

    return 0; //successful run
}