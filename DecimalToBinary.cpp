#include <iostream>
#include <fstream>

using namespace std;

string decToBin(unsigned int num)
{
	string r;

	if (num != 0)
	{
		while (num > 0)
		{
			r = (((num % 2) == 0) ? "0" : "1") + r;
			num /= 2;
		}
	}
	else
	{
        r = "0";
	}
	
	return r;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
    unsigned int i;
    
    while (getline(stream, line)) 
    {
        i = atoi(line.c_str());
        cout << decToBin(i) << endl;
    }
    
    return 0;
}