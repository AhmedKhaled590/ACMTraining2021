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
        int n;
        cin >> n;
        vector<int> v(101);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[a]++;
        }
        int added = 0;
        for (int i = 0; i <= 100; i++)
        {
            if (v[i] > 0)
            {
                v[i]--;
                ans[added] = i;
                added++;
            }
        }
        for (int i = 0; i <= 100; i++)
        {
            for (int j = 0; j < v[i]; j++)
            {
                ans[added] = i;
                added++;
            }
        }
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    // system("pause");
}