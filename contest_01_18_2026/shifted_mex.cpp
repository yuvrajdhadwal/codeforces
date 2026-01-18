#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Start Typing Here
    for (int dummy {0}; dummy < t; ++dummy)
    {
        int n;
        std::cin >> n;

        vector<int> v(n);

        for (int i {0}; i < n; ++i)
        {
            std::cin >> v[i];
        }

        std::sort(v.begin(), v.end());
        int curr_streak {0};
        int max_streak {1};

        for (int i {0}; i < n - 1; ++i)
        {
            if (v[i] + 1 == v[i + 1])
            {
                curr_streak = curr_streak == 0 ? 2 : curr_streak + 1;
                max_streak = std::max(max_streak, curr_streak);
            } else if (v[i] != v[i + 1]) 
            {
                curr_streak = 0;
            }
        }

        std::cout << max_streak << '\n';
    }

    return 0;
}