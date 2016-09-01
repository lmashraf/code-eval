#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

bool IsPrime(short int N)
{
	for (int i = 2; i <= std::sqrt(N); i++)
	{
		if (N % i == 0)
			return false;
	}
	
	return true;
}

bool IsPalindrome(short int N)
{
	stringstream iss;
	string number;

	iss << N;
	iss >> number;

	size_t sz = number.length();

	for (int i = 0; i <= (int) sz / 2; ++i)
	{
		if (number.at(i) != number.at(sz - i - 1))
			return false;
	}

	return true;

}

int main(int argc, char *argv[]) 
{
	for (short int i = 1000; i > 0; --i)
	{
		if (IsPalindrome(i) && IsPrime(i))
		{
			cout << i << endl;
			break;
		}
	}

    return 0;
} 