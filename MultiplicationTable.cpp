#include <iostream>

int main(int argc, char *argv[]) 
{	
    for(unsigned int i = 1; i <= 12; ++i)
	{
		for(unsigned int j = 1; j <= 12; ++j)
		{
			std::cout.width(4);
			std::cout << i * j	;
		}
		
		std::cout<< std::endl;
	}
    return 0;
}