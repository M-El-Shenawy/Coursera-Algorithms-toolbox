/*
  Author: Mohamed Elshenawy
  Date: 21/5/2017
*/
#include <iostream>

int get_change(int m) {
  // write your code here
  int n = 0;
  while (m > 0) {
    if (m >= 10) {
      m -= 10;
      n++;
    } else if (m < 10 && m > 4) {
      m -= 5;
      n++;
    } else {
      m--;
      n++;
    }
  }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
