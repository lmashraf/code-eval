#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

bool isSelfDescribing(string number)
{
	bool res = true;

	size_t count = 0;

	for (unsigned int i = 0; i < number.size(); ++i)
	{
		count = std::count(number.begin(), number.end(), i + '0');

		// If the number was counted the same ammout of time it exists inside the number, then its selfdescribing.
		char aux = number[i];
		unsigned int current_value = atoi(&aux);

		if ( (count != current_value) )
		{
			res = false;
			break;
		}
	}

	return res;
}

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
		cout << isSelfDescribing(line) << endl;
    }
    return 0;
}