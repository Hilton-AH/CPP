#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const int RANGE = 12;  //number of lines in the poem
    string tab[RANGE]; //array of strings
    int i=0; 
    int j=0;   //loop counters

    ifstream read("records.txt"); //opens the file records.txt

    if(!read) { //if the file is not created 
        cout << "Error opening input file" << endl;    
        return -1;
    }
    
    while(!read.eof()) { 
        if ((i+1) % 4 == 0) //reads every fourth line
            getline(read, tab[i++], '\n');
        else
            getline(read, tab[i++], '\t'); //third parameter is the delimiter
    }

    read.close();
    i=0; //reset i to 0

    while (i<RANGE) { // second loop to print the array formatted
        cout << endl << "Record Number: " << ++j << endl; //increment j by 1 using prefix increment operator to increase the value of j before output
        cout << "Forename: " << tab[i++] << endl;
        cout << "Surname: " << tab[i++] << endl;
        cout << "Department: " << tab[i++] << endl;
        cout << "Telephone: " << tab[i++] << endl;
    }
    
    return 0;
}