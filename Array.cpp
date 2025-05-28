#include <iostream>
using namespace std;

class Student {
public:
    int mks[5];        // array of 5 elements , needs to be specify data type

    void input(){
        for(int i =0; i<5;i++){         // loop for 5 subjects , need to be specify the number of subjects 
            cout<< "Enter marks of the subject "<< i+1 << " ";  // i+1 is used to print the subject number 
            cin >>mks[i];                                      // taking input iterating through the array 
        }
    }

    void display(){
        for (int i=0;i<5;i++){        // for display , need of loop to iteraate through all of the elements
            cout<< "Marks of the subject "<< i+1 << " : "<< mks[i]<< endl;   //i+1 for indexing balance
        }
    }
};

int main(){
    Student s1;
    s1.input();
    s1.display();
}