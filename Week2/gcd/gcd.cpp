/* Author: Mohamed Elshenawy 
   Date 19/5/2017
*/

#include <iostream>

unsigned int gcd_fast(unsigned int a , unsigned int b){
  if(b == 0){return a;}
  return gcd_fast(b , a%b);
}


int main() {
  unsigned int a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
