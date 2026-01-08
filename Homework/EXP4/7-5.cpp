#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool pan(char c)
{
    return isspace(c) || ispunct(c);
}

int main()
{
    short N;
    cin >> N;
    string s;
    cin.ignore();

    while (N--)
    {
        getline(cin, s);
        cout << s << endl;

        size_t start = s.find_first_not_of(" ");
        size_t end = s.find_last_not_of(" ");
        if (start == string::npos)
        {
            s = "";
        }
        else
        {
            s = s.substr(start, end - start + 1);
        }

        string cleaned = "";
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                cleaned += s[i];
            }
            else
            {

                while (i + 1 < s.length() && pan(s[i + 1]))
                {
                    i++;
                }
                cleaned += s[i];
            }
        }
        s = cleaned;

        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'I')
            {
                s[i] = s[i] - 'A' + 'a';
            }
        }

        string result;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (i + 6 < s.length() && s.substr(i, 7) == "can you" &&
                (i == 0 || pan(s[i - 1])) &&
                (i + 7 == s.length() || pan(s[i + 7])))
            {
                result += "I can";
                i += 6;
                continue;
            }

            if (i + 8 < s.length() && s.substr(i, 9) == "could you" &&
                (i == 0 || pan(s[i - 1])) &&
                (i + 9 == s.length() || pan(s[i + 9])))
            {
                result += "I could";
                i += 8;
                continue;
            }

            if (s[i] == 'I' &&
                (i == 0 || pan(s[i - 1])) &&
                (i + 1 == s.length() || pan(s[i + 1])))
            {
                result += "you";
                continue;
            }

            if (i + 1 < s.length() && s.substr(i, 2) == "me" &&
                (i == 0 || pan(s[i - 1])) &&
                (i + 2 == s.length() || pan(s[i + 2])))
            {
                result += "you";
                i += 1;
                continue;
            }

            if (s[i] == '?')
            {
                result += '!';
                continue;
            }

            result += s[i];
        }

        cout << "AI: " << result << endl;
    }

    return 0;
}