#include <iostream>
using namespace std;

int main (){
    // int rs;
    // cout << "Enter your income : " << endl;
    // cin >> rs;

    // if (rs <= 500000)
    // {
    //     cout << "0% tax" << endl;
    // } else if(rs<1000000) {
    //     cout << "20% tax" << endl;
    // } else {
    //     cout << "30%" << endl;
    // }

    int income;
    float tax;
    cout << "enter your income (in Lakhs) : ";
    cin >> income;

    if(income < 5){
        tax = 0;
    } else if (income <= 10)
    {
        tax = 0.2 * income;
    } else {
        tax = 0.3 * income;
    }
    
    cout << "Tax = " << (tax * 100000) << endl;
    return 0;
}