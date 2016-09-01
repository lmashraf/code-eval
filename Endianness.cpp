#include <iostream>
#include <fstream>

using namespace std;

string isEndian()
{
    short int N = 0x0001;
    char* n_ptr = reinterpret_cast<char*>(&N);
    
    if(n_ptr[0] == 1)
    {
        return "LittleEndian";
    }
    else
    {
        return "BigEndian";   
    }
    
}

int main(int argc, char *argv[]) 
{
    cout << isEndian();

    return 0;
}