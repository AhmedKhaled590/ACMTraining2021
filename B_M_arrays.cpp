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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[a % m]++;
        }
        int ans = 0;
        if (v[0])
            ans++;

        for (int i = 1; i <= m / 2; i++)
        {
            if (v[i] || v[m - i])
            {
                ans += 1 + max(0, abs(v[i] - v[m - i]) - 1);
            }
        }
        cout << ans << endl;
    }
    // system("pause");
}