#include <iostream>
using namespace std;

int main()
{
    char phone[12];

    cin >> phone;
    int mark[10] = {0};

    for (int i = 0; i < 11; i++)
    {
        int num = phone[i] - '0';
        mark[num] = 1;
    }

    int arr[10];
    int arr_count = 0;

    for (int num = 9; num >= 0; num--)
    {
        if (mark[num] == 1)
        {
            arr[arr_count] = num;
            arr_count++;
        }
    }

    int index[11];

    for (int i = 0; i < 11; i++)
    {
        int current_num = phone[i] - '0';
        for (int j = 0; j < arr_count; j++)
        {
            if (arr[j] == current_num)
            {
                index[i] = j;
                break;
            }
        }
    }

    cout << "int[] arr = new int[]{";
    for (int i = 0; i < arr_count; i++)
    {
        cout << arr[i];
        if (i < arr_count - 1)
        {
            cout << ",";
        }
    }
    cout << "};" << endl;

    cout << "int[] index = new int[]{";
    for (int i = 0; i < 11; i++)
    {
        cout << index[i];
        if (i < 10)
        {
            cout << ",";
        }
    }
    cout << "};" << endl;

    return 0;
}