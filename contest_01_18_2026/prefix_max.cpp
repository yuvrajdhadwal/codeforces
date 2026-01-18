#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Start Typing Here
    for (int i {0}; i < t; ++i)
    {
        int n;
        std::cin >> n;
        int curr;
        int max {-1};

        for (int j {0}; j < n; ++j)
        {
            std::cin >> curr;
            max = std::max(curr, max);
        }

        std::cout << max * n << '\n';
    }

    return 0;
}