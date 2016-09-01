#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctype.h>

using namespace std;

void transform(string& word, string& code)
{
    if( word.length()  == code.length())
    {
        for (unsigned int i = 0; i < word.length(); ++i)
        {
            if(code.at(i) == '1')
                word.at(i) = toupper(word.at(i));
            else
                word.at(i) = tolower(word.at(i));
        }
    }
    else 
        return;
}
int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    string word;
    string code;
    
    while (getline(stream, line)) 
    {
        istringstream  iss(line);
        iss >> word >> code ;
        
        transform(word, code);

        cout << word << endl;
    }
    return 0;
} 