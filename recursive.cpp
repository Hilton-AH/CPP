#include <iostream>  //preprocessor directive
using namespace std;

int computeFactorials (int,int); //prototype declaration
// int factorial (int);
inline int factorial (int n) { //inline function to keep from checking with function
    return (n==1) ? 1 : (factorial(n-1) * n);  //recursive function using ternary operator
}

int main() {
    computeFactorials(1,8); //call function
    return 0;
}

int computeFactorials (int num, int max) {   //first prototype function

    cout << "Factorial of " << num << ": ";
    cout << factorial(num) << endl; //statements
    num++;  //incrementer
    if (num > max) return 0; //exit...
    else computeFactorials(num, max); //recursive call
}

// int factorial (int n) // second prototype function
// {
//     int result;
//     if (n==1) result = 1;
//     else result = (factorial(n-1) * n); //exit or decrement and call again
//     return result;
// }