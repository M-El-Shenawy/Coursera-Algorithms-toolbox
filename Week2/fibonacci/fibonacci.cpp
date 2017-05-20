/* Author: Mohamed Elshenawy
   Date 19/5/2017
*/
#include <cassert>
#include <iostream>

using namespace std;
// The following code calls a naive algorithm for computing a Fibonacci number.
//
// What to do:
// 1. Compile the following code and run it on an input "40" to check that it is
// slow.
//    You may also want to submit it to the grader to ensure that it gets the
//    "time limit exceeded" message.
// 2. Implement the fibonacci_fast procedure.
// 3. Remove the line that prints the result of the naive algorithm, comment the
// lines reading the input,
//    uncomment the line with a call to test_solution, compile the program, and
//    run it.
//    This will ensure that your efficient algorithm returns the same as the
//    naive one for small values of n.
// 4. If test_solution() reveals a bug in your implementation, debug it, fix it,
// and repeat step 3.
// 5. Remove the call to test_solution, uncomment the line with a call to
// fibonacci_fast (and the lines reading the input),
//    and submit it to the grader.

unsigned int fibonacci_fast(int n) {
  // write your code here
  unsigned int a[n];
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i <= n; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }
  return a[n];
}

int main() {
  int n = 0;
  cin >> n;

  cout << fibonacci_fast(n) << '\n';
  return 0;
}
