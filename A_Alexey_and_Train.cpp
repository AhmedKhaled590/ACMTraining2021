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
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        vector<int> b2(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
        }
        int aa = -1;
        for (int i = 1; i <= n; i++)
        {
            int t;
            cin >> t;
            aa = b2[i - 1] + a[i] - b[i - 1] + t;
            b2[i] = max(b[i], ((int)(ceil((b[i] - a[i]) / 2.0))) + aa);
        }
        cout << aa << endl;
    }
    // system("pause");
}