#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

void PreProcess_German(string *x)
{
    char chars[] = "()-:;.,\'!?\n ";
    transform(x->begin(), x->end(), x->begin(), ::tolower);
    for (unsigned int i = 0; i < strlen(chars); ++i)
    {
        x->erase(remove(x->begin(), x->end(), chars[i]), x->end());
    }
}
