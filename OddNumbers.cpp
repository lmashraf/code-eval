#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) 
{    
    for(unsigned int i = 0; i < 100; ++i)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }
    return 0;
}