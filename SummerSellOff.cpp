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

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return abs(min(2 * p1.first, p1.second) - min(p1.first, p1.second)) > abs(min(2 * p2.first, p2.second) - min(p2.first, p2.second));
}

int main()
{
    int n, f;
    cin >> n >> f;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < f; i++)
        v[i].first *= 2;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += min(v[i].first, v[i].second);
    }
    cout << sum;

    // system("pause");
}