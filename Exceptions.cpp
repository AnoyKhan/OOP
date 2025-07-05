#include<iostream>
using namespace std;

int main() {
    try {
        int montherAge = 29;
        int sonAge = 37;
        if(montherAge > sonAge) {
            throw 99;
        }
    }
    catch(int x) {
        cout<<"Wrong age values - Error"<<x;
    }
    return 0;
}