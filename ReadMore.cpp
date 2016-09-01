#include <iostream>
#include <fstream>
#include <functional>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
    	if (line.length() > 55)
    	{
    	    // Trim the line to 40 characters
            string trim_line = line.substr(0, 40);
            
            size_t pos = trim_line.rfind(' ');
            
            // Remove trailing whitespace
            if(pos != std::string::npos)
            {
                trim_line = trim_line.substr(0, pos);
            }
            
            // Add readmore text.
            trim_line += "... <Read More>";
            
            cout << trim_line <<endl;    	    
    	}
    	else
    	{
    	    cout << line << endl;
    	}
    }
    return 0;
} 