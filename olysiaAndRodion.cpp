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

ll power(ll a, ll n)
{
    if (n == 0)
        return 1;
    ll sq = power(a, n / 2);
    sq *= sq;
    if (n % 2 != 0)
        sq = sq * a;
    return sq;
}

int main()
{
    int n, t;
    cin >> n >> t;
    if (t == 10 && n == 1)
    {
        cout << "-1";
        return 0;
    }
    if (t == 10)
    {
        for (int i = 0; i < n-1; i++)
        {
            cout << "1";
        }
        cout << "0";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << t;
    }
    // system("pause");
}