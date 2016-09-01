#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) 
    {
		std::transform(line.begin(), line.end(), line.begin(), ::tolower);
		cout << line << endl;
    }
    return 0;
} 