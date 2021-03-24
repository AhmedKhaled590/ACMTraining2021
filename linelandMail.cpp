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
#include <limits.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        ll ml = (i != 0) ? abs(a[i] - a[0]) : INT_MAX;
        ml = min(ml, (i - 1 >= 0) ? abs(a[i] - a[i - 1]) : INT_MAX);
        ml = min(ml, (i + 1 < n) ? abs(a[i] - a[i + 1]) : INT_MAX);
        ml = min(ml, (i != n - 1) ? abs(a[i] - a[n - 1]) : INT_MAX);
        cout << ml << " ";
        ml = (i != 0) ? abs(a[i] - a[0]) : INT_MIN;
        ml = max(ml, (i - 1 >= 0) ? abs(a[i] - a[i - 1]) : INT_MIN);
        ml = max(ml, (i + 1 < n) ? abs(a[i] - a[i + 1]) : INT_MIN);
        ml = max(ml, (i != n - 1) ? abs(a[i] - a[n - 1]) : INT_MIN);
        cout << ml << endl;
    }
    // system("pause");
}