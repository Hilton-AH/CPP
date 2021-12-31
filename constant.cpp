#include <iostream>
using namespace std;

int main()
{
    //constants are capitalized to distinguish them from variables
    const double PI = 3.14159;
    cout << "6\" circle circumfrence is: " << (6*PI) << endl;

    //enumerate prints the numbers of the array
    enum {SUN=1, MON, TUE, WED, THU, FRI, SAT};
    cout << "Church is: " << SUN << endl;
    cout << "Monday stored in enum is : " << MON << endl;

    //typedef creates a name for data structure
    typedef enum {SUNDAY=1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY} Weekday;
    cout << "Sunday stored in typedef is: " << SUNDAY << endl;

    return 0;
}