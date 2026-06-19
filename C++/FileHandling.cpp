#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream Myfile("try.txt");  // ofstream for writing file 
    
    if (Myfile.is_open()){      // check if file is open...and it is open by .is_open() funcation
        Myfile << "I am writing file by is_open syntax"<<endl; // writing in the file
        Myfile << "this is little hard to remember"<<endl;
        Myfile.close();       // closing file is must & as similar as python
    }
    else{
        cout<<"Unable to open file";
    }
} 


//*----------------------------------------------------------------------------------------------------*//


#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string line;                            // here line will be used to read the file line by line
    ifstream file("try.txt");              // ifstream for reading file
    
    if (file.is_open()){
        while(getline(file, line)){     // reads one complete line of text from the file and store in it line
            cout<< line<<endl;
        }
    }
    else{
        cout<<"unable to read the file";
    }
}