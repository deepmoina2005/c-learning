#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Data types
    int age = 19;
    int marks = -200;
    char grade = 'A';
    bool isAdult = true;
    float pi = 3.1415926359;
    double pi2 = 3.1415926359;

    cout<<"size of float = "<<sizeof(float)<<endl;
    cout<<"size of double = "<<sizeof(double)<<endl;
    cout<<setprecision(12)<<"pi = "<<pi<<endl;
    cout<<setprecision(12)<<"pi2 = "<<pi2<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    cout<<"size of bool = "<<sizeof(bool)<<endl;
    return 0;
}