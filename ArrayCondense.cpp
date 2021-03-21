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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    for (int i = 0;i<n;i++)
        cin >> v[i];
        ll selected = (k * m) - (k - 1);
    sort(v.begin(), v.end(), greater<ll>());
    ll sum = 0;
    for (int i = 0; i < selected; i++)
        sum += v[i];
    cout << sum;
    // system("pause");
}