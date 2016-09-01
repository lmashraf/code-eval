#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isEven(int N)
{
    if (N % 2 == 0 ) 
        return true;
    
    return false;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) 
    {
        int N = atoi( line.c_str() );
        cout << isEven( N ) << endl;
    }
    return 0;
}