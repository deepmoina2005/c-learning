#include <iostream>
using namespace std;

int main (){
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << " can vote" << endl;
    } 
    if (age >= 45) 
    {
        cout << "contest for elections" << endl;
    } 
    return 0;
}