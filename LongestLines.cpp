#include <iostream>
#include <fstream>
#include <map>
#include <functional>

using namespace std;

void populateMap(string line, multimap< int, string, std::greater<int> > & m)
{
	size_t sz = line.length();
	m.insert(make_pair(sz, line));
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
	multimap< int, string, std::greater<int> > m;

	while (getline(stream, line)) 
	{
		populateMap(line, m);
	}


	for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << it->second << endl;
	}
	
    return 0;
} 