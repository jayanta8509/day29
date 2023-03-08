// Write a Program to concatenate a string.
#include <iostream>
using namespace std;
void concatenate(string a, string b) {
  string k;
  k = a + b;
  cout << k << endl;
}

int main() {
  string a = "Hello";
  string b = "Hi";
  concatenate(a, b);
}