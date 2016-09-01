#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int isArmstrong(string& N)
{
    int digits = N.size();
    int sum = 0;
    
    for(auto it = N.begin(); it != N.end(); ++it)
    {
        sum += pow( ((*it) - '0'), digits);
    }
    
    return sum;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
        if(isArmstrong(line) != atoi(line.c_str()))
        {
            cout << "False" << endl;
        }
        else
        {
            cout << "True" << endl;
        }
    }
    return 0;
} 