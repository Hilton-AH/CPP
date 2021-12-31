#include <iostream>
#include <fstream> //file stream library for writing to file 
#include <string>
using namespace std;

int main() {
    string poem = "\n\tI never saw a man who looked";
    poem.append("\n\tWith such a wistful eye");
    poem.append("\n\tUpon that little tent of blue");
    poem.append("\n\tWhich prisoners call the sky");

    ofstream write("poem.txt"); //creates a file called poem.txt

    if (!write) { //if the file is not created 
        cout << "Error opening file for output" << endl;    
        return -1;
    }

    write << poem << endl; //writes poem to poem.txt

    write.close(); //closes the file
    
    return 0;
}