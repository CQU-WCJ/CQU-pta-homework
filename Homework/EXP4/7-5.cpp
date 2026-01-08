#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sep(char c)
{
    return isspace(c) || ispunct(c);
}

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        string s;
        getline(cin, s);
        cout << s << endl;

        string cleaned;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (cleaned.empty() || i + 1 == s.size())
                    continue;
                if (sep(s[i + 1]))
                    continue;
                if (!cleaned.empty())
                    cleaned += ' ';
            }
            else
            {
                if (isupper(s[i]) && s[i] != 'I')
                    s[i] = tolower(s[i]);
                cleaned += s[i];
            }
        }

        s = cleaned;
        string res;

        for (int i = 0; i < s.size(); i++)
        {
            if (i + 6 < s.size() && s.substr(i, 7) == "can you" &&
                (i == 0 || sep(s[i - 1])) &&
                (i + 7 == s.size() || sep(s[i + 7])))
            {
                res += "I can";
                i += 6;
                continue;
            }

            if (i + 8 < s.size() && s.substr(i, 9) == "could you" &&
                (i == 0 || sep(s[i - 1])) &&
                (i + 9 == s.size() || sep(s[i + 9])))
            {
                res += "I could";
                i += 8;
                continue;
            }

            if (s[i] == 'I' && (i == 0 || sep(s[i - 1])) &&
                (i + 1 == s.size() || sep(s[i + 1])))
            {
                res += "you";
                continue;
            }

            if (i + 1 < s.size() && s.substr(i, 2) == "me" &&
                (i == 0 || sep(s[i - 1])) &&
                (i + 2 == s.size() || sep(s[i + 2])))
            {
                res += "you";
                i += 1;
                continue;
            }

            if (s[i] == '?')
            {
                res += '!';
                continue;
            }

            res += s[i];
        }

        cout << "AI: " << res << endl;
    }

    return 0;
}