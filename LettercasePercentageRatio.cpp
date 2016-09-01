#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void caseRatio(string& line)
{
    size_t sz = line.size();
    
    int upperCount = 0;
    int lowerCount = 0;

    for(auto it = line.begin(); it != line.end(); ++it)
    {
        if(isupper(*it))
        {
            ++upperCount;
        }
        else
        {
            ++lowerCount;
        }
    }
    
    float lowerRatio = (static_cast<float>(lowerCount) / static_cast<float>(sz)) * 100;
    float upperRatio = (static_cast<float>(upperCount) / static_cast<float>(sz)) * 100;
    
    cout << "lowercase: " << fixed << setprecision(2) << lowerRatio << " "
         << "uppercase: " << fixed << setprecision(2) << upperRatio << endl;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    
    while (getline(stream, line)) 
    {
        caseRatio(line);
    }
    return 0;
}