#include <iostream>
#include <fstream>

using namespace std;

void CapitalizeWords(string& sentence)
{
	for (auto it = sentence.begin(); it != sentence.end(); ++it)
	{
		if (*(it - 1) == ' ' || *it == sentence[0])
		{
			*it = toupper(*it);
		}
	}
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
        CapitalizeWords(line);
        cout << line << endl;
        
    }
    return 0;
} 