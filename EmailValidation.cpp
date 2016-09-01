#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

bool is_email(std::string const& address)
{
	bool at_pos = address.find_first_of('.') != std::string::npos;
	bool dot_pos = std::count(address.begin(), address.end(), '@') == 1;

	if (address.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_.@") != std::string::npos)
	{
		return false;
	}

	return at_pos && dot_pos;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
    while (getline(stream, line)) 
    {
    	if (is_email(line))
    		cout << "true";
    	else
    		cout << "false";
    
    	cout << endl;
    }
    return 0;
}