#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Start Typing Here

    for (int i {0}; i < t; ++i)
    {
        int count;
        std::cin >> count;

        for (int j {1}; j <= count; ++j)
        {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}