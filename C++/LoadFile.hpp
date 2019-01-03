#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string LoadFile()
// Return the raw text after loading and reading the file
{
    ifstream get_file("nachtlied-utf-8.txt");
    if (!get_file)
    {
        cout << "Keine Datei!";
        exit(1);
    }
    stringstream txt_file;
    txt_file << get_file.rdbuf();
    get_file.close();

    return txt_file.str();
}
