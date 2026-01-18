#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int dead {-200005};

void update_lives(vector<int>& robots, unordered_set<int>& spikes, vector<int>& out, int shift)
{
    int died {0};
    for (int i {0}; i < robots.size(); ++i)
    {
        if (robots[i] == dead)
        {
            continue;
        }

        robots[i] += shift;
        if (spikes.contains(robots[i]))
        {
            robots[i] = dead;
            died += 1;
        }
    }

    out.push_back(out[out.size() - 1] - died);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Start Typing Here
    for (int dummy {0}; dummy < t; ++dummy)
    {
        int n, m, k;
        std::cin >> n >> m >> k;

        std::vector<int> robots(n);

        for (int i {0}; i < n; ++i)
        {
            std::cin >> robots[i];
        }

        std::unordered_set<int> spikes;

        for (int i {0}; i < m; ++i)
        {
            int spike;
            std::cin >> spike;
            spikes.insert(spike);
        }

        std::string instructions;
        std::cin >> instructions;
        std::vector<int> out;
        out.push_back(n);

        for (int i {0}; i < k; ++i)
        {
            if (spikes.size() == 0)
            {
                break;
            }

            if (instructions[i] == 'L')
            {
                update_lives(robots, spikes, out, -1);
            } else
            {
                update_lives(robots, spikes, out, 1);
            }

            if (out[out.size() - 1] == 0)
            {
                break;
            }
        }

        for (int i {1}; i < out.size(); ++i)
        {
            std::cout << out[i] << ' ';
        }

        for (size_t i {out.size() - 1}; i < k; ++i)
        {
            std::cout << out[out.size() - 1] << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}