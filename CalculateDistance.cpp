#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>

using namespace std;

void cleanTokens(string& line)
{
    for(size_t i = 0; i < line.size(); ++i)
    {
        if( line[i] == ',' || line[i] == '(' || line[i] == ')')
        {
            line[i] = ' ';
        }
    }
}

int calculateDistance(int& Ax, int& Ay, int& Bx, int& By)
{
    return sqrt( pow((Ax - Bx), 2) + pow((Ay - By),2) );
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    int Ax, Ay, Bx, By;
    
    while (getline(stream, line)) 
    {
        cleanTokens(line);
        
        stringstream iss(line);
        iss >> Ax >> Ay >> Bx >> By;
        
        cout << calculateDistance(Ax, Ay, Bx, By) << endl;
    }
    return 0;
} 