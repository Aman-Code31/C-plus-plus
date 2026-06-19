#include <iostream>
using namespace std;

class Matrix {
public:
    int matrix[3][3];             
    
    void input(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Enter"<<" "<<i <<" "<< j <<" element of 3*3 matrix ";
                cin>>matrix[i][j]; //if i add 'k' loop here , then it will repeat the same value for eack k times
            }
        }
    }
    
    void display() {
        cout<<"Matrix: "<<endl;;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<matrix[i][j]<<" ";      // prints element in the same row
            }
            cout << endl;   // move to next line after each row
        }
    }
};

int main(){
    Matrix m1;
    m1.input();
    m1.display();
}