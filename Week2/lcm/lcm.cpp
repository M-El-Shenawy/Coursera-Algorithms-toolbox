/* Author: Mohamed Elshenawy 
   Date 19/5/2017
*/

#include <iostream>

unsigned long gcd(unsigned long a, unsigned long b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
unsigned long lcm_fast(unsigned long a, unsigned long b) {
  return (a * b) / gcd(a, b);
}

int main() {
  unsigned long a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
