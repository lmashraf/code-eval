#include <iostream>
#include <fstream>
#include <sstream>

#include <queue>

#include <algorithm>
#include <iomanip>

using namespace std;

struct timestamp
{
	int hh;
	int mm;
	int ss;

	bool operator<(const timestamp& rh) const 
	{
		if (this->hh < rh.hh) return true;
		if ((this->hh == rh.hh) & (this->mm < rh.mm)) return true;
		if ((this->hh == rh.hh) & (this->mm == rh.mm) & (this->ss < rh.ss)) return true;

		return false;
	}

	friend ostream& operator<<(ostream& os, timestamp& t)
	{
		os << setw(2) << setfill('0') << t.hh 
		   << ':' 
		   << setw(2) << setfill('0') << t.mm
		   << ':' 
		   << setw(2) << setfill('0') << t.ss;
		return os;
	}

	friend istream& operator>>(istream& is, timestamp& t)
	{
		string record;

		getline(is, record);

		std::replace(record.begin(), record.end(), ':', ' ');

		istringstream iss(record);

		iss >> t.hh >> t.mm >> t.ss;

		return iss;
	}
};


int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    timestamp t;

	priority_queue<timestamp> pq;
    
    while (getline(stream, line)) 
    {
        int pos = 0;
		string s_timestamp;

		do
		{
			pos = line.find(" ");

			s_timestamp = line.substr(0, pos);

			std::istringstream iss(s_timestamp);
			iss >> t;

			pq.push(t);

			line.erase(0, pos + 1);

		} while (pos != -1);

		while (!pq.empty())
		{
			timestamp tmp = pq.top();
			pq.pop();

			cout << tmp << " ";	
		}

		cout << endl;
    }
    return 0;
} 