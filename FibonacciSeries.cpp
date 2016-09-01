#include <iostream>
#include <fstream>

using namespace std;

unsigned int Fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	return Fib(n - 1) + Fib(n - 2);
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) 
    {
    	unsigned int n = atoi( line.c_str() );
		cout << Fib(n) << endl; 
    }
    return 0;
} 