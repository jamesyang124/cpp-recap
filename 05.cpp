#include <iostream>

int main() {
  std::cout << "Hello World" << std::endl;
  int x;
  std::cin >> x;
  std::cout << "input x is " << x << std::endl;

  int a, b = 5;

  using std::cout;
  // ++b or b++ but never rVal ex: ++5 or 5++
  cout << ++++b << std::endl;

  return 0;
}
