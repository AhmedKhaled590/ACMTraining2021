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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        int bgn = s.find_first_of('*');
        int end = s.find_last_of('*');
        for (int i = bgn; i < end; i += k)
        {
            if (s[i] == '*')
                ans++;
            else
            {
                for (int j = 1; j <= k; j++)
                {
                    if (i - j > bgn && s[i - j] == '*')
                    {
                        ans++;
                        i -= j;
                        break;
                    }
                }
            }
        }
        ans++;
        cout << ans << endl;
    }
    // system("pause");
}