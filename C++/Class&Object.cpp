#include <iostream>
using namespace std;

class Aman {           // class is a blueprint of object
public:
    int num;
    
    void input(){
        cout<< " enter any number " ;
        cin>> num;
    }
    
    void display(){
        cout<<"number you enter is: "<< num;
    }
};
    
int main(){
    Aman obj;       // initiation of object.....object is real entity of world.
    obj.input();
    obj.display();
}
