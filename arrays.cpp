#include <iostream>
using namespace std;

int main()
{
    float nums[3] = {1.1, 2.2, 3.3};
    cout << "nums[0] is: " << nums[0] << endl;
    char name[6] = {'a', 'd', 'r', 'i', 'a','n'};
    cout << "My name is: " << name << endl;
    int coords[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "coords[0][2] is: " << coords[0][2] << endl;
    cout << "coords[1][1] is: " << coords[1][1] << endl;
    return 0;
}