#include <bits/stdc++.h>
using namespace std;

int pickNum(const std::vector<int>& v, int i)
{
    int prev = v[i - 1];
    int next = v[i + 1];

    for (int i {1}; i <= 6; ++i)
    {
        if (prev != i && next != i && 7 - prev != i && 7 - next != i) { return i; }
    }

    return -1;
}

void helper()
{
    std::vector<int> v;
    int count;
    std::cin >> count;
    v.reserve(count);
    for (int i {0}; i < count; ++i)
    {
        int val;
        std::cin >> val;
        v.push_back(val);
    }

    int out {0};
    for (int i {1}; i < count; ++i)
    {
        if (v[i] == 7 - v[i - 1] || v[i] == v[i - 1])
        {
            ++out;
            v[i] = pickNum(v, i);
        }
    }

    std::cout << out << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Start Typing Here

    for (int d {0}; d < t; ++d)
    {
        helper();
    }

    return 0;
}