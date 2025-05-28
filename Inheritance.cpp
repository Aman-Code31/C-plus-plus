#include <iostream>
using namespace std;

class Aman {
public:
    void speak(){
        cout<<"Human speaks"<<endl;
    }
};

class friends {
public:
    void shout(){
        cout<<"they bark"<<endl;
    }
};

class college:public Aman , public friends{         // multiple inheritance
public:
    void attendance(){
        cout<<"all bakchodi"<<endl;
    }
};
class lecture:public college{                     // multilevel inheritance 
public:
    void timepass(){
        cout<<"boring"<<endl;
    }
};
                // hierarchal inheritance is many derived classes inherits from single parents class
int main(){
    lecture l;
    l.timepass();
    l.attendance();
    l.shout();
    l.speak();
} 

// inheritance can be single , multiple , hierarchal , multilevel and hybrid