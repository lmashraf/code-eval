#include <iostream>
#include <fstream>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[]) 
{
    char*       file_name = argv[1];
    struct stat file_status;
    
    stat(file_name, &file_status);
    std::cout << file_status.st_size;
      
    return 0;
} 