#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main() {
    string info = "\n\tThe Ballad of Reading Gaol";
    info.append("\n\t\tOscar Wilde 1898");

    ofstream write("poem.txt", ios::app); //creates a file called poem.txt and appends to it

    if(!write) { 
        cout << "Error opening file for output" << endl;    
        return -1;
    }

    write << info << endl; 
    write.close();
    
    return 0;
}

/*
ios is a class that contains a set of flags that control the behavior of the stream.
ios is part of the standard library.
ios::app: appends to the end of the file
ios::out: writes to the file
ios::in: reads from the file
ios::trunc: deletes the contents of the file
ios::binary: reads and writes binary data
ios::ate: sets the position of the file pointer to the end of the file
ios::beg: sets the position of the file pointer to the beginning of the file
*/
