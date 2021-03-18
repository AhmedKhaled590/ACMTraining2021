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
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int time1 = ceil(float(n) / k) * t;
    int time2 = 0;
    int remainReqCakes = n - ceil(float(d) / t) * k;
    if (remainReqCakes <= 0)
    {
        cout << "NO";
        // system("pause");
        return 0;
    }
    remainReqCakes = ceil(float(remainReqCakes) / k);

    if (remainReqCakes % 2 == 0)
    {
        time2 = remainReqCakes * t;
        time2 /= 2;
        time2 += d;
    }
    else
    {
        remainReqCakes--;
        time2 = remainReqCakes * t;
        time2 /= 2;
        time2 += d;
        time2 += t;
    }
    if (time1 <= time2)
        cout << "NO";
    else
        cout << "YES";
    // system("pause");
}