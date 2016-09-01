#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
        for(auto it = line.begin(); it != line.end(); ++it)
        {
            if(isupper(*it))
            {
                *it = tolower(*it);
            }
            else
            {
                *it = toupper(*it);
            }
        }
        
        cout << line << endl;
    }
    
    return 0;
}