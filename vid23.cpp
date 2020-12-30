#include <iostream>
#include <cmath>

using std::cout;

int main(){
    int x = sqrt(25); //sqrt function
    double inf = pow(9,999); //pow function
    //will return inf. multiplying by -1 will return -inf
    int nAn = sqrt(-25);
    //^stores a weird number

    double dNaN = sqrt(-25); //only doubles store nan

    //cout << sqrt(-25); //prints nan
    //cout << dNaN;
    cout <<(-1)*inf;

    //NOTE: only doubles will store unique values like : NaN, inf, and -inf

    double re = remainder(10,3); //like mod except it can use floating point values
    double m = fmax(10,11); //returns the max of the two
    double mi = fmin(10,11); //return the min of the two
    double bot = floor(10.25); //round down
    double top = ceil(10.25); //round up
    double waa = trunc(10.25); //crops off values
    double ro = round(10.25); //rounds the value
    int dist = abs(-10); //absolute value

}