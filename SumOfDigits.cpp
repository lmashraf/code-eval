#include <iostream>
#include <fstream>

using namespace std;

int sumOfDigits(unsigned int& number)
{
    short int digit = 0;
    unsigned int sum = 0;
    
    while (number != 0)
    {
        digit = (number % 10);
        sum += digit;
        number /= 10;
    }
    
    return sum;
}


int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
        unsigned int number = atoi(line.c_str());
        
        cout << sumOfDigits(number) << endl;
        
    }
    return 0;
}