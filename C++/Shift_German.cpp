#include <iostream>
#include <fstream>
#include <sstream>
#include "PreProcess_German.hpp"

using namespace std;

void PreProcess_German(string *);

int main()
{
    ifstream get_file("nachtlied-utf-8.txt");

    if (!get_file)
    {
        cout << "Couldn't open the file";
    }
    else
    {
        stringstream f;
        string x;

        f << get_file.rdbuf();
        get_file.close();
        x = f.str();

        PreProcess_German(&x);
        cout << x;
    }
    return 0;
}
