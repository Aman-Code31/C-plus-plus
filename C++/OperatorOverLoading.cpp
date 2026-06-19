#include <iostream>
using namespace std;

class complex {                      //so confusing and logical
public:
    int imaginary,real;
    
    complex(int i, int r){               // constructor
        real = r , imaginary = i;
    }
     // Overload the + operator to add two Complex numbers
    complex operator +(const complex& obj){   // this is syntax..& is used to pass the object by reference and will not change
        // Add the real parts and imaginary parts separately
        return complex(real + obj.real , imaginary + obj.imaginary);  //adding the real and imaginary part
    }
    
    void display(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;   // print in the form of a+bi 
    }
};

int main(){
    complex c1(1,1);
    complex c2(2,2);
    complex c3=c2+c1;        // Use overloaded '+' operator to add c2 and c1, store result in c3
    c3.display();            
}