#include <iostream>
#include <fstream>

using namespace std;

int findOccurences(string line, string sub)
{
	int count = 0;
	size_t pos = 0;

	while ( (pos = line.find(sub, pos)) != string::npos)
	{
		++count;

		pos += sub.size() - 1 ;
	}

	return count;
}


int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
		cout <<findOccurences(line, "<--<<") + findOccurences(line, ">>-->")<< endl;
    }
    return 0;
}