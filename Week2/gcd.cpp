/* Author Name: Mohamed Elshenawy
 * Last Edit 29th July 2016
 * GCD calculation 
 * This is the solution for Coursera Algorithm & Data sturcter course , Assignment for week 2 problem 3. 
 */
#include <iostream>

unsigned long gcd(unsigned long a , unsigned long b);

int main() {
  unsigned long a, b;
  std::cin >> a >> b;
  if (a<b)
  {
    unsigned long tmp = a ; 
    a = b ; 
    b = tmp;
  }
  std::cout << gcd(a, b) << std::endl;
  return 0;
}

unsigned long gcd(unsigned long a , unsigned long b){
  unsigned long gcdResult , tmp;
  if (a == b)
  {
    return a;
  }else {
  while( a%b != 0 ) {
    gcdResult = a%b; 
    tmp = a;
    a = b ;
    b = tmp%b; 
  }
    return gcdResult;
 }
}