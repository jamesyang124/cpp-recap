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

enum Color {
  RED,
  BLUE
};

enum class Action {
  SIT,
  WALK,
  LIE_DOWN
};

enum class Device {
  PHONE,
  LAPTOP,
  DESKTOP
};

int main(int argc, char const *argv[]) {

  Name jim = JIM;
  std::cout << jim;

  std::cout << (RED == JOHN);
  // different enum type comparison raise warning but work
  // warning: comparison of two values with different enumeration types ('Color' and 'Name')
  // ^ avoid above case, use enum class

  Action ac = Action::SIT;
  // must use scope operator

  /*
  Action::SIT == RED;
  RED == Action::SIT;
  */
  // different enum type comparison now prohibited
  // error: invalid operands to binary expression ('Action' and 'int')

  // std::cout << color;
  // won't work, because there's no implicit conversion to int

  std::cout << static_cast<int>(color); // will print 1

  return 0;
}
