#include <iostream>
using std::cout; 
using std::endl;

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //initialize pointer to the first element of the array
    int* ptr = nums;

    //output the address of the first element of the array
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr << endl;

    //increment the pointer to point to the second element of the array
    ptr++;
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr << endl;

    //increment the pointer to point to the third element of the array
    ptr++;
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr << endl;
    
    //decrement the pointer to point to the second element of the array
    ptr-=2;
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr << endl;

    //the name of an array acts like a pointer to the first element of the array
    //for large arrays, increment the pointer by a constant value
    //ptr += 2;
    //+= is shorthand for ptr = ptr + 2;

    for (int i=0; i<10; i++) {
        cout << endl << "Element: " << i;
        cout << "   Value: " << *ptr;
        ptr++;
    }
    cout << endl;

    return 0;
}