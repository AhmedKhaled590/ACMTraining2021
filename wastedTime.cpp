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
#define d double

d dist(int x1, int x2, int y1, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    d distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        distance += dist(x[i], x[i + 1], y[i], y[i + 1]);
    }
    cout << setprecision(10) << k * (distance / 50.0);
    // system("pause");
}