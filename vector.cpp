#include <vector>
#include <iostream>
using namespace std;

int main() 
{
    vector <int> vec(3,100);
    cout << "Vector size: " << vec.size() << endl;
    cout << "Is empty: " << vec.empty() << endl;
    cout << "First element " << vec.at(0) << endl;

    //removes the last element
    vec.pop_back(); 
    cout << "Vector size: " << vec.size() << endl;
    cout << "Final element " << vec.back() << endl;

    //clears all elements
    vec.clear();
    cout << "Vector size: " << vec.size() << endl;

    //adds an element at the end
    vec.push_back(200);
    cout << "Vector size: " << vec.size() << endl;
    cout << "First element: " << vec.front() << endl;

    return 0;
}

