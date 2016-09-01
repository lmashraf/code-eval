#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;


unsigned int  HexToDec(string& Hex)
{
	unsigned int res;

	stringstream iss;

	iss << std::hex << Hex;
	iss >> res;

	return res;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
    
    while (getline(stream, line)) 
    {
        cout << HexToDec(line) << endl;
    }
    return 0;
} 