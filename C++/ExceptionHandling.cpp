#include <iostream>
using namespace std;

int main(){
    float age;                         // we can use double as well
    float asd=20.1;                    // double is way more precise but takes more memory(8 bytes)
    
    cout<<"enter any number to divide by 20.1: ";
    cin>>age;
    
    try{                              // try block is used to check for exceptions that can occur
        if (age==0){
            throw "Division by Zero is not allowed!!";  //this for throwing exceptions
        }
        cout <<"Your Result is "<< asd/age<<endl;
    }
    catch (const char* msg){          // used to handle the exception and pointer to a character is used
        cout <<"Error !! "<<msg;      // will print if the message occurs
    }
}