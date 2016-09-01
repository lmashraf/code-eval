#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> wordtable;

void reverseWords(string& line)
{
	istringstream iss(line);
	string word;
	
	while (iss >> word)
	{
		wordtable.push_back(word);
	}
}

void printWords()
{
	for(vector<string>::const_reverse_iterator itr = wordtable.rbegin(); itr != wordtable.rend(); ++itr)
	{
		cout << *itr << " ";
	}
}

void clearWordsTable()
{
	wordtable.clear();
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;

    while (getline(stream, line)) 
	{
		clearWordsTable();
		reverseWords(line);
		printWords();
		
		cout << endl;
    }
    return 0;
} 