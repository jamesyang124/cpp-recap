#include <iostream>

int main(int argc, char const *argv[]) {

  int x = 89;
  int &r = x;
  int &r1 = x;
  int *p = &x;
  int *p2 = &r;
  int *p3 = &x;

  std::cout << (p == p2);
  std::cout << (r == r1);

  std::cout << (0 == 0);
  std::cout << (&p == &p3);
  // will create memory address for each pointer
  std::cout << (&r == &r1);
  // references are shared memory address for same referenced object.
  std::cout << (*p);

  return 0;
}
