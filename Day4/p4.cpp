//                                                   * Print the digit of a given number in reverse using While loop
#include <iostream>
using namespace std;

int main () {
     int i = 1;
     while(i <= 10) {
        if(i == 3) {
            break;
        }
        cout << i << endl;
        i++;
     }
     
     cout << "Out of loop now" << endl;
    return 0;
}