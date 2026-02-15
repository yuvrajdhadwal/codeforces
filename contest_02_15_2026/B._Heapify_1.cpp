#include <bits/stdc++.h>
using namespace std;

void downHeap(std::vector<int>& v, int index)
{
    int down = ((index + 1) * 2) - 1;

    if (down > v.size()) { return; }

    if (v[down] < v[index])
    {
        int temp = v[index];
        v[index] = v[down];
        v[down] = temp;
        downHeap(v, down);
    }
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

    for (int i {count / 2}; i >= 0; --i)
    {
        downHeap(v, i - 1);
    }

    // std::cout << "DEBUG: ";
    // for (int e : v)
    //     std::cout << e << ' ';
    // std::cout << '\n';

    for (int i {0}; i < v.size(); ++i)
    {
        if (v[i] != i + 1)
        {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
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