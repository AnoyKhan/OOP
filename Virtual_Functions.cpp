#include <iostream>
using namespace std;

//Virtual functions can also have their implementation in the base class:
class Enemy {
    public:
        virtual void attack() {
            cout<<"Enemy!"<<endl;
        }
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout<<"Ninja!"<<endl;
        }
};

class Monster: public Enemy{
    public:
        void attack() {
            cout<<"Monster!"<<endl;
        }
};

/*
Now, when we create an Enemy pointer, and call the attack()
function, the compiler will call the function, which corresponds
to the object's type, to which the pointer points:
 */

int main() {
    Ninja n;
    Monster m;
    Enemy e;

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    Enemy *e3 = &e;

    e1->attack();
    //Outputs "Ninjaa!"

    e2->attack();
    //Outputs "Monster!"

    e3->attack();
    //Outputs "Enemy!"
}

/*This is how polymorphism is generally used.
 we have different classes with a function of the same name,
 and even the same parameters, but with different implementations.*/
