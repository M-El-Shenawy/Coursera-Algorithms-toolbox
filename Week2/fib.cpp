/* Author Name: Mohamed Elshenawy
 * Last Edit 28th July 2016
 * fast fibonacci calculation
 * This is the solution for Coursera Algorithm & Data sturcter course , Assignment for week 2 problem 1. 
 * PS: This Solution will give you error result beginning with Fibonacci 94th , because of long long overflow
 * You can use another data type for big number to solve this issue.
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long long fibIndex ,result;
	std::vector<unsigned long long > vfibbo;
	
	cin >> fibIndex;

	if (fibIndex <= 1)
	{
		result = fibIndex;
	}else
	{
		vfibbo.push_back(0);
		vfibbo.push_back(1);
		for (unsigned int i = 0; i <= fibIndex-2; i++)
		{
			unsigned long long tmp = vfibbo.at(i) + vfibbo.at(i+1);
			vfibbo.push_back(tmp);
		}
 		
 		result = vfibbo.back();
	}
	cout << result << endl;
	return 0;
}