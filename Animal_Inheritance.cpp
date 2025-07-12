#include<iostream>
using namespace std;

class Animal_Inheritance{
    protected:
        int noOfLegs;
        string species;

    public:
        Animal_Inheritance(int noOfLegs, string species){
            this->noOfLegs = noOfLegs;
            this->species = species;
        }

        int getNoOFLegs(){
            return this->noOfLegs;
        }

        string getSpecies(){
            return this->species;
        }

        void setNoOfLegs(int noOfLegs){
            this->noOfLegs = noOfLegs;
        }

        void setSpecies(string species){
            this->species = species;
        }

        virtual void eat(){
            cout << "The animal is eating..." << endl;
        }

        virtual void walk(){
            cout << "The animal is walking..." << endl;
        }
};

class Human: public Animal_Inheritance{
    private:
        int noOfHands;
        string dress;
        int id;

    public:
        Human(int noOfLegs, string species, int noOfHands, string dress, int id): Animal_Inheritance(noOfLegs, species){
            this->noOfHands = noOfHands;
            this->dress = dress;
            this->id = id;
        }

        int getNoOfHands(){
            return this->noOfHands;
        }

        void setNoOfHands(int noOfHands){
            this->noOfHands = noOfHands;
        }

        int getId(){
            return this->id;
        }

        void setId(int id){
            this->id = id;
        }

        string getDress(){
            return this->dress;
        }

        void setDress(string dress){
            this->dress = dress;
        }

        void eat(){
            cout << "The man is eating using his/her hands..." << endl;
        }

        /*void walk(){
            cout << "The man is walking using his/her legs..." << endl;
        }*/

        void study(){
            cout << "The man is studying..." << endl;
        }
};

class Tiger: public Animal_Inheritance{
    private:
        bool hasTail;
        int noOfSharpTooth;

    public:
        Tiger(int noOfLegs, string species, bool hasTail, int noOfSharpTooth) : Animal_Inheritance(noOfLegs, species){
            this->hasTail = hasTail;
            this->noOfSharpTooth = noOfSharpTooth;
        }

        bool getHasTail(){
            return this->hasTail;
        }

        void setHasTail(bool hasTail){
            this->hasTail = hasTail;
        }

        int getNoOfSharpTooth(){
            return this->noOfSharpTooth;
        }

        void setNoOfSharpTooth(int noOfSharpTooth){
            this->noOfSharpTooth = noOfSharpTooth;
        }

        void eat(){
            cout << "The tiger is eating hunting its food..." << endl;
        }

        void walk(){
            cout << "The tiger is walking using its four legs..." << endl;
        }

        void hunt(){
            cout << "The tiger is hunting..." << endl;
        }
};

class Cow: public Animal_Inheritance{
    private:
        int noOfHorns;
        bool hasKuj;

    public:
        Cow(int noOfLegs, string species, int noOfHorns, bool hasKuj): Animal_Inheritance(noOfLegs, species){
            this->noOfHorns = noOfHorns;
            this->hasKuj = hasKuj;
        }

        int getNoOfHorns(){
            return this->noOfHorns;
        }

        void setNoOfHorns(int noOfHorns){
            this->noOfHorns = noOfHorns;
        }

        bool getHasKuj(){
            return this->hasKuj;
        }

        void setHasKuj(bool hasKuj){
            this->hasKuj = hasKuj;
        }

         void eat(){
            cout << "The cow is eating using its head..." << endl;
        }

        void walk(){
            cout << "The cow is walking using its four legs..." << endl;
        }

        void giveMilk(){
            cout << "The cow is giving milk..." << endl;
        }
};

int main(){
    Animal_Inheritance animal(4, "Animal");
    Human human(2, "Mammal", 2, "Pant-Shirt-Shoes", 1232433);
    Tiger tiger(4, "Mammal", true, 4);
    Cow cow(4, "Mammal", 2, true);

    /*animal.eat();
    animal.walk();

    human.eat();
    human.walk();
    human.study();

    tiger.eat();
    tiger.walk();
    tiger.hunt();

    cow.eat();
    cow.walk();
    cow.giveMilk();*/

    Animal_Inheritance* ap;
    ap = &human;

    ap->eat();
    ap->walk();

    //ap->giveMilk(); (wrong)

    return 0;
}