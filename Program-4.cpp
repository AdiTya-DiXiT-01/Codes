#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> get_multiples_count(vector<int> &numbers_list)
{

    unordered_map<int, int> multiples_count;
    for (int i = 1; i <= 9; ++i)
    {
        multiples_count[i] = 0;
    }

    for (int num : numbers_list)
    {

        for (int i = 1; i <= 9; ++i)
        {
            if (num % i == 0)
            {
                ++multiples_count[i];
            }
        }
    }

    return multiples_count;
}
int main()
{

    vector<int> numbers_list;
    int n;
    cout << "Enter the number of inputs" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers_list.push_back(x);
    }

    unordered_map<int, int> result = get_multiples_count(numbers_list);

    for (int i = 1; i <= 9; ++i)
    {
        cout << i << ": " << result[i] << ", ";
    }

    return 0;
}
