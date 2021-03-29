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

bool cmp(pair<int, double> p1, pair<int, double> p2)
{
    return p1.second > p2.second;
}

int main()
{
    double n, t1, t2;
    double k;
    cin >> n >> t1 >> t2 >> k;
    k = 1.0 - k / 100.0;
    vector<pair<double, int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if ((a * t1 * k + b * t2) >= (b * t1 * k + a * t2))
        {
            ans.push_back({-1 * (a * t1 * k + b * t2), i + 1});
        }
        else
        {
            ans.push_back({-1 * (b * t1 * k + a * t2), i + 1});
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(0) << ans[i].second << " " << fixed << setprecision(2) << -1 * ans[i].first << endl;
    }
    // system("pause");
}