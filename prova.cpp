#include <iostream>
#include <cmath>
#include "StatTools.h"



int main() {

  float s;
  float b;

  std::cout << "S = ";
  std::cin >> s;

  std::cout << "B = ";
  std::cin >> b;

  std::cout << "S/sqrt(B) = " << s/sqrt(b) << std::endl;
  std::cout << "S/sqrt(S+B) = " << s/sqrt(s+b) << std::endl;
  std::cout << "Zbi = " << StatTools::computeZBi( s+b, b, sqrt(b) ) << std::endl;
  std::cout << "ZPL = " << StatTools::computeZPL( s+b, b, sqrt(b) ) << std::endl;

  return 0;

}
