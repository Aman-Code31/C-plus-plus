#include <iostream>
using namespace std;

class Aman {
public:
    void behaviour(int a){                             // funcation Overloading
        cout<<"this is number "<<a<<endl;
    }
    
    void behaviour(double a){                        // one funcation but different data type
        cout<<"this is decimal number "<<a<<endl;
    }
    
    void behaviour(bool a){
        cout<<"this is boolean type "<<a<<endl;
    }
    
    void behaviour( string a){
        cout<<"this is string "<<a <<endl;
    }
};

int main(){
    Aman obj;
    obj.behaviour(23);
    obj.behaviour(2.3);
    obj.behaviour(true);
    obj.behaviour("aman");
}