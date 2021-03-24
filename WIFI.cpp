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

unsigned int fact(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

ll fastpow(ll b, ll p)
{
    if (!p)
        return 1;
    ll ret = fastpow(b, p >> 1);
    ret *= ret;
    if (p & 1)
        ret *= b;
    return ret;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int sum1 = 0, sum2 = 0, q = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '+')
            sum1++;
        else
            sum1--;

        if (s2[i] == '+')
            sum2++;
        else if (s2[i] == '-')
            sum2--;
        else
            q++;
    }
    if (sum1 == sum2)
    {
        if (q == 0)
        {
            cout << "1";
            // system("pause");
            return 0;
        }
    }

    vector<int> possible;
    int num = -1 * q;
    while (num != q)
    {
        possible.push_back(num + sum2);
        num += 2;
    }
    possible.push_back(q + sum2);
    int ind = -1;
    for (int i = 0; i < possible.size(); i++)
    {
        if (possible[i] == sum1)
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        cout << "0";
    }
    else
    {
        num = fact(q) / (fact(ind) * fact(q - ind));
        cout << setprecision(12) << double(num) / double(fastpow(2, q));
    }
    // system("pause");
}