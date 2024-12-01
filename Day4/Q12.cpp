//                                 * Check if a number is Prime or not
#include <iostream>
#include <cmath>
using namespace std;

int main () {
     int n = 7;
     bool isPrime = true;

     //for (int i = 2; i <= n-1; i++)
     for(int i = 2; i <= sqrt(n); i++)
     {
        if (n % i == 0) { // i is a factor of n; i completly divides n;
            isPrime = false;
            break;
        }
        
     }
     
     if (isPrime) {
        cout << "number is prime" << endl;
     } else {
        cout << "number is not prime" << endl;
     }
     
    return 0;
}