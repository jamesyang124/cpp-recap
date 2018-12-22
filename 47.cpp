#include <iostream>

struct Rectangle
{
  double length = 1.0; // non-static member initialization
  double width = 1.0;  // non-static member initialization 
};

int main()
{
  // Rectangle x{ 2.0, 2.0 };
  // uniform initialization not allowed in here, compile failed
  // ./47.cpp:9:13: error: no matching constructor for initialization of 'Rectangle'

  Rectangle x;

  std::cout << x.length;
  // output 1
  return 0;
}
