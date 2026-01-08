#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();
    string s;

    for (int i = 0; i < N; i++)
    {
        getline(cin, s);
        bool found = false;
        int douhao = s.find(',');
        if (douhao >= 3)
        {
            string qwe = s.substr(douhao - 3, 3);
            if (qwe == "ong")
            {
                if (s.substr(s.size() - 4, 3) == "ong")
                {
                    found = true;
                }
            }
        }

        if (!found)
        {
            cout << "Skipped" << endl;
            continue;
        }

        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word)
        {
            words.push_back(word);
        }

        if (words.size() < 3)
        {
            cout << "Skipped" << endl;
            continue;
        }

        string result;
        for (int j = 0; j < words.size() - 3; j++)
        {
            if (j > 0)
                result += " ";
            result += words[j];
        }

        result += " qiao ben zhong.";
        cout << result << endl;
    }

    return 0;
}