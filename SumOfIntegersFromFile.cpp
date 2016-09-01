#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
	int sum = 0;
	
    while (getline(stream, line)) 
    {
       	int n = atoi( line.c_str() );
		sum += n;
    }
    
	cout << sum;
    	
    return 0;
} 