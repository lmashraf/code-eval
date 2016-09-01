#include <iostream>
#include <fstream>
#include <sstream>

#include <map>
#include <algorithm>

using namespace std;


map<string, string> morse = {
	{ ".-", "A" }, { "-...", "B" }, { "-.-.", "C" },
	{ "-..", "D" }, { ".", "E" }, { "..-.", "F" },
	{ "--.", "G" }, { "....", "H" }, { "..", "I" },
	{ ".---", "J" }, { "-.-", "K" }, { ".-..", "L" },
	{ "--", "M" }, { "-.", "N" }, { "---", "O" },
	{ ".--.", "P" }, { "--.-", "Q" }, { ".-.", "R" },
	{ "...", "S" }, { "-", "T" }, { "..-", "U" },
	{ "...-", "V" }, { ".--", "W" }, { "-..-", "X" },
	{ "-.--", "Y" }, { "--..", "Z" }, { "-----", "0" },
	{ ".----", "1" }, { "..---", "2" }, { "...--", "3" },
	{ "....-", "4" }, { ".....", "5" }, { "-....", "6" },
	{ "--...", "7" }, { "---..", "8" }, { "----.", "9" },
	{ "0", " " }
};

void reconsturct_string(string& line)
{
	size_t pos = line.find("  ");
	string part_one, part_two;

	size_t sz = line.size();

	while (pos != string::npos)
	{
		sz = line.size();

		part_one = line.substr(0, pos);
		part_two = line.substr(pos + 2, sz);

		line = part_one + " 0 " + part_two;

		pos = line.find("  ");
	}
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
	string line, code;
	
    while (getline(stream, line)) 
    {
		reconsturct_string(line);

		stringstream iss(line);

		while (iss >> code)
		{
			cout << morse[code];
		}

		cout << endl;
    }
    return 0;
} 