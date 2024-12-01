#include <iostream>
using namespace std;

int sum(int a, int b){//a,b are peremeters
  int sum = a + b;
  return sum;
}

int diff(int a, int b){//a,b are peremeters
  int diff = a - b;
  return diff;
}

int main () {
  int s = sum(2,4); //2,4 are arguments
  cout << "sum = "<< s << endl;
  return 0;
}