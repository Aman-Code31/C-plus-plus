#include <iostream>
using namespace std;

class Aman {
public:
    int num;
    
    Aman(int n){   // constructor with parameter or parametrized constructor
        num=n;
        cout<<"constructor is called here"<< endl;
    }
    
    void display(){
        cout<<"number you entered is "<< num<< endl;  // endl means end line and used to print in next line 
    }
    
    ~Aman(){   // destructor is called when object goes out of scope or deleted , it is used to free memory
        cout<<"this is destructor and it will be called at last"<<endl;
    }
    
};

int main(){
    Aman obj1(65);
    obj1.display();
    
    Aman obj2(23);
    obj2.display();
}