#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main() {
    // char letter;
    string line;
    int i;

    ifstream read("poem.txt"); //opens the file poem.txt

    if (!read) { //if the file is not created 
        cout << "Error opening file for input" << endl;    
        return -1;
    }
    else {
        for (i=0; ! read.eof(); i++) { //loops through the file until the end of the file is reached using the eof() function
            //read.get(letter); //gets the next character from the file
            getline(read, line); //gets the next line from the file
            //cout << letter; //prints the character
            cout << line << endl; //prints the line
        }
    }

    read.close(); //closes the file
    cout << "Iterations: " << i << endl; //prints the number of iterations
    
    return 0;
}

//166 iterations=not very effiecient, thus use string instead of char