#include<iostream>
using namespace std;

template<class T, class U>
T smaller(T x, U y) {
    return (x < y ? x : y);
}

int main() {
    int x = 34;
    double y = 5.5;
    cout << smaller(x, y) << endl;
    return 0;
}
//In our main, we can use the function for different data types:
//The output converts to an integer, because we specified the function template's return type to be of the same type as the first parameter (T), which is an integer.