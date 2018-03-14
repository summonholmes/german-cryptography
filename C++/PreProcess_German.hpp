#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

void PreProcess_German(string *plaintext)
{
    char chars[] = "()-:;.,\'!?\n ";
    transform(plaintext->begin(), plaintext->end(), plaintext->begin(), ::tolower);
    for (unsigned int i = 0; i < strlen(chars); ++i)
    {
        plaintext->erase(remove(plaintext->begin(), plaintext->end(), chars[i]), plaintext->end());
    }
}
