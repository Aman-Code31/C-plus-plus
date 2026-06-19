#include <iostream>
using namespace std;

class Aman {
public:
    int a;

    void input(){                                    // :: Used to define functions outside the class
        cout<<"enter a number ";
        cin>>a;
    }
    
    void display();                                 // function declaration    
};

void Aman::display(){                             // Function defined outside using scope resolution
    cout<<"you have entered: "<<a;               // different from friend function
}

int main(){
    Aman s;
    s.input();
    s.display();
}