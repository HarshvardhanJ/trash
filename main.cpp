#include <iostream>

int square(int a) {
  return a * a;
}

int main() {
  int x;
  std::cout << "Enter the number: ";
  std::cin >> x;
  x = square(x);
  std::cout << x << std::endl;
}
