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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<ll> DPUS(n + 1);
    vector<ll> DPS(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        DPUS[i + 1] = v[i] + DPUS[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        DPS[i + 1] = v[i] + DPS[i];
    }
    int m;
    cin >> m;
    int c, a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> c >> a >> b;
        if (c == 1)
            cout << DPUS[b] - DPUS[a - 1] << endl;
        else
            cout << DPS[b] - DPS[a - 1] << endl;
    }
    // system("pause");
}