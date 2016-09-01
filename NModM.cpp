#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>

using namespace std;

int Mod(int m, int n)
{
	int i = 0;

	if (m < n)
	{
		return m;
	}
	else
	{
		for (i = 0; i <= (m/2)+1; ++i)
		{
			if ( (n*i) > m )
			{
				break;
			}
		}

		return m - (i-1)*n;
	}
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    

	int m, n;
	while (getline(stream, line)) 
	{
		std::replace(line.begin(), line.end(), ',', ' ');

		stringstream iss(line);

		iss >> m >> n;

		cout << Mod(m, n) << endl;
	}
	
    return 0;
} 