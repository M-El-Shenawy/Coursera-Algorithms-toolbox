#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a , int left , int right) {
  if (left==right)
  {
    return -1;
  }
  if (left+1 == right)
  {
    return a[left];
  }

  int maj_index = 0 , count = 1;
  for (int i = 1; i < a.size(); i++)
  {
    if (a[maj_index] == a[i])
    {
      count++;
    }else{count--;}
    if (count ==0)
    {
      maj_index = i;
      count = 1;
    }
  }
  return a[maj_index];
}
bool isMajority(vector<int> &a, int cand){
  int count = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == cand)
    {
      count++;
    }
  }
  if (count > (a.size()/2))
  {
    return 1;
  }else return 0;
}
int main() {
  int n;
  bool checkMaj;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  checkMaj = isMajority(a,get_majority_element(a , 0 , a.size()));
  std::cout << (checkMaj != false) << '\n';
}