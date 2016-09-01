#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void cleanTokens(string& line)
{
	for (size_t i = 0; i < line.size(); ++i)
	{
		if (line[i] == ',')
		{
			line[i] = ' ';
		}
	}
}

int majorElement(vector<int>& elements)
{
	size_t sz = elements.size();
	int count = 0;

	for(size_t i = 0; i < sz; ++i)
	{
		for (auto it = elements.begin(); it != elements.end(); ++it)
		{
			if (elements[i] == (*it))
				count++;
		}
		
		if (count >= (sz / 2))
		{
			return elements[i];
		}
	}
    
	return -1;
}


int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    vector<int> elements;
	int number;
    
    while (getline(stream, line)) 
    {
        // Initialize
		cleanTokens(line);

        // Populate the vector
		stringstream iss(line);
		while (iss >> number)
		{
			elements.push_back(number);
		}

        // Writes the Major Element
		int number = majorElement(elements);
		
		if (number > 0)
		    cout << number << endl;
		else
		    cout << "None" << endl;
		    

    }
    return 0;
} 