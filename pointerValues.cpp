#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int b = 16;

    //declare and initialize a pointer variable to point to a variable 
    //datatype* pointerName = &variableName;
    int* aPtr = &a;
    int* bPtr = &b;

    //dynamic hexadecimal output of the pointer address
    cout << "Addresses of pointers: " << endl;
    cout << "aPtr: " << &aPtr << endl;
    cout << "bPtr: " << &bPtr << endl << endl;

    //dynamic hexadecimal output of the pointer value
    cout << "Values of pointers: " << endl;
    cout << "aPtr: " << aPtr << endl;
    cout << "bPtr: " << bPtr << endl << endl;

    //value in address pointed to by pointer
    //*pointerName dereferences the pointer
    cout << "Values pointed to by pointers: " << endl;
    cout << "a:" << *aPtr << endl;
    cout << "b:" << *bPtr << endl << endl;

    return 0;
}