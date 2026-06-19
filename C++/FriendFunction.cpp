#include <iostream>
using namespace std;              // friend func can access private and protected members of the class

class Aman {
private:
    int balance;

public:
    Aman(){                      // constructor 
        balance = 20;
    }

    friend void Showbalance(Aman a );             //friend function declaration with argument of class
};                                                // class ends here 

void Showbalance(Aman a){
    cout << "balance is " << a.balance << endl;           // Accessing private member
}

int main(){
    Aman s1;                                        // Create an object of class Aman
    Showbalance(s1);
}