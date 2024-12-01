#include <iostream>
using namespace std;

int main () {
    int day;
    cout << "Enter day number : " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2: 
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thusday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saterday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
    default: cout << "invalid day" << endl;
        break;
    }
    return 0;
}