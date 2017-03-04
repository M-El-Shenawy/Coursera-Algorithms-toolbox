/* Author Name: Mohamed Elshenawy
 * Last Edit 29th July 2016
 * LCM calculation 
 * This is the solution for Coursera Algorithm & Data sturcter course , Assignment for week 2 problem 4. 
 */
#include <iostream>

unsigned long gcd(unsigned long a , unsigned long b);
unsigned long lcm(unsigned long gcdR , unsigned long smallN ,unsigned long largeN);
int main() {
  unsigned long a, b , gcdValue;
  std::cin >> a >> b;
  if (a<b)
  {
    unsigned long tmp = a ; 
    a = b ; 
    b = tmp;
  }
  //gcdValue = gcd(a, b);
  std::cout << lcm(gcd(a, b), a ,b) << std::endl;
  return 0;
}

unsigned long gcd(unsigned long a , unsigned long b){
  unsigned long gcdResult , tmp;
  if(a==b){
    return a;
  }else{
  while( a%b != 0 ) {
    gcdResult = a%b; 
    tmp = a;
    a = b ;
    b = tmp%b; 
  }
    return gcdResult;
  }
  
}

unsigned long lcm(unsigned long gcdR , unsigned long smallN , unsigned long largeN){
  unsigned long tmp = smallN / gcdR;
  unsigned long result = tmp * largeN;
  return result;
}