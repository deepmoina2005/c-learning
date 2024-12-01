#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    //intput a
    cout<<"Enter a first number : ";
    cin>>a;
    cout<<"Enter a second number : ";
    cin>>b;
    int sum = a+b;
    int prod = a*b;
    int sub = a-b;
    int div = a/b;

    cout<<"sum = "<<sum<<endl;
    cout<<"product = "<<prod<<endl;
    cout<<"subtract = "<<sub<<endl;
    cout<<"divided = "<<div<<endl;
    
    return 0;
}