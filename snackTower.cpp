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

int getMax(vector<int> a, int i, int n)
{
    int ind = i;
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] > a[ind])
        {
            ind = j;
        }
    }
    return ind;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return b.second < a.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
        a[i].first = i;
    }
    sort(a.begin(), a.end(), cmp);
    for (int j = 0; j < a[0].first; j++)
        cout << endl;
    cout << a[0].second << " ";

    int i = 1;
    while (i < n)
    {
        int curri = i;
        while (i < n && a[i].first < a[curri - 1].first)
        {
            cout << a[i].second << " ";
            i++;
        }
        if (i < n)
        {
            for (int j = 0; j < (a[i].first - a[curri - 1].first); j++)
            {
                cout << endl;
            }
        }
        if (i < n)
            cout << a[i].second << " ";
        i++;
    }

    // system("pause");
}