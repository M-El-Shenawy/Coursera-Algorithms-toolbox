/* Author Name: Mohamed Elshenawy
 * Last Edit 2/6/2017
 * binary Search 
 * This is the solution for Coursera Algorithm & Data sturcter course , Assignment for week 4 problem 1. 
 */
#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  right = right-1;
  int middel = 0 , index = -1;
while(left <= right){
    middel = left + ((right-left)/2);
  if (x == a[middel])
  {
    index = middel;
    break;
  }

  else {
    if (x < a[middel]){
            right = middel-1;
        }
    else {
            left = middel + 1;
          }
  }
  }
  return index;  
  }
int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}