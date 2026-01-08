#include <iostream>
#include <string>
using namespace std;

int main()
{
    char zimu;
    string str;
    getline(cin, str);
    int num = 0;
    cin.get(zimu);
    for (int i = 0; i < str.size(); i++)
    {
        if (zimu == str[i])
        {
            num++;
        }
    }
    cout << num;
    return 0;
}