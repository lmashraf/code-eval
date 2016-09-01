#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int N)
{
	int sqrtN = (int) std::sqrt(N);

	for (int i = 2; i <= std::sqrt(N); i++)
	{
		if (N % i == 0)
			return false;
	}
	
	return true;
}

int main(int argc, char *argv[]) 
{
	int i = 2;
	int sum = 0;
	int count = 0;

	while (count < 1000)
	{
		if (IsPrime(i))
		{
			sum += i;
			count++;
		}
		++i;
	}

	cout << sum;
	
    return 0;
}