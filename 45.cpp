#include <iostream>

enum Name {
  JOHN,
  JIM,
  JAMES,
  JEFF,
  JACOB,
  JUSTIN,
  JAMIE
};

int main(int argc, char const *argv[]) {

  Name jim = Name(JIM);
  std::cout << jim;

  return 0;
}
