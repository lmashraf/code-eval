#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
        bool toggleCase = true;
        
        for(size_t i = 0; i < line.size(); ++i)
        {
            if(isalpha(line[i]))
            {
                if(toggleCase)
                {
                    line[i] = toupper(line[i]);    
                }
                else
                {
                    line[i] = tolower(line[i]);    
                }
            
            toggleCase = !toggleCase;
            }
        }
        
        cout << line << endl;
    }
    return 0;
}