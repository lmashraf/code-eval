#include <iostream>
#include <fstream>

#include <string>

using namespace std;

string writeWords(string s)
{
	string sentence;

	const char space = ' ';

	for (auto it = s.begin(); it != s.end(); ++it)
	{
		if (isalpha(*it))
		{
			sentence.push_back(::tolower(*it));
		}
		else
		{
			if (!sentence.empty() && (sentence.back() != space))
			{
				sentence.push_back(space);
			}
		}
	
	}

	return sentence;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
    
    while (getline(stream, line)) 
    {
		cout << writeWords(line)
			 << endl;
    }
    
    return 0;
} 