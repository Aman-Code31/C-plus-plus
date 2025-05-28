#include <iostream>
using namespace std;

class Aman {
public:
    int num;
    
    Aman(){           // constructor....with the same name of class
        cout<<"enter any number: ";
        cin>> num;
    }
        
    void display(){   // display function is outside the constructor tab
        cout<<"number you entered is "<<num;
    }
    
};

int main(){
    Aman obj1;         //class and constructor is being called...constructor gives output
    obj1.display();

    Aman obj2;
    obj2.display();   // this is 2nd object of class Aman
    // obj2.input();  // this is not possible because input funcation is not defined there 
}