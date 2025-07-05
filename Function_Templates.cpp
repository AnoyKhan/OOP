#include <iostream>
using namespace std;

//Now we can use our generic data type T in the function:
template<class T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int x =7 , y = 15;
    double x1 =7.43, y1 =6.7;
    string x2 ="hello ", y2 ="world";
    //The compiler automatically calls the function for the corresponding type.

    cout << sum(x, y) << endl;
    cout << sum(x1, y1) << endl;
    cout << sum(x2, y2) << endl;
    return 0;
}