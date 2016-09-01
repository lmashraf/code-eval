#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

int GreaterMultiplier(int Number, int Multiplier)
{
	if (Multiplier > Number)
	{
		return Multiplier;
	}
	else
	{
		int i, r;

		for (i = 2; i < ((Number / 2) + 1); ++i)
		{
		    r = (i * Multiplier);
		    
			if ( r > Number)
				break;
		}

		return r;
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

		while (iss >> m >> n)
		{
			cout << GreaterMultiplier(m, n) << endl;
		}
    }
    return 0;
} 