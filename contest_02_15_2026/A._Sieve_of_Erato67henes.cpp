#include <bits/stdc++.h>
using namespace std;

void helper()
{
    int count;
    std::cin >> count;

    bool b67 {false};
    // bool b1 {false};

    for (int i {0}; i < count; ++i)
    {
        int val {0};
        std::cin >> val;

        if (val == 67) { b67 = true; }
        // else if (val == 1) { b1 = true; }
    }

    if (b67)
    {
        std::cout << "YES\n";
    } else 
    {
        std::cout << "NO\n";
    }
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