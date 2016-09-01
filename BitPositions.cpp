#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

bool BitPosition(long long& number, int& n, int& m)
{
    int mask_n = (1 << (n - 1));
    int mask_m = (1 << (m - 1));
    
	return (number & mask_n) > 0  && (number & mask_m) > 0 || 
	       (number & mask_n) == 0 && (number & mask_m) == 0;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    long long number;
    int n, m;

    while (getline(stream, line)) 
    {
		for(auto it = line.begin(); it != line.end(); ++it)
		    if((*it) == ',') 
		        (*it) = ' ';

		std::stringstream iss(line);
		iss >> number >> n >> m;

		if (BitPosition(number, m, n))
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
    }
    
    return 0;
} 