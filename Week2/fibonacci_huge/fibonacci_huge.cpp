/* Author: Mohamed Elshenawy 
   Date 19/5/2017
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
			unsigned long long tmp = ( vfibbo.at(i) % 10 + vfibbo.at(i+1) % 10 );
			vfibbo.push_back(tmp);
		}
 		
 		result = vfibbo.back()%10;
	}
	cout << result << endl;
	return 0;
}