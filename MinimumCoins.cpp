#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

inline int numberOfCoins(int value)
{
	int count = 0;

	while (value != 0)
	{
		if (value >= 5)
		{
			value -= 5;
			++count;
		}
		else if (value >= 3 && value > 1)
		{
			value -= 3;
			++count;
		}
		else
		{
			--value;
			++count;
		}
	}
	
	return count;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
    int coinValue = 0;
    
    while (getline(stream, line)) 
    {
        coinValue = atoi(line.c_str());
        std::cout << numberOfCoins(coinValue) << std::endl;
        
    }
    return 0;
}