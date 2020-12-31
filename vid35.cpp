#include <string>
#include <iostream>

using namespace std;

int main(){
    int num = 0;

    int guess;
    cin >>guess;

    switch(guess-num){
        case 0:
            cout <<"correct";
            break; //need break to prevent falling through(if this condition matches and there's no break statement, all the other cases will run)
        case 1:
            cout <<"really close";
            break;
        case 2:
            cout <<"close";
            break;
        case -1:
            cout <<"really close";
            break;
        case -2:
            cout <<"close";
            break;
        default:
            cout <<"not close";
            break;
    }//switch
    //switch is only good for checking if values match with the inputted value
    //in c++, only integral values are allowed
    //use enum to bypass this

    enum abcd { a, b, c, d}; //enum are types that can only store certain values
    abcd c1= a; //c1 of type abcd which is an enum will allow the values a, b, c, and d

    enum class ABCD{ a, b, c, d};
    ABCD c2 =  ABCD::a; //class is used to organize things

}