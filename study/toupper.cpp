#include<iostream>

using namespace std;
int main (int ac, char **av)
{
    const char *s = "adfad";
    char *m ;
    int i, j;
    i = 0;
    j = 0;

    while(s[i])
    {
    cout << m[j] <<endl;
    cout << s <<endl;
    m[j] = (char)toupper[i];
    j++;
    s++;
    }
    cout << s << endl;
    cout << m << endl;
}
