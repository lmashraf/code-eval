#include <iostream>
#include <fstream>

using namespace std;

unsigned int bitcount(int n)
{
	unsigned int count = 0;

	while (n != 0)
	{
		if (n & 1 == 1)
			count++;

		n >>= 1;
	}

	return count;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;

    while (getline(stream, line)) 
    {
		int n = atoi(line.c_str());
		cout << bitcount(n) << endl;
    }
    
    return 0;
} 