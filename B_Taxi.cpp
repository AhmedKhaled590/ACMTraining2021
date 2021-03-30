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
    int n;
    cin >> n;
    vector<int> v(5);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[a]++;
    }
    int ans = 0;

    int num = min(v[1], v[3]);
    v[1] -= num;
    v[3] -= num;
    ans += num;

    num = min((int)ceil(v[1] / 2.0), v[2]);
    v[1] -= 2 * num;
    v[2] -= num;
    ans += num;

    ans += ceil(v[1] / 4.0) + ceil(v[2] / 2.0) + v[3] + v[4];
    cout << ans;

    // system("pause");
}