#include <iostream>
using namespace std;

int main (){
    int a;
    int b;

    cout << "Enter a number : " << endl;
    cin >> a;
    cin >> b;

    if (a>=b)
    {
        cout << a << endl;
    } else{
        cout << b << endl;
    }
    
    return 0;
}