#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

struct Rectangle
{
	// Top left
	int X1;
	int Y1;

	// Bottom right
	int X2;
	int Y2;
};

bool IsColliding(Rectangle& rectA, Rectangle& rectB)
{
	if (rectA.X1 > rectB.X2 || rectB.X1 > rectA.X2)
		return false;

	if (rectA.Y1 < rectB.Y2 || rectB.Y1 < rectA.Y2)
		return false;

	return true;
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
	Rectangle rectA, rectB;
    	
    while (getline(stream, line)) 
    {
		std::replace(line.begin(), line.end(), ',', ' ');

		stringstream iss(line);

		iss >> rectA.X1 >> rectA.Y1 >> rectA.X2 >> rectA.Y2 
		    >> rectB.X1 >> rectB.Y1 >> rectB.X2 >> rectB.Y2;

		if (IsColliding(rectA, rectB))
			cout << "True";
		else
			cout << "False"; 
		
		cout << endl;
    }
    return 0;
} 