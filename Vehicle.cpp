/*
Q. Create a class name Vehicle with attributes speed, direction. Subclass LandV
attributes wheels, subclass AirV with attributes wings, another subclass Hyebried
with attributes peralink using destructor and virtual function.
 */

#include <iostream>
using namespace std;

class vehicle{
protected:
    double speed;
    string direction;
public:
    vehicle(double speed, string direction){
        this-> speed = speed;
        this-> direction = direction;
    }
    double getSpeed(){
        return this-> speed;
    }
    void setSpeed(double speed){
        this-> speed = speed;
    }
    string getDirection(){
        return this-> direction;
    }
    void setDirection(string direction){
        this-> direction = direction;
    }
    vehicle(){
        cout<<"This is Default const of vehicle"<<endl;
    }
    //Destractor
    ~vehicle(){
        cout<<"This is destractor"<<endl;
    }
};
class LandV: virtual public vehicle{
protected:
    int wheels;
public:
    LandV(double speed, string direction, int wheels): vehicle(){
        cout<<"Land Vehicle constractor"<<endl;
    }
    LandV(){
        cout<<"Land Vehicle default const"<<endl;
    }
    //Destractor
    ~LandV(){
        cout<<"Land Vehicle Destractor"<<endl;
    }
};
class AirV: virtual public vehicle{
protected:
    int wings;
public:
    AirV(double speed, string direction, int wings): vehicle(){
        cout<<"Air Vehicle constractor"<<endl;
    }
    AirV(){
        cout<<"Air Vehicle Default Constractor"<<endl;
    }
    //Destractor
    ~AirV(){
        cout<<"Air Vehicle Destractor"<<endl;
    }
};
class Hyebried: virtual public LandV, virtual public AirV{
protected:
    int peralink;
public:
    Hyebried(double speed, string direction, int wheels,int wings, int peralink):
    LandV(), AirV(){
        cout<<"Hybride constractor"<<endl;
    }
    Hyebried(){
        cout<<"Hyebried Default Constractor"<<endl;
    }
    ~Hyebried(){
        cout<<"Hyebried Destractor"<<endl;
    }
};
int main(){
    Hyebried ob(200.3, "Right", 8,12,4);
    cout<<"Hyebried Speed: "<<ob.getSpeed()<<endl;
}