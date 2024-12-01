#include <iostream>
using namespace std;

int main (){
    int a,b,c;

    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;
    cout << "Enter c : " << endl;
    cin >> c;

    if (a>=b && a>=c)
    {
        cout << a << endl;
    } else if/*(a<b && c<b)*/(b >= c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }
    return 0;
}