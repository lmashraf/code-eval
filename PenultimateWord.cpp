#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
    vector<string> sentence;
    string word;
    
    while (getline(stream, line)) 
    {
        stringstream iss(line);
        while(iss >> word)
        {
            sentence.push_back(word);
        }
        
        size_t sz = sentence.size();
        cout << sentence[sz - 2] << endl;
    }
    return 0;
}