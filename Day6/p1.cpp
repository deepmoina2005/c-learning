#include <iostream>
using namespace std;

  void sayHello() {
    cout << "Hello\n";
  }

  void assistance() {
    sayHello();
    cout << "work done\n";
  }
  int main() {
    assistance();
    return 0;
  }