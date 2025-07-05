#include <iostream>
using namespace std;
template<class T>
class MyClass {
    public:
    MyClass(T x) {
        cout<<x<<" - not a char"<<endl;
    }
};

template <>
class MyClass<char> {
    public:
    MyClass(char x) {
        cout<<x<<" is a char"<<endl;
    }
};

int main() {
    MyClass<int>bo1(23);
    MyClass<double>bo2(23.34);
    MyClass<char>bo3('h');
}
//As we can see, the generic template worked for int and double. However, our template specialization was invoked for the char data type.
//Keep in mind that there is no member "inheritance" from the generic template to the specialization, so all members of the template class specializations must be defined on their own.