#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  cout << "Enter your age: " << endl;

  int age;
  cin >> age;

  if (age <= 0) {
    cerr << "Oops!" << endl;
    exit(1);
  }

  cout << "You entered " << age << " years" << endl;

  return 0;
}
