#include <iostream>
using namespace std; 

class Aman {                          // class is a blueprint of object
public:                              // it is access specifier 
    int num;
    static int count;              // Static Data Member ,used to count the number of times input is taken 
    
    void input(){                            // input funcation
        cout<< "Enter any number: ";
        cin>> num;
        count++ ; 
    }
    
    void display(){
        cout<<"Number you entered is "<< num<< endl;
    }
    
    static void showCount(){               // static data member funcation
        cout << "You entered input number of times: "<< count<<endl;
    }
};

int Aman::count=0; // Static member initialization(outside the class) & it is the part of class, not object
// this is also a part of scope resolution operator....defined outside the class
int main(){
    Aman obj1;
    obj1.input();
    obj1.display();
    Aman::showCount();          // static member function is called using class name 
    
    Aman obj2;
    obj2.input();
    obj2.display();
    Aman::showCount();      // count updated 
}