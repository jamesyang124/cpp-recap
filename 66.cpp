#include <iostream>
#include <cstring>
#include <iterator> // for std::size

// g++ -std=c++11 -stdlib=libc++ ./66.cpp

int main()
{
    char name[20] = "Alex"; // only use 5 characters (4 letters + null terminator)
    std::cout << "My name is: " << name << '\n';
    std::cout << name << " has " << strlen(name) << " letters.\n";
    std::cout << name << " has " << sizeof(name) << " characters in the array.\n";
    // std::size(name) <-> use sizeof(name) / sizeof(name[0])
    // if not C++17 capable

    char words[30] = "Ally\0is_not_null_terminated";
    std::cout << "Another name is: " << words << '\n';
    std::cout << words << " has " << strlen(words) << " letters.\n";
    std::cout << words << " has " << sizeof(words) << " characters in the array.\n";

    std::cout << *(words + 3) << " is 4th char by pointer arithmetic\n";

    // strlen only count when first meet \0 null terminator
    return 0;
}

/*
My name is: Alex
Alex has 4 letters.
Alex has 20 characters in the array.

Another name is: Ally
Ally has 4 letters.
Ally has 30 characters in the array.
 */
