
#include <cstdlib>
#include <iostream>

using namespace std;

//Change this to 1 to display debug messages
int DEBUG=0;



void debug(string out)
{
    if(DEBUG == 1)
    {
        cout << "DEBUG:\n";
        cout << out << "\n";
    }
}

void debug(int out)
{
    if(DEBUG == 1)
    {
        cout << "DEBUG:\n";
        cout << out << "\n";
    }
}

void debug(string desc, int out)
{
    if(DEBUG == 1)
    {
        cout << "DEBUG: " << desc << "\n";
        cout << out << "\n";
    }
}
