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
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
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
                break;
            }
            for (int i = 0; i < v[c - 'A'].size(); i++)
            {
            }
        }
        else
        {
            if (v[c - 'a'].size() == 0)
            {
                cout << "-1";
                break;
            }
        }
    }
    system("pause");
}