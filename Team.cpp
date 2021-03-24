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
    int n, k;
    int x;
    while (t--)
    {
        int ans = 0;
        vector<int> v;

        cin >> n >> k;
        while (n--)
        {
            cin >> x;
            if (x >= k)
                ans++;
            else
            {
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        int i = 0, j = v.size() - 1;
        while (i < v.size() && j > i)
        {
            if (v[i] + v[j] >= k)
            {
                i++;
                ans++;
                j--;
            }
            else
                j--;
        }
        cout << ans << endl;
    }
    // system("pause");
}