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

ll GCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll sum = 0;
        ll temp = x;
        ll temp2 = x;
        while (x > 0) //o(18)
        {
            sum = sum + x % 10;
            x /= 10;
        }
        while (GCD(temp, sum) <= 1)
        {
            temp++;
            sum = 0;
            string s = to_string(temp);
            for (int i = 0; i < s.length(); i++)
                sum += (s[i] - '0');
        }
        cout << temp << endl;
    }
    // system("pause");
}