#include <iostream>
using namespace std;

int main() {
    float eng;
    float sci;
    float math;

    cout<<"enter english marks : ";
    cin>>eng;

    cout<<"enter science marks : ";
    cin>>sci;

    cout<<"enter Math marks : ";
    cin>>math;

    float avg = (eng + sci + math) / 3;
    cout<<"avg marks = "<<avg<<endl;
    return 0;
}