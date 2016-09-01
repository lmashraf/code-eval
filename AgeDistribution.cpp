#include <iostream>
#include <fstream>

using namespace std;

string whichAge(int& age)
{
    string result = "";
    
    if (age < 0)
        result = "This program is for humans";
    else if (age <= 2)
        result = "Still in Mama's arms";
    else if (age <= 4)
        result = "Preschool Maniac";
    else if (age <= 11)
        result = "Elementary school";
    else if (age <= 14)
        result = "Middle school";
    else if (age <= 18)
        result = "High school";
    else if (age <= 22)
        result = "College";
    else if (age <= 65)
        result = "Working for the man";
    else if (age <= 100)
        result = "The Golden Years";
    else
        result = "This program is for humans";    
        
    return result;
    
}

int main(int argc, char *argv[]) 
{
    ifstream stream(argv[1]);
    
    string line;
    
    while (getline(stream, line)) 
    {
        int age = atoi(line.c_str());
        
        cout << whichAge(age) << endl;
    }
    return 0;
} 