#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class IntStack
{
	private:
		int* StackStore;
		int  StackSize;
		int  StackPointer;

	public:
		IntStack(int size = 100);
		~IntStack();
	public:
		void Push(int value);
		int Pop();
		bool IsEmpty();

		IntStack& operator<<(int value);
};

IntStack::IntStack(int size)
{
	if (size >= 0)
	{
		StackStore = new int[size];
	}

	StackSize = size;
	StackPointer = 0;
}

IntStack::~IntStack()
{
	delete StackStore;
}

bool IntStack::IsEmpty()
{	
	if (StackPointer == 0)
		return true;

	return false;
}

void IntStack::Push(int value)
{
	if (StackPointer != StackSize)
		StackStore[StackPointer++] = value;
}

int IntStack::Pop()
{
	return StackStore[--StackPointer];
}


IntStack& IntStack::operator<<(int value)
{
	Push(value);

	return *this;
}


int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) 
    {
		IntStack stk(100);
		int digit;

		istringstream iss(line);
		while (iss >> digit)
		{
			stk << digit;
		}

		while (!stk.IsEmpty())
		{
			cout << stk.Pop();

			if (!stk.IsEmpty())
			{
				stk.Pop();
				cout << " ";
			}
		}

		cout << endl;
    }
    return 0;
} 