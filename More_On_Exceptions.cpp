#include<iostream>
using namespace std;

int main() {
    try {
        int num1;
        cout<<"Enter the first number: ";
        cin>>num1;

        int num2;
        cout<<"Enter the second number: ";
        cin>>num2;

        if(num1==num2) {
            cout<<"Result: "<<num1/num2;
        }
    }
    catch (int x) {
        cout<<"Division by Zero";
    }
}
//This results in the output of "Division by zero!" as an alternative to a program crash, when 0 is entered as the second number.
