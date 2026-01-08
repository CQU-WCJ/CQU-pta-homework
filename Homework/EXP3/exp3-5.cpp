#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N, M, k;
    cin >> N >> M;
    cin.ignore();
    vector<string> biaoji(N);
    vector<int> line(M);
    vector<vector<int>> num(M, vector<int>(10));
    for (int i = 0; i < N; i++)
        getline(cin, biaoji[i]);
    for (int i = 0; i < M; i++)
        cin >> line[i];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < 10; j++)
            cin >> num[i][j];
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int mark;
        cin >> mark;
        int hang = mark / 10, lie = mark % 10;
        int h = -1;
        for (int j = 0; j < M; j++)
        {
            if (line[j] == hang)
            {
                h = j;
                break;
            }
        }
        if (h == -1)
        {
            cout << "?\n";
            continue;
        }
        if (num[h][lie] == -1)
        {
            cout << "?\n";
        }
        else
        {
            int idx = num[h][lie] - 1;
            if (idx >= 0 && idx < N)
                cout << biaoji[idx] << endl;
            else
                cout << "?\n";
        }
    }
}