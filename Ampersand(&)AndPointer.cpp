/** Pointer(*) has two role in itself:
1st use is to declare pointer variable yani ki ye adress ko store karega '&' iske through.
2nd use is to dereference pointer yani ki ye pointer(*) ke through value ko access ya change karega.
*/

/**Ampersand(&) also has two roles in itself:
1st use as an memory address of variable yani ki ye variable ka address batayega.
2nd use in reference variable yani ki ye variable ko reference karega dusre variable ke through. 
*/

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout << "address of a is: " << &a;      // 1st use of & to get address of variable a 
}

int main(){
    int x = 15;
    int& y = x;                            // without & x can't be referenced.
    y = 20;                               // & na hone pe nice x ki value 15 hi rahegi.
    cout << "value of x is: "<< x;       // yaha pe y ki value ko x ka reference kiya gaya hai (y=x)
}



int main(){
    int y = 5;
    int* ptr =&y;                 // * is used to declare pointer variable...ye bhi address ko hi store karega 
    cout << "address of y is: " <<ptr;   // farak itna hai ki yaha pe extra variable diya hai..usme store karke fir use print karwa rahe hai 
}

int main(){
    int b = 25;
    int* p = &b;
    cout << *p ; // value stored at p 
    *p = 30;                        // now value of b will be changed to 30
    cout<< "value of b is: " << b; // dereferencing or changing value of b using pointer method
}