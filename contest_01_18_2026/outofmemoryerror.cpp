#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Start Typing Here
    for (int dummy {0}; dummy < t; ++dummy)
    {
        int n, m, h;
        std::cin >> n >> m >> h;
        std::vector<int> v(n);

        for (int i {0}; i < n; ++i)
        {
            std::cin >> v[i];  // O(n)
        }

        std::vector<int> base = v;  // O(n)
        bool changed {false};

        for (int i {0}; i < m; ++i)
        {
            int b, c;
            std::cin >> b >> c;

            int new_val {v[b - 1] + c};

            if (new_val > h)
            {
                if (changed)
                {
                    v = base;
                    changed = false;
                }
            } else
            {
                changed = true;
                v[b - 1] = new_val;
            }
        }

        for (int i {0}; i < n; ++i)
        {
            std::cout << v[i] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}