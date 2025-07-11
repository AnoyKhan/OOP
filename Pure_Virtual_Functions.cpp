#include<iostream>
using namespace std;
class Enemy {
    public:
        virtual void attack() =0;//pure virtual function
};

//The pure virtual function in the Enemy class must be overridden in its derived classes
class Ninja: public Enemy {
    public:
        void attack(){
            cout << "Ninja" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster" << endl;
        }
};

int main() {
    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();
}