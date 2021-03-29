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
    int t;
    cin >> t;
    int temp = t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        int sum = 0, r = 0, c = 0;
        bool dct = 0;
        for (int i = 0; i < n; i++)
        {
            vector<bool> vis(n + 1);
            dct = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
                if (vis[v[i][j]])
                    dct = 1;
                else
                    vis[v[i][j]] = 1;
                if (i == j)
                    sum += v[i][j];
            }
            if (dct)
                r++;
        }

        for (int i = 0; i < n; i++)
        {
            dct = 0;
            vector<bool> vis(n + 1);
            for (int j = 0; j < n; j++)
            {
                if (vis[v[j][i]])
                {
                    c++;
                    break;
                }
                else
                    vis[v[j][i]] = 1;
            }
        }
        cout << "Case #" << temp - t << ": " << sum << " " << r << " " << c << endl;
    }
    // system("pause");
}