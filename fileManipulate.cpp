#include <iostream>
using namespace std;

/*iostream manipulators
noboolalpha* - boolean values as 0 or 1
boolalpha* - boolean values as true or false
noshowbase* - no base prefix
showbase* - base prefix
noshowpos* - no position prefix
showpos* - position prefix
noshowpoint* - no decimal point
showpoint* - decimal point
dec* - decimal point base 10
hex* - hexadecimal base 16
oct* - octal base 8
right* - right justified
left* - left justified
internal* - internal padding
noskipws* - no whitespace skipping
skipws* - whitespace skipping
fixed* - floating point fixed to 6 decimal places
scientific* - floating point scientific notation
nouppercase* - no uppercase letters
uppercase* - uppercase letters
*/

int main() {
    bool isTrue = 1;
    int num = 255;

    cout.width(40);
    cout.fill('.');
    cout << "Output" << endl;

    cout.precision(11);
    cout << "Pi: " << 3.14159265358979323846 << endl;

    cout << isTrue << ": " << boolalpha << isTrue << endl;
    cout << num << ": " << hex << showbase << uppercase << num << endl;
    
    return 0;
}
