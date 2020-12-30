#include <iostream>
#include <string>

using std::string;
using std::cout;

int main(){
    //hex and octal
    //hex base-16
    //oct base-8
    //dec(normal/standard) base-10

    int num = 30;
    int hexNum = 0x30;
    int octNum = 030;
    cout << num << " " << hexNum << " " << octNum;
    //conversion 
    cout <<" " << std::hex << num << " " <<std::dec << num << " " <<std::oct << num;
}