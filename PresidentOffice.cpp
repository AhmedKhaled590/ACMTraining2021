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

int main()
{
    int n, m;
    char c;
    cin >> n >> m >> c;
    vector<vector<char>> v(n, vector<char>(m));
    int xf = -1, yf = -1;
    int xe = -1, ye = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == c)
            {
                if (xf == -1)
                {
                    xf = i;
                    yf = j;
                }
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (v[i][j] == c)
            {
                xe = i;
                ye = j;
                break;
            }
        }
        if (xe != -1)
            break;
    }
    set<char> s;
    for (int i = xf; i < xe + 1; i++)
    {
        for (int j = yf; j < ye + 1; j++)
        {
            if (i - 1 >= 0 && v[i - 1][j] != '.' && v[i - 1][j] != c)
            {
                s.insert(v[i - 1][j]);
            }

            if (i + 1 < n && v[i + 1][j] != '.' && v[i + 1][j] != c)
            {
                s.insert(v[i + 1][j]);
            }

            if (j - 1 >= 0 && v[i][j - 1] != '.' && v[i][j - 1] != c)
            {
                s.insert(v[i][j - 1]);
            }

            if (j + 1 < m && v[i][j + 1] != '.' && v[i][j + 1] != c)
            {
                s.insert(v[i][j + 1]);
            }
        }
    }
    cout << s.size();
    // system("pause");
}