#include <iostream>
using namespace std;

template<class T>
class Pair {
    private:
    T first, second;
    public:
    Pair(T a, T b):
    first(a), second(b) { }
    T bigger();
};

template<class T>
T Pair<T>::bigger() {
    return (first > second ? first : second);
}

int main() {
    Pair<int> obj1(34,45);
    Pair<double> obj2(34.64, 54.64);

    cout<<obj1.bigger()<<endl;
    cout<<obj2.bigger()<<endl;
    return 0;
}

//To create objects of the template class for different types, specify the data type in angle brackets, as we did when defining the function outside of the class.