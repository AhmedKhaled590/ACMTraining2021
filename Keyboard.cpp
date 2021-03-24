#include <iostream>
#include <stdio.h>
#include <sstream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <unordered_map>
#include <stdio.h>
#include <string.h>
using namespace std;
#define ll long long
#define ld long double
vector<vector<pair<int, int>>> v(27);
ll fastpow(ll b, ll p)
{
    if (!p)
        return 1;
    ll ret = fastpow(b, p >> 1);
    ret *= ret;
    if (p & 1)
        ret *= b;
    return ret;
}
ll dist(int x1, int x2, int y1, int y2)
{
    return fastpow(x1 - x2, 2) + fastpow(y1 - y2, 2);
}
int main()
{
    int n, m, b;
    cin >> n >> m >> b;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c != 'S')
                v[c - 'a'].push_back({i, j});
            else
                v[26].push_back({i, j});
        }
    }
    vector<bool> possible(26);
    for (int i = 0; i < 26; i++)
    {
        for (int k = 0; k < v[i].size(); k++)
        {
            for (int l = 0; l < v[26].size(); l++)
            {
                if (dist(v[26][l].first, v[i][k].first, v[26][l].second, v[i][k].second) <= b*b)
                {
                    possible[i] = 1;
                    break;
                }
            }
        }
    }
    int q;
    cin >> q;
    int steps = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> c;
        if (c >= 'A' && c <= 'Z')
        {
            if (v[26].size() == 0)
            {
                cout << "-1";
                // system("pause");
                return 0;
            }

            if (v[c - 'A'].size() == 0)
            {
                cout << "-1";
                // system("pause");
                return 0;
            }
            if (!possible[c - 'A'])
                steps++;
        }
        else if (v[c - 'a'].size() == 0)
        {
            cout << "-1";
            // system("pause");
            return 0;
        }
    }
    cout << steps;
    // system("pause");
}