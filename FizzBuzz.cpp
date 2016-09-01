#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    int x, y, n;
    
    string line;
    while (getline(stream, line)) 
    {
        istringstream iss(line);
        iss >> x >> y >> n;
        for(int i = 1; i <= n; i++)
        {
            if(i%x == 0 && i%y == 0) cout << "FB ";
            else if(i%x == 0) cout << "F ";
            else if(i%y == 0) cout << "B ";
            else cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
} 